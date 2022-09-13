#ifndef ARREGLOPACIENTE_H
#define ARREGLOPACIENTE_H
#include<iostream>
#include<sstream>
#include "paciente.h"

using std::string;

class arregloPaciente {

private:int
    
    paciente** vector; //Doble puntero tipo paciente
    int cantidad;
    int tamano;
    
public:
   
    arregloPaciente();
    virtual void agregarPaciente(paciente*);
//    virtual void borrarPaciente(int); //Recibe posicion
//    virtual void borrarPaciente(); //
//   
    
    virtual string toString();
    virtual ~arregloPaciente();
    
};
#endif /* ARREGLOPACIENTE_H */

