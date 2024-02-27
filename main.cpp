#include <iostream>
using namespace std;

#include <Mascota.hpp>
#include <Alimento.hpp>

int main(int argc, char const *argv[])
{
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
