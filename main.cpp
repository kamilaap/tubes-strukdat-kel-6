#include <iostream>
#include <cstdlib>
#include "konversi.h"
using namespace std;

void tampilJudul()
{
    cout << "========================================" << endl;
    cout << "      PROGRAM KONVERSI SATUAN           " << endl;
    cout << "========================================" << endl;
}

void tampilDaftarSatuan()
{
    cout << "Daftar Satuan:" << endl;
    cout << "1. Kilometer  (KM)" << endl;
    cout << "2. Hektometer (HM)" << endl;
    cout << "3. Dekameter  (DAM)" << endl;
    cout << "4. Meter      (M)" << endl;
    cout << "5. Desimeter  (DM)" << endl;
    cout << "6. Centimeter (CM)" << endl;
    cout << "7. Milimeter  (MM)" << endl;
}

string getNamaSatuan(int satuan)
{
    switch (satuan)
    {
    case 1:
        return "KM";
    case 2:
        return "HM";
    case 3:
        return "DAM";
    case 4:
        return "M";
    case 5:
        return "DM";
    case 6:
        return "CM";
    case 7:
        return "MM";
    default:
        return "?";
    }
}

int main()
{
    int asal, tujuan;
    double nilai, hasil;
    char ulang;

    do
    {
        system("cls");

        tampilJudul();
        tampilDaftarSatuan();

        cout << "Pilih satuan asal   : ";
        cin >> asal;

        if (asal < 1 || asal > 7)
        {
            cout << "ERROR: Pilihan hanya 1 - 7!" << endl;
            system("pause");
            continue;
        }

        cout << "Pilih satuan tujuan : ";
        cin >> tujuan;

        if (tujuan < 1 || tujuan > 7)
        {
            cout << "ERROR: Pilihan hanya 1 - 7!" << endl;
            system("pause");
            continue;
        }

        cout << "Masukkan nilai      : ";
        cin >> nilai;

        hasil = dariMeter(keMeter(nilai, asal), tujuan);

        cout << "========================================" << endl;
        cout << "Hasil Konversi:" << endl;
        cout << nilai << " " << getNamaSatuan(asal)
             << " = " << hasil << " " << getNamaSatuan(tujuan) << endl;
        cout << "========================================" << endl;

        cout << "Hitung ulang? (y/n) : ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    system("cls");
    cout << "========================================" << endl;
    cout << "   Terima kasih telah menggunakan       " << endl;
    cout << "      program konversi satuan :)        " << endl;
    cout << "========================================" << endl;

    return 0;
}