#pragma once
#include "Biblioteca.h"
#include <string>
#include <iostream>

Biblioteca::Biblioteca(){
    cantidad = 0;
    tamano = 20;

}

void Biblioteca::Ingresar(Libros libro){

    if(cantidad < tamano){
        vector[cantidad] = libro;
        cantidad++;

    }else {
        cout<<"No hay Espacio"<<endl;
    }

    Biblioteca::string toString(){
        stringstream s;
        for(int i = 0; i < cantidad; i++){
            s<<vector[i].toString()<<endl;
        }
    }

}
