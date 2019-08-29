/*
 * =====================================================================================
 *
 *       Filename:  Empleado.cpp
 *
 *    Description:  Implementación de la Clase Empleado
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

float Empleado::aumentoSalario(const int *annosExperiencia) {
    float salarioNuevo = 0;
    if ((*annosExperiencia >= 1) && (*annosExperiencia <= 3)) {
        salarioNuevo = salarioBase + (salarioBase * 0.02);
    } else {
        if (*annosExperiencia > 3) {
            salarioNuevo = salarioBase + (salarioBase * 0.05);
        }
    }
    return salarioNuevo;
}

void Empleado::revisionAleatoria(bool *disponibilidad) {
    if (rand() % 2 == 0) {
        *disponibilidad = 1;
    } else {
        *disponibilidad = 0;
    }
}

Empleado::Empleado() {
    nombre = "";
    annosExperiencia = 0;
    salarioBase = 0;
    identificador = std::rand() % LIMITESUPERIOR;
}

Empleado::Empleado(const string *nombre, int annosExperiencia, float salarioBase) {
    this->nombre = *nombre;
    this->annosExperiencia = annosExperiencia;
    this->salarioBase = salarioBase;
    identificador = std::rand() % LIMITESUPERIOR;
}

string Empleado::obtenerDatos() {


    string reporte = "";
    reporte = reporte + "Empleado [ " + std::to_string(getIdentificador()) + " ]\nNombre [ " + getNombre() + " ]\nAnnos de experiencia [ " + std::to_string(annosExperiencia) + " ]\n"
            "Salario Inicial [ " + std::to_string(salarioBase) + " ]\n"
            "Salario Acumulado [ " + std::to_string(aumentoSalario(&annosExperiencia)) + " ]\n"
            "Necesita revision [ " + std::to_string(disponibilidad) + " ]\n";

    return reporte;
}

void Empleado::setSalarioBase(float salarioBase) {
    this->salarioBase = salarioBase;
}

float Empleado::getSalarioBase() {
    return salarioBase;
}

void Empleado::setAnnosExperiencia(int annosExperiencia) {
    this->annosExperiencia = annosExperiencia;
}

int Empleado::getAnnosExperiencia() {
    return annosExperiencia;
}

void Empleado::setNombre(string nombre) {
    this->nombre = nombre;
}

std::string Empleado::getNombre() {
    return nombre;
}

void Empleado::setIdentificador(int identificador) {
    this->identificador = identificador;
}

int Empleado::getIdentificador() {
    return identificador;
}



