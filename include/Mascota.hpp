#pragma once
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
    void comer(Alimento Alimento) {
        this->Energia+- 1;
    }
};
    int LeerEnergia(){
        return this->Energia;
}
};