/*
Programa que recibe una cadena del usuario y verifica 
@author: Monge Cortes Valeria 
@date: 26 / 09 / 24
*/

#include <stdio.h>
#include <string.h>
\
int main (){
    char str[100];
    printf("Ingresa una cadena\n");
    fgets(str, 100, stdin); //lee una cadena de 100 caracteres y lo guarda en str

    if(strlen(str) >1){
        printf("Cade longitud: %d\n", strlen(str));
    }
    return 0;
}
