#include <string>
#include <iostream>

class Date {
public:

    Date(int _month, int _day, int _year) {
        month = _month;
        day = _day;
        year = _year;
    }

    void setMonth(int _month){
        if((month > 0) || (month < 13)){
            std::cout << "Solo colocar numeros del 1 al 12!!!" << std::endl;
        };
    }

    void setDay(int _day){
        if((day > 0) || (day < 32)){
            std::cout << "Solo colocar numeros del 1 al 30/31!!!" << std::endl;
        };
    }

    void setYear(int _year){
        year = _year;
    };


    int getMonth() const {
        return month;
    }

    int getDay() const {
        return day;
    }

    int getYear() const {
        return year;
    }
private:

    int month, day, year;

};
