/*
 * utn.h
 *
 *  Created on: 2 oct. 2020
 *      Author: Gula
 */

#ifndef UTN_H_
#define UTN_H_

/*
    utn_getchar:valida una entrada al usuario en formato char
    @param pResultado: puntero donde guardar el char obtenido
    @return 0 is ok, -1 error
*/
int utn_getEntero(int*pEdad,int reintentos,char* msg,char*msgError,int max,int min);


int utn_mostrarArray(int * pArray,int limite);

int utn_calcularNumeroMaximo(int *pArray,int limite,int *maximo);

int utn_initArray(int * pArray,int limite,int valor);

int utn_cargaNumeroAleatoriosEnArrays(int* pArray,int len,int min, int max);

int utn_promedioArray(int*pArray,int limite,float *promedio,int valorOmision);

/** Ordenar array de mayor a menor o de mayor a menor
@parametros
pArray: puntero al array
limite: limite del array
flagMaxMin: colocar 1 para ordenar de menor a mayor o 0 de mayor a menor
*/
int utn_ordenarArray(int *pArray,int limite,int flagMaxMin);
int utn_getFloat(float*pFloat,int reintentos,char* msg,char*msgError,float min,float max);
int utn_getLetras(char *pBuffer,int limite,int reintentos,char* msj,char*msjError);
int ordenarInsertion(int* pArray,int limite);
/**int printPersona(Persona* pBuffer);
int utn_altaPersona(Persona* pPersona,int reintentos,int lenString,int min,int max);*/
int getString(char* pBuffer,int limite);
int utn_getLetrasYNumeros(char* pBuffer,int limite,char* msj);
int utn_getEmial(char *pBuffer,int limite,int reintentos,char* msj,char*msjError);


#endif /* UTN_H_ */
