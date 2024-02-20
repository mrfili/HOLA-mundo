#include <iostream>
#include <Mascota.hpp>
#include <Alimento.hpp>

using namespace std;
int main(int argc, char const *argv[])
{
    Mascota m1;
    Mascota m2;

    Alimento a1(5);
    Alimento a2(2);

    m1.Comer(a1);
    m2.Comer(a2);
    m2.Jugar();

    cout << "Mascota 1 energia:" << m1.LeerEnergia() << endl
         << "Mascoa 2 energia:" << m2.LeerEnergia() << endl;

    return 0;
}