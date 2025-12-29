#include "mytemperature.h"
double celsius_to_fah(double cel)  {
    return cel * 9.0 / 5.0 + 32.0;
}  //摄氏温度到华氏温度
double fahrenheit_to_cels(double fah){
    return (fah - 32.0) * 5.0 / 9.0;
} //华氏温度到摄氏温度
