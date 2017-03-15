#include <iostream>
#include "Asignacion.h"

using namespace std;

int main(void)
{
    // se crea un objeto de la clase Asignacion (instanciación)
    Asignacion *obj = new Asignacion();
    // declaramos una variable de tipo entero num
    int num;
    // declaramos una variable de tipo string tex
    string tex;
    // pedimos el valor del numero al usuario
    cout << "Digite valor que le asignara al numero" << endl;
    cout << ">> ";
    // guardamos el valor en la variable num
    cin >> num;
    // encapsulamos la variable num
    obj->setNumero(num);
    // pedimos el valor del texto al usuario
    cout << "Digite valor que le asignara al texto" << endl;
    cout << ">> ";
    // guardamos el valor en la variable tex
    cin >> tex;
    // encapsulamos la variable tex
    obj->setTexto(tex);

    // mostramos en pantalla las asignaciones que se hicieron
    cout << "Le ha asignado al numero: " << obj->getNumero() << endl;
    cout << "Le ha asignado al texto: " << obj->getTexto() << endl;
}
