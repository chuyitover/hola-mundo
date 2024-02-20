#include <iostream>
using namespace std;

#include <Mascota.hpp>

int main(int argc, char const *argv[])
{
   Mascota m1;
   Mascota m2;
   Mascota m3;
   m1.comer();
   m2.comer();
   m3.comer();

    cout<<"mascota "<< m1.LeerEnergia() <<endl; 
    return 0;
}
