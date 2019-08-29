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

    empleado[1].setNombre("Sebastian");
    empleado[1].setAnnosExperiencia(3);
    empleado[1].setSalarioBase(1600000);

    empleado[2].setNombre("Carolina");
    empleado[2].setAnnosExperiencia(8);
    empleado[2].setSalarioBase(1800000);

    for (int contador = 0; contador < 4; contador++) {
        std::cout << empleado[contador].obtenerDatos() << std::endl;
    }

    return 0;
}
