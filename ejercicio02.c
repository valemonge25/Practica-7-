/*
Programa que recibe dos cadenas y compara si son iguales o no 
@author: Monge Cortes Valeria 
@date: 26 / 09 / 24
*/

#include <stdio.h>
#include <string.h>
\
int main (){
    char str1[100], str2[100];

    printf("Ingresa una cadena\n");
    fgets(str1, 100, stdin); //lee una cadena de 100 caracteres y lo guarda en str

    printf("Ingresa una cadena\n");
    fgets(str2, 100, stdin); //lee una cadena de 100 caracteres y lo guarda en str

    if(strcmp(str1, str2) >1){
        printf("Las cadenas son iguales\n");
    }
    else {
        printf("Las cadenas son diferentes\n");
    }
    return 0;
}