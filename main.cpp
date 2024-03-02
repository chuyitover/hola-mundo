#include <iostream>
#include <Mascota.hpp>
#include <Alimento.hpp>
#include <Dibujo.hpp>
using namespace std;

int main(int argc, char const *argv[])
{
    Dibujo dibujo("./assets/perro.txt");
    dibujo.Dibujar();
Dibujo dibujo1("./assets/sar.txt");
    dibujo1.Dibujar();

   Mascota m1;
   Mascota m2;
   Mascota m3;
   Alimento alimento(5);
   m1.comer(alimento);
   m2.comer(alimento);
   m3.comer(alimento);

    cout<<"mascota "<<m1.LeerEnergia()<<endl; 
    return 0;
}
