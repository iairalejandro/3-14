#include <iostream>

#include "3-11.h"

using namespace std;

int main() {

    string make,fuelType,color;
    int yearOfManufacture,engineCapacity;

    Vehiculo nuevo;

    cout << "Make/Marca: ";
    cin >> make;
    nuevo.setMake(make);

    cout << "FuelType/TipoCombustible: ";
    cin >> fuelType;
    nuevo.setFueltype(fuelType);

    cout << "Color: ";
    cin >> color;
    nuevo.setColor(color);

    cout << "yearOfManufacture/AnioManufactura: ";
    cin >> yearOfManufacture;
    nuevo.setYearOfManuFacture(yearOfManufacture);

    cout << "engineCapacity/CapacidadMotor: ";
    cin >> engineCapacity;
    nuevo.setEngineCapacity(engineCapacity);

    make = nuevo.getMake();
    fuelType = nuevo.getFuelType();
    color = nuevo.getColor();
    yearOfManufacture = nuevo.getYearOfManuFacture();
    engineCapacity = nuevo.getEngineCapacity();

    cout << "\n\nMake/Marca: " << make << endl;
    cout << "FuelType/TipoCombustible: "<< fuelType << endl;
    cout << "Color: "<< color << endl;
    cout << "yearOfManufacture/AnioManufactura: "<< yearOfManufacture << endl;
    cout << "engineCapacity/CapacidadMotor: "<< engineCapacity << " cc" << endl;

}
