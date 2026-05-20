#include <iostream>
#include <cstdlib>
#include "konversi.h"
using namespace std;

const int JUMLAH_SATUAN = 7;

const string namaSatuan[JUMLAH_SATUAN] = {
    "KM", "HM", "DAM", "M", "DM", "CM", "MM"
};

const string daftarSatuan[JUMLAH_SATUAN] = {
    "Kilometer  (KM)",
    "Hektometer (HM)",
    "Dekameter  (DAM)",
    "Meter      (M)",
    "Desimeter  (DM)",
    "Centimeter (CM)",
    "Milimeter  (MM)"
};

void tampilJudul()
{
    cout << "========================================" << endl;
    cout << "      PROGRAM KONVERSI SATUAN           " << endl;
    cout << "========================================" << endl;
}

void tampilDaftarSatuan()
{
    cout << "Daftar Satuan:" << endl;
    for (int i = 0; i < JUMLAH_SATUAN; i++)
    {
        cout << i + 1 << ". " << daftarSatuan[i] << endl;
    }
}

string getNamaSatuan(int satuan)
{
    if (satuan >= 1 && satuan <= JUMLAH_SATUAN)
        return namaSatuan[satuan - 1];
    return "?";
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

        if (asal < 1 || asal > JUMLAH_SATUAN)
        {
            cout << "ERROR: Pilihan hanya 1 - " << JUMLAH_SATUAN << "!" << endl;
            system("pause");
            continue;
        }

        cout << "Pilih satuan tujuan : ";
        cin >> tujuan;

        if (tujuan < 1 || tujuan > JUMLAH_SATUAN)
        {
            cout << "ERROR: Pilihan hanya 1 - " << JUMLAH_SATUAN << "!" << endl;
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