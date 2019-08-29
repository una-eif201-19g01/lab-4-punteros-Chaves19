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





float Empleado::aumentoSalario(int *annosExperiencia) {
    float salarioNuevo = 0;
    if ((*annosExperiencia >= 1)&&(*annosExperiencia <= 3)) {
        salarioNuevo = salarioBase * (salarioBase * 0.02);
        else {
            if (*annosExperiencia > 3) {
                salarioNuevo = salarioBase * (salarioBase * 0.05);
            }
        }
    }
    return salarioNuevo;
}

void Empleado::revisionAleatoria(bool *disponibilidad) {

}

std::string reporteEmpleado(std::string empleado[]) {

}

void Empleado::setDisponibilidad(bool disponibilidad) {
    this->disponibilidad = disponibilidad;
}

bool Empleado::getDisponibilidad() {
    return disponibilidad;
}

void Empleado::setSalarioBase(int salarioBase) {
    this->salarioBase = salarioBase;
}

int Empleado::getSalarioBase() {
    return salarioBase;
}

void Empleado::setAnnosExperiencia(int annosExperiencia) {
    this->annosExperiencia = annosExperiencia;
}

int Empleado::getAnnosExperiencia() {
    return annosExperiencia;
}

void Empleado::setNombre(std::string nombre) {
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



