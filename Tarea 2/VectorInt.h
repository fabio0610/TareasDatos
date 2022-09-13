#ifndef VECTORINT_H
#define VECTORINT_H

class VectorInt {
public:
	VectorInt();
    VectorInt(int *inicio, unsigned int conteoMax, unsigned int conteo);
	VectorInt(const VectorInt& vect);
    virtual ~VectorInt();

	void Insertar(int dato);
	void Borrar(unsigned int dato);

    int ValueAt(unsigned int pos) const;
	void ChangeValueAt(unsigned int, int);

	unsigned int Cantidad() const;
	
private:
	// Apuntador al inicio del vector
	int* inicio;
	// Tamaño del vector - cantidad máxima de elementos que puede almacenar
	unsigned int conteo_max;
	// Cantidad de elementos que contiene el vector
	unsigned int conteo;
};

#endif