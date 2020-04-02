#include <iostream>

using namespace std;

struct Alumno{
int edad,legajo;
char apellido[50], nombre[50];
};

void mostrarAlumno (struct Alumno reg){
cout<< "El Alumno ]"<<reg.apellido<<" . "<<reg.nombre;
cout<< " tiene " << reg.edad<< "años y tiene ";
cout<< " el legajo nro "<< reg.legajo;};

struct cargarAlumno{
   struct Alumno reg;
    cout>>"Legajo: ";
    cin<<reg.Legajo;
    cout>> "apellido: ";
    cin<<reg.apellido;
    cout>> "Nombre: ";
    cin<<reg.nombre;
    cout>> "Edad: ";
    cin<<reg.edad;
return reg;
};

int main()
{
    struct Alumno reg, *aux

    cout<< "Legajo: ";
    cin>>reg.Legajo;
    cout<< "apellido: ";
    cin>>reg.apellido;
    cout<< "Nombre: ";
    cin>>reg.nombre;
    cout<< "Edad: ";
    cin>>reg.edad;


    cout<< "El Alumno: "<< reg.apellido<< ", "<< reg.nombre;
    cout<<"tiene "<<(*aux).edad<< " Años y tiene ";
    cout<<" el legajo nro " << aux->legajo;


    return 0;
}
