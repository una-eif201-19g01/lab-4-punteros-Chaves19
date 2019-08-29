/*
 * =====================================================================================
 *
 *       Filename:  Empleado.h
 *
 *    Description:  Definición del main
 *
 *        Created:  2019-08-22
 *
 *         Author:  Alonso Chaves achaqui@yahoo.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#include <iostream>
#include "Empleado.h"

int main() {
    Empleado empleado[3];

    empleado[0].setNombre("Mike");
    empleado[0].setAnnosExperiencia(2);
    empleado[0].setSalarioBase(1200000);

    return 0;
}