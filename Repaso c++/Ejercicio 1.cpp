#include <iostream>
#include <vector>
using namespace std;

struct empleado{
    string nombre;
    string apellido;
    string nacimiento[3];
    string sexo;
    int salario;
};

int empleadoConMayorSueldo(vector<empleado> empleados, vector<empleado> &salariados){
    int salarios= 0;
    for(int i=0; i<empleados.size(); i++){
        if(empleados[i].salario <= 400000){
            salariados.push_back(empleados[i]);
        }
        if(salarios < empleados[i].salario){
            salarios= empleados[i].salario;
        }
    }
    return salarios;
}

int main(){
    int MaxSal= 0;
    empleado nuevo_empleado;
    vector<empleado> empleados;
    vector<empleado> salariados;
    string basta;
    int n= 0;
    while (basta!= "Basta"){
        cout<<"Ingrese nombre: "<< endl;
        cin >> nuevo_empleado.nombre;
        cout<<"Ingrese apellido: "<< endl;
        cin >> nuevo_empleado.apellido;
        cout<<"Ingrese dia de nacimiento: "<< endl;
        cin >> nuevo_empleado.nacimiento[1];
        cout<<"Ingrese mes de nacimiento: "<< endl;
        cin >> nuevo_empleado.nacimiento[2];
        cout<<"Ingrese año de nacimiento: "<< endl;
        cin >> nuevo_empleado.nacimiento[3];
        cout<<"Ingrese sexo: "<< endl;
        cin >> nuevo_empleado.sexo;
        cout<<"Ingrese salario: "<< endl;
        cin >> nuevo_empleado.salario;

        empleados.push_back(nuevo_empleado);

        cout<<"Ingrese Basta si no quiere cargar mas empleados: "<<endl;
        cin >> basta;
    }
    
    cout<< "El empleado con mayor salario es: " <<endl;
    MaxSal= empleadoConMayorSueldo(empleados, salariados);
    for(int p= 0; p<empleados.size(); p++){
        if(MaxSal == empleados[p].salario){
            cout<<empleados[p].nombre<<endl;
            cout<<empleados[p].apellido<<endl;
        }
    }
    cout<<"Los empleados con un sueldo menor o igual a 40000 son: "<<endl;
    cout<<salariados.size()<<endl;
    for(int p= 0; p<salariados.size(); p++){
            cout<<salariados[p].nombre<< " " <<salariados[p].apellido<<endl;
        }
    }
    
