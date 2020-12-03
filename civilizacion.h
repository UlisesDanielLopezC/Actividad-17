#ifndef CIVILIZACION_H
#define CIVILIZACION_H

#include<iostream>
#include<iomanip>

using namespace std;

class Civilizacion{

    string nombre;
    int xpos;
    int ypos;
    int puntuacion;

public:
    Civilizacion();
    Civilizacion(const string &nombre, int xpos, int ypos, int puntuacion);

    void setNombre(const string &nombre);
    string getNombre();

    void setXpos(int xpos);
    int getXpos();

    void setYpos(int ypos);
    int getYpos();

    void setPuntuacion(int puntuacion);
    int getPuntuacion();

    friend ostream& operator<<(ostream &out, const Civilizacion &c){

        out << left;
        out << setw(16) << c.nombre;
        out << setw(12) << c.xpos;
        out << setw(12) << c.ypos;
        out << setw(7) << c.puntuacion;
        out << endl;

        return out;
    }

    friend istream& operator>>(istream &in, Civilizacion &c){

        cout <<"Nombre: ";
        getline(cin, c.nombre);
        
        cout <<"Posicion en X: ";
        cin >> c.xpos;

        cout <<"Posicion en Y: ";
        cin >> c.ypos; 

        cout <<"Puntuacion: ";
        cin >> c.puntuacion; cin.ignore();

        return in;
    }

    bool operator==(const Civilizacion& c){
        return nombre == c.nombre;
    }

    bool operator==(const Civilizacion& c) const{
        return nombre == c.nombre;
    }

    bool operator<(const Civilizacion& c){
        return nombre < c.nombre;
    }

};

#endif