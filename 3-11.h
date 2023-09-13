#include <string>

class Vehiculo {
    public:   

        void setMake(std::string _make){
            make = _make;
        }
        void setFueltype(std::string _fuelType){
            fuelType = _fuelType;
        }
        void setColor(std::string _color){
            color = _color;
        }
        void setYearOfManuFacture(int _yearOfManufacture){
            yearOfManufacture = _yearOfManufacture;
        }
        void setEngineCapacity(int _engineCapacity){
            engineCapacity = _engineCapacity;
        }
        std::string getMake() const {
            return make;
        }

        std::string getFuelType() const {
            return fuelType;
        }

        std::string getColor() const {
            return color;
        }

        int getYearOfManuFacture() const {
            return yearOfManufacture;
        }

        int getEngineCapacity() const {
            return engineCapacity;
        }

    private:
        std::string make,fuelType,color;
        int yearOfManufacture,engineCapacity;
    };
