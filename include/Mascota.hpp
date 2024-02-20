#pragma once
#include <Alimento.hpp>

class Mascota
{
private:
    int Energia;
    int Felicidad;

public:
    Mascota()
    {
        this->Energia = 0;
        this->Felicidad = 0;
    }

    ~Mascota() {}
    void Comer(Alimento alimento)
    {
        Energia += alimento.Extraerenergia();
    }
    void Jugar()
    {
        Energia += 1;
        Felicidad -= 1;
    }
    int LeerFelicidad()
    {
        return this->Felicidad;
    }
    int LeerEnergia()
    {
        return this->Energia;
    }
};