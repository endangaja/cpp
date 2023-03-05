#include <bits/stdc++.h>
using namespace std;

long harga, biaya, diskon, grandtotal, bayar, kembalian;
int jumlah;
char paket;

void judul()
{
    cout << "---------------------------\n";
    cout << "     CISEUPAN CAFE.TI\n";
    cout << "---------------------------\n";
}

void menu()
{
    cout << "MENU PAKET:\n";
    cout << "A. Nasi Rames + Teh\n";
    cout << "B. Nasi Goreng + Teh\n";
    cout << "C. Mie Goreng + Teh\n\n";
}
int main()
{
awal:
    judul();
    menu();

    cout << "Pesan Tipe paket [ A/B/C }= ";
    cin >> paket;
    cout << "Jumlah                    = ";
    cin >> jumlah;

    switch (paket)
    {
    case 'A':
    case 'a':
        harga = 28000;
        break;

    case 'B':
    case 'b':
        harga = 24000;
        break;

    case 'C':
    case 'c':
        harga = 27000;
        break;

    default:
        system("cls");
        cout << "Masukan berada di luar jangkauan\n";
        goto awal;
        break;
    }
    biaya = harga * jumlah;
    if (biaya > 50000)
    {
        diskon = 0.05 * biaya;
    }

    grandtotal = biaya - diskon;

    judul();

    cout << "RINCIAN PEMBAYARAN:\n";
    cout << "Menu paket = " << paket << "\n";
    cout << "Jumlah     = " << jumlah << "\n";
    cout << "   ----------------x\n";
    cout << "Biaya      = " << biaya << "\n";
    cout << "Diskon 5%  = " << diskon << "\n";
    cout << "   ----------------x\n";
    cout << "Total bayar= " << grandtotal << "\n";
    cout << "Bayar      = ";
    cin >> bayar;
    kembalian = bayar - grandtotal;
    cout << "   ---------------\n";
    cout << "Uang kembalian = " << kembalian << "\n";

    return 0;
}