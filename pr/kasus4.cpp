#include <bits/stdc++.h>
using namespace std;

short int kode_hari;

int main(int argc, char const *argv[])
{
    cout << "Masukkan kode hari: ";
    cin >> kode_hari;

    switch (kode_hari)
    {
    case 1:
        cout << "Senin\n";
        break;

    case 2:
        cout << "Selasa\n";
        break;

    case 3:
        cout << "Rabu\n";
        break;
    
    case 4:
        cout << "Kamis\n";
        break;

    case 5:
        cout << "Jumat\n";
        break;

    case 6:
        cout << "Sabtu\n";
        break;

    case 7:
        cout << "Minggu\n";
        break;

    default:
        cout << "Kode tidak ada";
        break;
    }
    return 0;
}
