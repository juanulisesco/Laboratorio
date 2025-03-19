#include <iostream>
#include <vector>
using namespace std;

struct Producto
{
    string nombre_producto;
    int codigo;
    int precio;
    int cantidad;
};

struct Pedido 
{
    int nro_pedido;
    string nombre, apellido;
    Producto lista_producto; 
};

void pedido(vector<Producto> productos, vector<Pedido> &pedidos){
        Pedido aux;
        int papu=0;
        int papugome= 0;
        int gome= 0;
        while (papu != -1)
        {
            aux.nro_pedido= papugome;
            cout<<"Ingresar el nombre del cliente"<<endl;
            cin >>aux.nombre;
            cout<<"Ingresar el apellido del cliente"<<endl;
            cin >>aux.apellido;
            cout<<"codigo:0, Milanesa con papas 20500$"<<endl;
            cout<<"codigo:1, Canelones 8500$"<<endl;
            cout<<"codigo:2, Ñoquis con salsa 18000$"<<endl;
            cout<<"codigo:3, Fideos con albondigas 27800$"<<endl;
            cout<<"codigo:4, Risotto 40000$"<<endl;
            cin >>gome;
            if(gome == 0){
                aux.lista_producto.nombre_producto = productos[gome].nombre_producto;
                cout<<"Ingrese la cantidad del producto deseado: "<<endl;
                cin >>aux.lista_producto.cantidad;
                aux.lista_producto.precio= aux.lista_producto.cantidad * productos[gome].precio;
            }
            else if(gome == 1){
                aux.lista_producto.nombre_producto = productos[gome].nombre_producto;
                cout<<"Ingrese la cantidad del producto deseado: "<<endl;
                cin >>aux.lista_producto.cantidad;
                aux.lista_producto.precio= aux.lista_producto.cantidad * productos[gome].precio;
            }
            else if(gome == 2){
                aux.lista_producto.nombre_producto = productos[gome].nombre_producto;
                cout<<"Ingrese la cantidad del producto deseado: "<<endl;
                cin >>aux.lista_producto.cantidad;
                aux.lista_producto.precio= aux.lista_producto.cantidad * productos[gome].precio;
            }
            else if(gome == 3){
                aux.lista_producto.nombre_producto = productos[gome].nombre_producto;
                cout<<"Ingrese la cantidad del producto deseado: "<<endl;
                cin >>aux.lista_producto.cantidad;
                aux.lista_producto.precio= aux.lista_producto.cantidad * productos[gome].precio;
            }
            else if(gome == 4){
                aux.lista_producto.nombre_producto = productos[gome].nombre_producto;
                cout<<"Ingrese la cantidad del producto deseado: "<<endl;
                cin >>aux.lista_producto.cantidad;
                aux.lista_producto.precio= aux.lista_producto.cantidad * productos[gome].precio;
            }

            pedidos.push_back(aux);
            cout<<"Ingrese -1 si quiere terminar de ingresar pedidos: "<<endl;
            cin >>papu;
        }
        
    }

    void cancelar(vector<Pedido> &pedidos, int cance){
        pedidos.erase(pedidos.begin() + cance);
        cout<<"---------------------------------------"<<endl;
    };

    void ver(vector<Pedido> pedidos){
        for(int i= 0; i<pedidos.size(); i++){
        cout<<"---------------------------------------"<<endl;    
        cout<<"Nombre: "<<pedidos[i].nombre<<endl;
        cout<<"Apellido: "<<pedidos[i].apellido<<endl;
        cout<<"Nombre del producto: "<<pedidos[i].lista_producto.nombre_producto<<endl;
        cout<<"Cantidad pedida: "<<pedidos[i].lista_producto.cantidad<<endl;
        cout<<"Precio total del pedido: "<<pedidos[i].lista_producto.precio<<endl;
        cout<<"---------------------------------------"<<endl;
        }
    };

    void total(vector<Pedido> pedidos){
        int papugomemax= 0;
        for (int i = 0; i<pedidos.size(); i++){
            papugomemax= papugomemax + pedidos[i].lista_producto.precio;
        }
        cout<<"---------------------------------------"<<endl;
        cout<<"El total ganado es: "<<papugomemax<<endl;
        cout<<"---------------------------------------"<<endl;
    };

int main(){
    int numero= 0;
    vector<Pedido> pedidos;
    vector<Producto> productos= {{"Milanesa con papas ",0 ,20500}, {"Canelones ",1 ,8500}, {"Ñoquis con salsa blanca",2 ,18000}, {"Fideos con albondigas",3 ,27800}, {"Risotto ",4 ,40000}};

    while(numero!= 5){
        cout<< "Escriba 1 si quiere hacer un pedido"<<endl;
        cout<< "Escriba 2 si quiere cancelar un pedido"<<endl;
        cout<< "Escriba 3 si quiere ver los pedidos en curso"<<endl;
        cout<< "Escriba 4 si quiere ver el total ganado en el dia"<<endl;
        cout<< "Escriba 5 si quiere detener el programa"<<endl;
        cin >>numero;
        if(numero== 1){
            pedido(productos, pedidos);
        }
        else if(numero== 2){
            int cance= 0;
            cout<<"---------------------------------------"<<endl;
            cout<<"Ingrese el pedido que desea eliminar: "<<endl;
            cin >>cance;
            cancelar(pedidos, cance);
        }
        else if(numero== 3){
            ver(pedidos);
        }
        else if(numero== 4){
            total(pedidos);
        }

    }
}


