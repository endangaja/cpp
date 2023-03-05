#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

    string character, bot, hasil;
    unsigned short int  MC;

void preambule() {
    cout << "           ⠀⠀⠀⣠⣤⣤⣤⣤⣤⣶⣦⣤⣄⡀\n";
    cout << "       ⠀⠀⠀⢀⣴⣿⡿⠛⠉⠙⠛⠛⠛⠛⠻⢿⣿⣷⣤.        ==================================================\n";
    cout << "     ⠀⠀⠀⠀⣼⣿⠋⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⠈⢻⣿⣿         |                   SUIT AMOGUS                  |\n";
    cout << "        ⣸⣿⡏⠀⠀⠀⣠⣶⣾⣿⣿⣿⠿⠿⠿⢿⣿⣿⣿⣄       ==================================================\n";
    cout << "   ⠀⠀⠀⠀⣿⣿⠁⠀⠀⢰⣿⣿⣯⠁⠀⠀⠀⠀⠀⠀⠀⠈⠙⢿⣷⡄      |   Hai pemain satu, siap hadapi tantangan ini?  |\n";
    cout << "  ⣀⣤⣴⣶⣶⣿⡟⠀⠀⠀⢸⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣷      |               Choose Your Legend!              |\n";
    cout << " ⢰⣿⡟⠋⠉⣹⣿⡇⠀⠀⠀⠘⣿⣿⣿⣿⣷⣦⣤⣤⣤⣶⣶⣶⣶⣿⣿⣿      | 1| The Rock \"si paling keras🗿\"                |\n";
    cout << " ⢸⣿⡇⠀⠀⣿⣿⡇⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃      | 2| Gunting! \"si paling tajem ✂\"                |\n";
    cout << " ⣸⣿⡇⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠉⠻⠿⣿⣿⣿⣿⡿⠿⠿⠛⢻⣿        | 3| Kertas                                      |\n";
    cout << " ⣿⣿⠁⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣧       |                                                |\n"; 
    cout << " ⣿⣿⠀⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿         Pilihan anda (1/2/3):";

    }

void legenda() {
    cout << " ⣿⣿⠀⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿         Karakter anda:" << character << endl;
    cout << " ⢿⣿⡆⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡇         Karakter bot:" << bot << endl;
    cout << " ⠸⣿⣧⡀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⠃\n";
}

void menang() {
    legenda();
    cout << "  ⠛⢿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⣰⣿⣿⣷⣶⣶⣶⣶⠶⠀⢠⣿⣿⠀       |               ====================             |\n";
    cout << "        ⣿⣿⠀⠀⠀⠀⠀⣿⣿⡇⠀⣽⣿⡏⠁⠀⠀⢸⣿⡇       |                   KAMU MENANG!                 |\n";
    cout << "        ⣿⣿⠀⠀⠀⠀⠀⣿⣿⡇⠀⢹⣿⡆⠀⠀⠀⣸⣿⠇       |               ====================             |\n";    
}

void kalah() {
    legenda();
    cout << "  ⠛⢿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⣰⣿⣿⣷⣶⣶⣶⣶⠶⠀⢠⣿⣿⠀       |               ====================             |\n";
    cout << "        ⣿⣿⠀⠀⠀⠀⠀⣿⣿⡇⠀⣽⣿⡏⠁⠀⠀⢸⣿⡇       |                    KAMU KALAH!                 |\n";
    cout << "        ⣿⣿⠀⠀⠀⠀⠀⣿⣿⡇⠀⢹⣿⡆⠀⠀⠀⣸⣿⠇       |               ====================             |\n";
}

void stalemate() {
    legenda();
    cout << "  ⠛⢿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⣰⣿⣿⣷⣶⣶⣶⣶⠶⠀⢠⣿⣿⠀       |              ====================              |\n";
    cout << "        ⣿⣿⠀⠀⠀⠀⠀⣿⣿⡇⠀⣽⣿⡏⠁⠀⠀⢸⣿⡇       |                      DRAW!                     |\n";
    cout << "        ⣿⣿⠀⠀⠀⠀⠀⣿⣿⡇⠀⢹⣿⡆⠀⠀⠀⣸⣿⠇       |              ====================              |\n";
}

void akhir() {
    cout << "        ⢿⣿⣦⣄⣀⣠⣴⣿⣿⠁⠀⠈⠻⣿⣿⣿⣿⡿⠏⠀       |                                                |\n ";
    cout << "        ⠈⠛⠻⠿⠿⠿⠿⠋⠁                  ================================================\n\n";
}

int main(int, char const *[])
{
    awal:
    system("clear");

    // preambule
    preambule();

    // input user
    cin >> MC;


    // pilihan komputer
    unsigned short int komputer;
    srand(time(NULL));
    komputer = rand() % 4;

    while (komputer == 0)
    {
        komputer = rand() %4;
    }

    // proses pilihan komputer
    if (komputer == 1) {
        bot = " THE ROCK 🗿 ";
    } else if ( komputer == 2) {
        bot = " GUNTING ✂ ";
    } else if ( komputer == 3) {
        bot = " KERTAS 🧻 ";
    } else {
        bot = " error lagi budjang.. kaseeep...geulisss";
    }

    //pilihan user, proses, dan hasil pertandingan PADET BANGET COY
    if (MC == 1) {
        character = " THE ROCK 🗿";
        if (komputer == 1) {
            hasil = "stalemate";
        }   else if (komputer == 2) {
            hasil = "menang";
        } else {
            hasil = "kalah";
        }
    } else if (MC == 2) {
        character = " GUNTING ✂";
        
        if (komputer == 1) {
            hasil = "kalah";
        } else if (komputer == 2) {
            hasil = "stalemate";
        } else {
            hasil = "menang";
        }
    } else if (MC == 3){
        character = " KERTAS 🧻";

        if (komputer == 1) {
            hasil ="menang";
        } else if (komputer == 2) {
            hasil = "kalah";
        } else {
            hasil = "stalemate";
        }
    } else {
        MC = rand() %4;

        while (MC == 0) {
            MC = rand() %4;
        }
    }

    // proses kemenangan
    if (hasil == "stalemate") {
        stalemate();
    } else if (hasil == "menang") {
        menang();
    } else if (hasil == "kalah") {
        kalah();
    }   else {
        system("clear");
        cout << "pilihan berada di luar jangkauan\n";
        goto awal;
    }
    // default
    akhir();

    return 0;
}
