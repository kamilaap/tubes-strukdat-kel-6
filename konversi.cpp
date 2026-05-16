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
void mm_ke_km(double mm){
    cout << mm << " MM = " << mm / 1000000 << " KM" << endl;
}
void mm_ke_hm(double mm){
    cout << mm << " MM = " << mm / 100000 << " HM" << endl;
}
void mm_ke_dam(double mm){
    cout << mm << " MM = " << mm / 10000 << " DAM" << endl;
}
void mm_ke_m(double mm){
    cout << mm << " MM = " << mm / 1000 << " M" << endl;
}
void mm_ke_dm(double mm){
    cout << mm << " MM = " << mm / 100 << " DM" << endl;
}
void mm_ke_cm(double mm){
    cout << mm << " MM = " << mm / 10 << " CM" << endl;
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
double f_mm_km(double mm){
    return mm / 1000000;
}
double f_mm_hm(double mm){
    return mm / 100000;
}
double f_mm_dam(double mm){
    return mm / 10000;
}
double f_mm_m(double mm){
    return mm / 1000;
}
double f_mm_dm(double mm){
    return mm / 100;
}
double f_mm_cm(double mm){
    return mm / 10;
}
double f_mm_mm(double mm){
    return mm;
}