/*
 * Library.h
 *
 *  Created on: 12 sep. 2020
 *      Author: Gula
 */

#ifndef LIBRARY_H_
#define LIBRARY_H_

/**
 * \brief Solicita dos numeros al usuario y los suma, sean int char o float
 * \param float es el primer  numero ingresado que se va a sumar
 * \param float es el segundo numero ingresado que se va a sumar
 *
 * */
float sumar(float numeroA, float numeroB);

/**
 * \brief Solicita dos numeros al usuario y los resta, sean int char o float
 * \param float es el primer  numero ingresado que se va a restar
 * \param float es el segundo numero ingresado que se va a restar
 *
 * */
float restar(float numeroA, float numeroB);

/**
 * \brief Solicita dos numeros al usuario y los multiplica, sea int char o float
 * \param float es el primer  numero ingresado que se va a multiplicar
 * \param float es el segundo numero ingresado que se va a multiplicar
 *
 * */
float multiplicar(float numeroA, float numeroB);

/**
 * \brief Solicita dos numeros al usuario y los divide, verifica que no sean "0"
 * \param float es el primer  numero ingresado que se va a dividir
 * \param float es el segundo numero ingresado que se va a dividir
 *
 * */
float dividir(float numeroA, float numeroB);

/**

 * */
int factorializa(float numero);


#endif /* LIBRARY_H_ */
