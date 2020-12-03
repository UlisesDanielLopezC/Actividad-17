#include "civilizacion.h"

Civilizacion::Civilizacion(){

}

Civilizacion::Civilizacion(const string &nombre, int xpos, int ypos, int puntuacion){
                            this->nombre = nombre;
                            this->xpos = xpos;
                            this->ypos = ypos;
                            this->puntuacion = puntuacion;
                        }

void Civilizacion::setNombre(const string &v){
    nombre = v;
}
string Civilizacion::getNombre(){
    return nombre;
}

void Civilizacion::setXpos(int v){
    xpos = v;
}
int Civilizacion::getXpos(){
    return xpos;
}

void Civilizacion::setYpos(int v){
    ypos = v;
}
int Civilizacion::getYpos(){
    return ypos;
}

void Civilizacion::setPuntuacion(int v){
    puntuacion = v;
}
int Civilizacion::getPuntuacion(){
    return puntuacion;
}