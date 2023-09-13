#include <string>

class Factura {

    public:
        Factura(std::string _numParte, std::string _descrip, int _cantCompra, int _precioXuni, double _impuesto, double _tasa){
            numParte = _numParte;
            descrip = _descrip;
            cantCompra = _cantCompra;
            precioXuni = _precioXuni;
            impuesto = _impuesto;
            tasa = _tasa;
        }

        void setNumParte(std::string _numParte){
            numParte = _numParte;
        }

        void setDescrip(std::string _descrip){
            descrip = _descrip;
        }

        void setCantCompra(int _cantCompra){
            cantCompra = _cantCompra;
        }

        void setPrecioXuni(int _precioXuni){
            precioXuni = _precioXuni;
        }


        std::string getNumPart(){
            return numParte;
        }

        std::string getDescrip(){
            return descrip;
        }

        int getCantCompra(){
            return cantCompra;
        }
        int getPrecioXunidad(){
            return precioXuni;
        }

        double getImpuesto(){
            return impuesto;
        }
        double getTasa(){
            return tasa;
        }


    private:

    std::string numParte, descrip;
    int cantCompra, precioXuni;
    double impuesto = 0.2;
    double tasa = 0.2;

};
