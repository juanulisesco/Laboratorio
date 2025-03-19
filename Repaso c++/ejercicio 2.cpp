#include <iostream>
#include <vector>
using namespace std;

struct producto{
    string nombre; 
    int código_de_barra;
    string marca;
    float precio; 
    bool fecha_de_vencimiento;
};

int main(){
    float gondolon = 0;
    float gondolonaux = 0;
    string prod;
    int venci= 0;
    float prom;
    int fila= 0;
    int col= 0;
    int p;

    producto producto00, producto01, producto02, producto03;
    producto producto10, producto11, producto12, producto13;
    producto producto20, producto21, producto22, producto23;
    producto gondola [3][4]= {
        {
            {"Leche", 123456, "La Serenísima", 1.50, true},
            {"Arroz", 789012, "Cañuelas", 2.80, true},
            {"Pan", 345678, "Bimbo", 1.00, true},
            {"Jugo", 901234, "Del Valle", 1.20, true}
        },
        {
            {"Cereal", 567890, "Nestlé", 3.50, false},
            {"Manteca", 112233, "La Serenísima", 2.00, true},
            {"Azúcar", 445566, "Ledesma", 1.60, true},
            {"Galletitas", 778899, "Chocolinas", 1.80, false}
        },
        {
            {"Yogur", 223344, "La Serenísima", 1.40, true},
            {"Aceite", 556677, "Cocinero", 3.00, true},
            {"Café", 889900, "La Virginia", 2.50, false},
            {"Tomates", 334455, "San Juan", 1.30, false}
        }
    };

    for (int i = 0; i < 3; i++){
        if (gondolon > gondolonaux){
            gondolonaux= gondolon;
            fila= i-1;
            col= p;
        }
        
        for (p = 0; p < 4; p++){
            gondolon= gondolon + gondola[i][p].precio;
            if (i== 2 and p== 3){
                 prod= gondola[i][p].nombre;
            }
            if (gondola[i][p].fecha_de_vencimiento == true){
                venci++;
            }
            prom= prom + gondola[i][p].precio;
            
            
        }
    }
    prom= prom / 12;

    cout<<"La columna de mayor precio es: "<< col <<endl;
    cout<<"El nombre del producto de la fila 2 columna 3 es: "<< prod <<endl;
    cout<<"El promedio de los precios de todos los prodcutos es: "<< prom <<endl;
    cout<<"Los productos con fecha de vencimiento son: "<< venci <<endl;
}