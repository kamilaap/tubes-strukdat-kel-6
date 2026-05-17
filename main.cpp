#include <iostream>
#include <cstdlib>
#include "konversi.h"
using namespace std;

void tampilJudul()
{
    cout << "===========================================" << endl;
    cout << "        TUGAS BESAR STRUKTUR DATA         " << endl;
    cout << "               KELOMPOK 6                 " << endl;
    cout << "===========================================" << endl;
}

void tampilMenu()
{
    cout << "\n========= KONVERSI SATUAN JARAK =========" << endl;
    cout << "--- KM ke satuan lain ---" << endl;
    cout << "1. KM ke HM" << endl;
    cout << "2. KM ke DAM" << endl;
    cout << "3. KM ke M" << endl;
    cout << "4. KM ke DM" << endl;
    cout << "5. KM ke CM" << endl;
    cout << "6. KM ke MM" << endl;
    cout << "--- MM ke satuan lain ---" << endl;
    cout << "7.  MM ke KM" << endl;
    cout << "8.  MM ke HM" << endl;
    cout << "9.  MM ke DAM" << endl;
    cout << "10. MM ke M" << endl;
    cout << "11. MM ke DM" << endl;
    cout << "12. MM ke CM" << endl;
    cout << "==========================================" << endl;
}

int main()
{
    int pilihan;
    double angka, hasil;
    char ulang;

    do
    {
        system("cls");

        tampilJudul();
        tampilMenu();

        cout << "Pilih menu : ";
        cin >> pilihan;

        if (pilihan < 1 || pilihan > 12)
        {
            cout << "\n===================================" << endl;
            cout << "  ERROR: Pilihan hanya 1 - 12!    " << endl;
            cout << "===================================" << endl;

            system("pause");
            continue;
        }

        cout << "Masukkan angka : ";
        cin >> angka;

        switch (pilihan)
        {
        case 1:
            hasil = f_km_hm(angka);
            cout << angka << " KM = " << hasil << " HM (Hectometer)" << endl;
            break;

        case 2:
            hasil = f_km_dam(angka);
            cout << angka << " KM = " << hasil << " DAM (Decameter)" << endl;
            break;

        case 3:
            hasil = f_km_m(angka);
            cout << angka << " KM = " << hasil << " M (Meter)" << endl;
            break;

        case 4:
            hasil = f_km_dm(angka);
            cout << angka << " KM = " << hasil << " DM (Decimeter)" << endl;
            break;

        case 5:
            hasil = f_km_cm(angka);
            cout << angka << " KM = " << hasil << " CM (Centimeter)" << endl;
            break;

        case 6:
            hasil = f_km_mm(angka);
            cout << angka << " KM = " << hasil << " MM (Milimeter)" << endl;
            break;

        case 7:
            hasil = f_mm_km(angka);
            cout << angka << " MM = " << hasil << " KM (Kilometer)" << endl;
            break;

        case 8:
            hasil = f_mm_hm(angka);
            cout << angka << " MM = " << hasil << " HM (Hectometer)" << endl;
            break;

        case 9:
            hasil = f_mm_dam(angka);
            cout << angka << " MM = " << hasil << " DAM (Decameter)" << endl;
            break;

        case 10:
            hasil = f_mm_m(angka);
            cout << angka << " MM = " << hasil << " M (Meter)" << endl;
            break;

        case 11:
            hasil = f_mm_dm(angka);
            cout << angka << " MM = " << hasil << " DM (Decimeter)" << endl;
            break;

        case 12:
            hasil = f_mm_cm(angka);
            cout << angka << " MM = " << hasil << " CM (Centimeter)" << endl;
            break;
        }

        cout << "\nIngin mengulang program? (y/n) : ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    system("cls");

    cout << "===========================================" << endl;
    cout << " Terima kasih telah menggunakan program   " << endl;
    cout << "      konversi satuan jarak kami :)       " << endl;
    cout << "===========================================" << endl;

    return 0;
}