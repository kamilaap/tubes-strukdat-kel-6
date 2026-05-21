#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include "konversi.h"
using namespace std;

const int JUMLAH_SATUAN = 7;
const int MAX_NILAI     = 100;

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

void cetakAngka(double angka)
{
    if (angka == (long long)angka)
        cout << (long long)angka;
    else
        cout << fixed << setprecision(6) << angka;
}

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
        cout << i + 1 << ". " << daftarSatuan[i] << endl;
}

string getNamaSatuan(int satuan)
{
    if (satuan >= 1 && satuan <= JUMLAH_SATUAN)
        return namaSatuan[satuan - 1];
    return "?";
}

int main()
{
    int  jumlahNilai, asal, tujuan;
    char ulang;

    do
    {
        system("cls");
        tampilJudul();
        cout << "Masukkan jumlah nilai yang ingin dikonversi: ";
        cin >> jumlahNilai;

        if (jumlahNilai < 1 || jumlahNilai > MAX_NILAI)
        {
            cout << "ERROR: Jumlah nilai harus antara 1 - "
                 << MAX_NILAI << "!" << endl;
            system("pause");
            continue;
        }
        double nilaiList[MAX_NILAI];
        cout << endl;
        cout << "Masukkan " << jumlahNilai << " nilai:" << endl;
        for (int i = 0; i < jumlahNilai; i++)
        {
            cout << "  Nilai ke-" << i + 1 << " : ";
            cin >> nilaiList[i];
        }
        cout << endl;
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
        cout << "========================================" << endl;
        cout << "Hasil Konversi ("
             << getNamaSatuan(asal) << " -> "
             << getNamaSatuan(tujuan) << "):" << endl;
        cout << "----------------------------------------" << endl;

        for (int i = 0; i < jumlahNilai; i++)
        {
            double hasil = dariMeter(keMeter(nilaiList[i], asal), tujuan);
            cout << "  ";
            cetakAngka(nilaiList[i]);
            cout << " " << getNamaSatuan(asal) << " = ";
            cetakAngka(hasil);
            cout << " " << getNamaSatuan(tujuan) << endl;
        }
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