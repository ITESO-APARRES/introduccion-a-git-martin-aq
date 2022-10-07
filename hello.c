/*
 * Archivo hello.c que usamos para nuestro
 * ejercicio de git basico
*/

#include <stdio.h>

int main(void){
    printf("Hola mundo");
    return 0;
}

void decirHola(char* nombre){
    printf("Hola %s, ¿como estas?", nombre);
}