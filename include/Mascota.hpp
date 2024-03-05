#pragma once
#include <Alimento.hpp>
#include<string>

class Mascota
{
private:
    int Energia;
    int Felicidad;
    std::string nombre

public:
    Mascota(std::string nombre)
    {
        
        this->Energia = 0;
        this->nombre=nombre;
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
    std::string LeerNombre(){
        return this->nombre;
    }
};