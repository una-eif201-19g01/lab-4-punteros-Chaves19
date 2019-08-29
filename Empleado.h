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


#include <cstdint>
#include <string>
using std::string;

const int LIMITESUPERIOR = 100;


class Empleado {
	
protected:
    int identificador;
    string nombre;
    int annosExperiencia;
    float salarioBase;
    bool disponibilidad;
private: 
    float aumentoSalario(const int *);
    void revisionAleatoria(bool *);
    
public:
    string obtenerDatos();
    Empleado();
    Empleado(const string *, int, float);
    string reporteEmpleado(string vector[]);
    
    void setSalarioBase(float);
    float getSalarioBase();

    void setAnnosExperiencia(int);
    int getAnnosExperiencia();

    void setNombre(string);
    string getNombre();
    
	void setIdentificador(int);
    int getIdentificador();

};
#endif //EMPLEADOPUNTEROS_EMPLEADO_H
