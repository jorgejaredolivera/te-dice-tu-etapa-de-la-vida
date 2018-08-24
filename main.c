/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: olivera
 *
 * Created on 23 de agosto de 2018, 09:02 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    printf("hola chavo dime tu edad y te dire en que etapa de la vida estás");
    float edad;
    scanf("%f",&edad);
    
    if (edad>=60){
        printf("eres un anciano\n");
    }
    if (edad>=20&&edad<60){
        printf("\n tu eres un adulto\n");
    }
    if (edad<=19&&edad>=12){
        printf("tu eres un adolescente\n");
    }
    if (edad<=11&&edad>=6){
        printf("eres un mocoso jaja saludos\n");
    }
    if (edad<=5&&edad>0){
        printf("eres un bebe o bien un infante\n");
    }
    printf("\nhasta la proxima amigos");
    return 0;
}

