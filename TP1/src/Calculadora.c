/*
 ============================================================================
 Name        : TP.c
 Author      : gula
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Library.h"

int main(void) {

	setbuf(stdout,NULL);
	int opcion=0,bandera1=0,bandera2=0,resultado=0,factorial;
	float numeroA=0.0f, numeroB=0.0f,suma=0,resta=0,multiplicacion=0,division=0;

			do{
	        printf("Ingrese 1 para ingresar 1er operando (A=%f)\n",numeroA);
	        printf("Ingrese 2 para ingresar 2do operando (B=%f)\n",numeroB);
	        printf("Ingrese 3 para calcular todas las operaciones siguentes:\n\n");
	        printf("\t a) Calcular la suma\n");
	        printf("\t b) Calcular la resta (A-B)\n");
	        printf("\t c) Calcular la division (A/B)\n");
	        printf("\t d) Calcular la multiplicacion (A*B)\n");
	        printf("\t e) Calcular el factorial (A!)\n\n");
	        printf("Ingrese 4 para informar los resultados\n");
	        printf("Ingrese 5 para Salir\n");
	        printf("INGRESE UNA OPCION :\n");
	        scanf("%d",&opcion);

	        switch(opcion){
	        case 1:
	            bandera1=1;
	            system("cls");
	            int retornoScanf;
	            do {
	                printf("Por favor ingrese el primer operando:\t");
	                int retornoScanf = scanf(" %f",&numeroA);
	                while(getchar() != '\n');
	                }while (retornoScanf == 0);
	                 system("cls");
	                break;
	        case 2:
	            system("cls");
	            bandera2=1;
	                 do {
	                printf("Por favor ingrese el segundo operando:\t");
	                int retornoScanf = scanf(" %f",&numeroB);
	                while(getchar() != '\n');
	                }while (retornoScanf == 0);
	                 system("cls");
	                break;

	        case 3:
	            system("cls");
	            if  (bandera1==0 || bandera2==0)
	            {
	                printf("\tNo ingreso los operando\n");
	            }

	            suma=sumar(numeroA,numeroB);
	            resta=restar(numeroA,numeroB);
	            multiplicacion= multiplicar(numeroA,numeroB);
	            division =dividir(numeroA,numeroB);
	            factorial=factorializa(numeroA);
	            system("cls");
	            printf("\Operaciones realizadas, para mostrarlas ingrese -> 4 \n\n");
	            break;

	        case 4:
	            if (bandera1==0 || bandera2==0)
	            {
	                printf("\tNo ingreso los operando\n");
	            }
	            else
	            {   system("cls");
	                printf(" El primer operador es (A=%f)\n",numeroA);
	                printf(" El segundo operador es(B=%f)\n",numeroB);
	                printf("Calculaste todas las operaciones siguentes:\n\n");
	                printf("\t a) Calcular la suma (A+B)\n");
	                printf("\t b) Calcular la resta (A-B)\n");
	                printf("\t c) Calcular la division (A/B)\n");
	                printf("\t d) Calcular la multiplicacion (A*B)\n");
	                printf("\t e) Calcular el factorial (A!)\n\n");
	                printf("\nLos resultados son:\n");
	                printf("\n a)El resultado de A+B es:%f",suma);
	                printf("\n b)El resultado de A-B es:%f",resta);
	                printf("\n c)El resultado de A*B es:%f",multiplicacion);
	                printf("\n d)El resultado de A/B es:%f",division);
	                printf("\n e)El factorial de A es: %d y el factorial de B es:%d \n\n",factorializa(numeroA),factorializa(numeroB));
	                opcion=5;

	                break;
	            }

	        }


	    }
	        while(opcion!=5);

	return EXIT_SUCCESS;
}
