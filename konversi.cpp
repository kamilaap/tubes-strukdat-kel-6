#include <iostream>
#include "konversi.h"

using namespace std;

// Prosedur
void km_ke_hm(double km){
    cout << km << " KM = " << km * 10 << " HM" << endl;
}
void km_ke_dam(double km){
    cout << km << " KM = " << km * 100 << " DAM" << endl;
}
void km_ke_m(double km){
    cout << km << " KM = " << km * 1000 << " M" << endl;
}
void km_ke_dm(double km){
    cout << km << " KM = " << km * 10000 << " DM" << endl;
}
void km_ke_cm(double km){
    cout << km << " KM = " << km * 100000 << " CM" << endl;
}
void km_ke_mm(double km){
    cout << km << " KM = " << km * 1000000 << " MM" << endl;
}

// Fungsi
double f_km_hm(double km){
    return km * 10;
}
double f_km_dam(double km){
    return km * 100;
}
double f_km_m(double km){
    return km * 1000;
}
double f_km_dm(double km){
    return km * 10000;
}
double f_km_cm(double km){
    return km * 100000;
}
double f_km_mm(double km){
    return km * 1000000;
}