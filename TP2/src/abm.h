/*
 * abm.h
 *
 *  Created on: 2 oct. 2020
 *      Author: Gula
 */

#ifndef ABM_H_
#define ABM_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "utn.h"
#define CANTIDADEMPLEADOS 100
typedef struct{
    int id;
    char name[51];
    char lastname[51];
    float salary;
    int sector;
    int isEmpty;
}Employee;

int emp_inicializarArray(Employee* pBuffer,int limite);
int emp_obtenerID();
int emp_modificarById(Employee* pBuffer,int limite,int id);
int emp_borrarbyId(Employee* pBuffer,int limite,int id);
int emp_swap(Employee* pBuffer,int indiceDestino,int indiceOrigen);
int emp_alta(Employee* pBuffer,int id,int limite,char* name,char* lastName,float salary,int sector);
int emp_informeSueldos(Employee* pbuffer,int limite,int*cantMayor,float*total,float*promedio);
int emp_ordenarByLastNameOrSector(Employee* pBuffer,int limite,int flag);
int emp_imprimir(Employee* pBuffer,int limite);


#endif /* ABM_H_ */
