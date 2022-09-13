#include<iostream>
#include<sstream>
#include"arregloPaciente.h"
//#include "arregloCama.h"

using std::string;



arregloPaciente::arregloPaciente(){
    
    tamano = 200;
    cantidad = 0;

    
    vector = new paciente*[tamano];//Crea arreglo dinamico
    
    for(int i = 0; i < tamano; i++){ //Creo pacientes dinamicos
        vector[i] = new paciente;
    } 
}


arregloPaciente::~arregloPaciente(){ //Destructor

    for(int i = 0; i < tamano; i++){ //Destruye los pacientes
        if(vector[i]!=NULL){
            delete vector[i];}
    }
    
        delete[] vector; //Destruyye el vector de pacientes
    vector = NULL;

}

void arregloPaciente::agregarPaciente(paciente* pac){ //agrega paciente por paciente
    if(cantidad < tamano){
        vector[cantidad++] = pac;
    }
}


string arregloPaciente::toString(){ //muestra la cantidad de pacientes 
    stringstream s;
    
    for(int i=0; i < cantidad ;i++){
        s<<vector[i]->toString();
    }
    
    return s.str();
}





