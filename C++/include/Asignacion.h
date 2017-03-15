#ifndef ASIGNACION_H
#define ASIGNACION_H
#include <iostream>

using namespace std;

class Asignacion
{
    public:
        Asignacion()
        {
            // inicializo los valores por defecto a los atributos en el constructor
            numero = 0;
            texto = "";
        }

        // metodo para modificar el numero
        void setNumero(int n)
        {
            numero = n;
        }

        // metodo para obtener el numero
        int getNumero()
        {
            return numero;
        }

        // metodo para modificar el texto
        void setTexto(string n)
        {
            texto = n;
        }

        // metodo para obtener el texto
        string getTexto()
        {
            return texto;
        }
    protected:

    private:
        // se declaran los atributos privados
        int numero;
        string texto;
};

#endif // ASIGNACION_H
