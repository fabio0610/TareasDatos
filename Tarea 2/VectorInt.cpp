#include "VectorInt.h"

VectorInt::VectorInt() {
    conteo = 10;
    inicio = new int [conteo];

}

VectorInt::VectorInt(int *inicio, unsigned int conteoMax, unsigned int conteo) {
inicio = inicio;
conteo_max = conteoMax;
conteo = conteo;
}

VectorInt::VectorInt(const VectorInt & vect) {
    inicio = vect.inicio;
    conteo = vect.conteo;
    conteo_max = vect.conteo_max;
}

VectorInt::~VectorInt() {
delete [] inicio;
}

void VectorInt::Insertar(int dato) {
    int* temp = new int[conteo];
    for(int i = 0; i < conteo; i++)
        temp[i] = inicio[i];
    temp[conteo] = dato;

    this->inicio = temp;
    this->conteo += 1;
}

void VectorInt::Borrar(unsigned int pos) {
    for (int i = 0; i< conteo; i++){
        if(pos == i){
            inicio[i] = 0;

        }
    }
}

int VectorInt::ValueAt(unsigned int pos) const {
    for (int i = 0; i< conteo; i++){
        if(pos == i){
           return inicio[i];

        }
    }
}

void VectorInt::ChangeValueAt(unsigned int pos, int dato) {
    for (int i = 0; i< conteo; i++){
        if(pos == i){
            inicio[i] = dato;
        }
    }
}

unsigned int VectorInt::Cantidad() const {
    int cont = 0;
    for (int i = 0; i< conteo; i++){
        if( inicio[i]=! nullptr){
            cont++;
        }
    }
    return cont;
}

