/*
 * =====================================================================================
 *
 *       Filename:  Empleado.h
 *
 *    Description:  Definición de la Clase Empleado
 *
 *        Created:  2019-08-22
 *
 *         Author:  Alonso Chaves achaqui@yahoo.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#ifndef EMPLEADOPUNTEROS_EMPLEADO_H
#define EMPLEADOPUNTEROS_EMPLEADO_H


#include <string>

const int LIMITESUPERIOR = 100;


class Empleado{
protected:
    int identificador;
    std::string nombre;
    int annosExperiencia;
    int salarioBase;
    bool disponibilidad;
    float aumentoSalario(int *);
    void revisionAleatoria(bool *);
    
public:
    
    Empleado();
    Empleado(std::string, int, int);
    std::string reporteEmpleado(std::string vector[]);
    
    void setDisponibilidad(bool);
    bool getDisponibilidad();

    void setSalarioBase(int);
    int getSalarioBase();

    void setAnnosExperiencia(int);
    int getAnnosExperiencia();

    void setNombre(std::string);
    std::string getNombre();

    void setIdentificador(int);
    int getIdentificador();





};
#endif //EMPLEADOPUNTEROS_EMPLEADO_H
