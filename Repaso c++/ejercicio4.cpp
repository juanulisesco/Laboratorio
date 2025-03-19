#include <iostream>
#include <vector>
using namespace std;

struct fecha{
    int dia;
    int mes;
    int año;
};

struct paciente{
    string nombre;
    int edad;
    int num_historial; 
    fecha cita;
};


