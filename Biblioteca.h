#include "Libros.h"
#include <string>
#include <iostream>
#pragma once

class Biblioteca {

    private:

    Libros vector[20];
    int cantidad;
    int tamano;

    public:

    Biblioteca();
    void Ingresar(Libros libro);
    string toString();


    

}