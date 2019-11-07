#include <stdio.h>
#include <stdlib.h>

//declaramos el prototipo
void cambiarValores(int *pnumero1, int *pnumero2);

/**
 * metodo main
 * @return 
 */
int main(){
    int numero1;
    int numero2;
    printf("ingrese el primer numero");
    scanf("%d",&numero1);
    printf("ingrese el segundo numero");
    scanf("%d",&numero2);
    printf("El valor original de numero 1: %d\n", numero1);
    printf("El valor iriginal de numero 2: %d\n", numero2);
    cambiarValores(&numero1,&numero2);
    printf("El numero cambiado del numero 1: %d\n", numero1);
    printf("El número cambiado del numero 2: %d\n", numero2);
    return 0;
}

/**
 * le pnumero1snumero1mos los punteros de los dos numeros
 * @pnumero1 pnumero1
 * @pnumero2 pnumero2
 */
void cambiarValores(int *pnumero1, int *pnumero2){
    //trabajamos con los punteros para sumar en el primero los dos
    *pnumero1=*pnumero1+*pnumero2;
    //al puntero 2
    *pnumero2=*pnumero1-*pnumero2;
    //cambiamos el numero
    *pnumero1=*pnumero1-*pnumero2;
}