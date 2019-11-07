#include <stdio.h>

//se declaran los prototipos de la funcion de potencia y de la de convertir
int potencia(int x,int y);
int convertir(int, int);
/**
 * funcion main
 * @return
 */
int main(){
    int numDecimal;
    printf("Ingrese el numero en base 2 que desea convertir a base 10 :\n");
    scanf("%d",&numDecimal);
    printf(" Numero base 2: %d \n Numero base 10: %d",numDecimal, convertir(numDecimal, 0));
    return 0;
}

/**
 * funcion para convertir el numero binario a decimal
 * @param decimal
 * @param n
 * @return
 */
int convertir(int decimal, int n){
    int y = n;
    if(decimal==0){
        return 0;
    } else {
        return (((decimal%10) * potencia(2, y)) + convertir((decimal/10), ++y));
    }
}
/**
 * funcion para calcular la potencia
 * @param x
 * @param y
 * @return
 */
int potencia(int x,int y){
    if(y==0){
        return 1;
    } else{
        return x*potencia(x,y-1);
    }
}