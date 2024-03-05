#pragma once
#include <Alimento.hpp>

class Mascota
{
private:
    int Felicidad;
    int Energia;

public:
    Mascota() {
        this->Energia=0;
    }
    ~Mascota() {}
    void comer(Alimento alimento) {
        this->Energia += alimento.ExtraerEnergia();
    }   
    int LeerEnergia(){
        return this->Energia;
    }
};