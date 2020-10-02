/*
 ============================================================================
 Name        : tpEmpleados.c
 Author      : gula
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "utn.h"
#include "abm.h"
#include "empleados.h"

int menu(int*opcion);
int main()
{
	setbuf(stdout, NULL);
    Employee employees[CANTIDADEMPLEADOS];
    int opcion;
    int auxSector;
    char auxName[51];
    char auxLastName[51];
    float auxSalary;
    int auxid;
    float total;
    float promedio;
    int cantidadMayorAlPromedio;
    emp_inicializarArray(employees,CANTIDADEMPLEADOS);

    emp_alta(employees,emp_obtenerID(),CANTIDADEMPLEADOS,"Ramiro","Hitaller",10500,2);
    emp_alta(employees,emp_obtenerID(),CANTIDADEMPLEADOS,"Ramon","De la canal",22000,1);
    emp_alta(employees,emp_obtenerID(),CANTIDADEMPLEADOS,"Luis","Masotta",6700,1);
    emp_alta(employees,emp_obtenerID(),CANTIDADEMPLEADOS,"Fiore","Calaca",8200,1);
    emp_alta(employees,emp_obtenerID(),CANTIDADEMPLEADOS,"Ricardo","Hawkings",4900,3);
    emp_alta(employees,emp_obtenerID(),CANTIDADEMPLEADOS,"Alex","Otero",49000,2);

    do{
        system("cls");
        menu(&opcion);
        switch (opcion){
            case 1:
                if(!utn_getLetras(auxName,CANTIDADEMPLEADOS,3,"\nIngrese el nombre: ","\nIngrese un nombre valido")&&
                    !utn_getLetras(auxLastName,CANTIDADEMPLEADOS,3,"\nIngrese el apellido: ","\nIngrese un apellido valido")&&
                    !utn_getFloat(&auxSalary,3,"\nIngrese el salario: ","\nIngrese un salario valio",0,999999)&&
                    !utn_getEntero(&auxSector,3,"\nIngrese el sector: ","\nIngrese un sector valido",1,3)){
                    auxid=emp_obtenerID();
                    emp_alta(employees,auxid,CANTIDADEMPLEADOS,auxName,auxLastName,auxSalary,auxSector);
                }
                break;
            case 2:
                if(!utn_getEntero(&auxid,3,"\nIngrese el id del empleado a modificar :","\nError..Ingrese un id valido",-1,999)){
                    emp_modificarById(employees,CANTIDADEMPLEADOS,auxid);
                }
                break;
            case 3:
                if(!utn_getEntero(&auxid,3,"\nIngrese el id del empleado a borrar :","\nError..Ingrese un id valido",-1,999)){
                    emp_borrarbyId(employees,CANTIDADEMPLEADOS,auxid);
                }
                break;
            case 4:
                emp_ordenarByLastNameOrSector(employees,CANTIDADEMPLEADOS,1);
                emp_imprimir(employees,CANTIDADEMPLEADOS);
                emp_informeSueldos(employees,CANTIDADEMPLEADOS,&cantidadMayorAlPromedio,&total,&promedio);
                printf("\nTotal: %.2f\t Promedio: %.2f\nLa Salarios mayores al promedio %d",total,promedio,cantidadMayorAlPromedio);
                getchar();
                break;
        }
    }while(opcion!=5);
    return EXIT_SUCCESS;
}
int menu(int*opcion){
    printf("\nINGRESE 1 PARA DAR ALTAS\nINGRESE 2 PARA MODIFICAR\nINGRESE 3 PARA DAR BAJA\nINGRESE 4 PARA VER INFORMES\nINGRESE 5 PARA SALIR");
    utn_getEntero(opcion,3,"\nIngrese una opcion: ","\nError\nLea el menu de opciones.",1,5);
    return 0;

}
