/*
Programa que recibe una cadena e indica si la cadena esta vacia o no 
@author: Monge Cortes Valeria 
@date: 26 / 09 / 24
*/

#include <stdio.h>
#include <string.h>

int main (){
    char str1[100];

    printf("Ingresa una cadena\n");
    fgets(str1, 100, stdin); //lee una cadena de 100 caracteres y lo guarda en str

    printf("%s", (strlen(str)==1)?"Cadena vacia":"Cadena no vacia\n");


    return 0;
}