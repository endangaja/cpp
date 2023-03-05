#include <bits/stdc++.h>
using namespace std;

short int kode_nilai;

int main(int argc, char const *argv[])
{
    input_kode_huruf:
    cout << "Masukkan kode nilai [0 - 4]: ";
    cin >> kode_nilai;

    switch(kode_nilai)
    {
        case 0:
            cout << "Kode hurufnya adalah 'E'\n";
            break;

        case 1:
            cout << "Kode hurufnya adalah 'D\n";
            break;

        case 2:
            cout << "Kode hurufnya adalah 'C'\n";
            break;

        case 3:
            cout << "Kode hurufnya adalah 'B'\n";
            break;

        case 4:
            cout << "Kode hurufnya adalah 'A'\n";
            break;

        default:
            cout << "Kode huruf tidak terdaftar\n";
            goto input_kode_huruf;   
    }
    return 0;
}
