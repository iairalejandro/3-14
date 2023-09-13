#include <iostream>
#include "3-10.h"

using namespace std;

int main(){

    Factura factura1("123","grande",5,50,0.2,0.2);

    cout << "Numero de parte: " << factura1.getNumPart() << endl;
    cout << "Descripcion: " << factura1.getDescrip() << endl;
    cout << "Cantidad de compra: " << factura1.getCantCompra() << endl;
    cout << "Precio por Unidad: " << factura1.getPrecioXunidad() << endl;
    cout << "Impuesto: " << factura1.getImpuesto() << endl;
    cout << "Tasa: " << factura1.getTasa() << endl;
    
}
