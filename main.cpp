#include <iostream>
#include <list>
#include <Mascota.hpp>
#include <Alimento.hpp>
#include <Dibujo.hpp>
using namespace std;

int main(int argc, char const *argv[])
{
    list<Dibujo> dibujos;

    Dibujo dibujo("./assets/perro.txt");
    dibujo.Dibujar();
Dibujo dibujo1("./assets/sar.txt");
    dibujo1.Dibujar();

    // dibujos.push_front(dibujo);
    // dibujos.push_front(dibujo1);

   Mascota m1,m2,m3;

list<Mascota> mascotas;
mascotas.push_back(m1);
mascotas.push_back(m2);
mascotas.push_back(m3);

   Alimento alimento(5);

   for (auto &&mascotaActual : mascotas)
   {
    mascotaActual.comer(alimento);
   }
   for (auto &&mascotaActual : mascotas)
   {
     cout<<"mascota "<<mascotaActual.LeerEnergia()<<endl; 
   }
   
    return 0;
}
