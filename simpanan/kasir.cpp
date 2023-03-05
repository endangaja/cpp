#include <iostream>
#include <cstdlib>
using namespace std;

// ! DEKLARASI
    // deklarasi umum
    string nama_pembeli, beli;
    unsigned long int uang, diskon, kembalian, beli_sementara =0, bayar = 0;
    unsigned char belienggak, keluar, belanja;

    // deklarasi struk pembayaran
    const string struk_satu = "\n\tAqua 600Ml \t\t";
    const string struk_dua = "\n\tCornetto Rose 131mL";
    const string struk_tiga = "\n\tKapal Api Spesial Mix 20x24gr";
    const string struk_empat = "\n\tSegitiga Biru 1000G\t";
    const string struk_lima = "\n\tNetsle Dancow Fortigro 400G";

    // deklarasi untuk harga pada struk pembayaran
    unsigned long int harga_satu = 0;
    unsigned long int harga_dua = 0;
    unsigned long int harga_tiga = 0;
    unsigned long int harga_empat = 0;
    unsigned long int harga_lima = 0;

    // deklarasi jumlah yang dibeli
    unsigned long int jumlah_beli_aqua = 0;
    unsigned long int jumlah_beli_cornetto = 0;
    unsigned long int jumlah_beli_kopi = 0;
    unsigned long int jumlah_beli_tepung_segitiga_biru = 0;
    unsigned long int jumlah_beli_netsle_dancow_fortigro_400G = 0;

// ! menu yang ditampilkan
void menu() {
    cout << "\t\t\t\tTOKOPAEDI\n";
    cout << "\tSelamat datang di TOKOPAEDI belanja murah makin hemat!\n\n";
    cout << "\t===========================================================\n";
    cout << "\t| KODE   PRODUK                                  HARGA    |\n";
    cout << "\t| 1      Aqua 600Ml                               3.600   |\n";
    cout << "\t| 2      Cornetto Rose 131mL                     12.500   |\n";
    cout << "\t| 3      Kapal Api Special Mix 20X24g            26.600   |\n";
    cout << "\t| 4      Tepung Terigu Segitiga Biru 1000G       15.900   |\n";
    cout << "\t| 5      Netsle Dancow Fortigro 400G             47.300   |\n";
    cout << "\t===========================================================\n\n";
}

int main(int, char const *[])
{
    #ifdef _WIN32
        system("cls");
    #endif

    #ifdef __APPLE__
        system("clear");
    #endif

    #ifdef __linux__
        system("clear");
    #endif

    menu();

    // pemesanan
    cout << "LOG SISTEM\n" << "--------------------------------------\n\n";
    cout << "Nama pembeli : ";
    getline(cin, nama_pembeli);
    permulaan:
    pembelian:
    cout << "Masukkan kode pembelian : ";
    cin >> beli;

    // ! PROSES HARGA
    // bareang yang dibeli, harganya, dan total yang harus dibayar
    if (beli == "1") {
        cout << "Jumlah pembelian (dengan angka) : ";
        cin >> beli_sementara;
        jumlah_beli_aqua += beli_sementara;
        bayar += jumlah_beli_aqua * 3600;
        cout << "Apakah kamu mau belanja lagi? (y/n)\n";
        cin >> belanja;
        harga_satu = jumlah_beli_aqua * 3600;
    } else if(beli == "2") {
        cout << "Jumlah pembelian (dengan angka) : ";
        cin >> beli_sementara;
        jumlah_beli_cornetto += beli_sementara;
        bayar += jumlah_beli_cornetto * 12500;
        cout << "Apakah kamu mau belanja lagi? (y/n)\n";
        cin >> belanja;
        harga_dua = jumlah_beli_cornetto * 12500;
    } else if(beli == "3") {
        cout << "Jumlah pembelian (dengan angka) : ";
        cin >> beli_sementara;
        jumlah_beli_kopi += beli_sementara;
        bayar += jumlah_beli_kopi * 26600;
        cout << "Apakah kamu mau belanja lagi? (y/n)\n";
        cin >> belanja;
        harga_tiga = jumlah_beli_kopi * 26600;
    } else if(beli == "4") {
        cout << "Jumlah pembelian (dengan angka) : ";
        cin >> beli_sementara;
        jumlah_beli_tepung_segitiga_biru += beli_sementara;
        bayar += jumlah_beli_tepung_segitiga_biru * 15900;
        cout << "Apakah kamu mau belanja lagi? (y/n)\n";
        cin >> belanja;
        harga_empat = jumlah_beli_tepung_segitiga_biru * 15900;
    } else if(beli == "5") {
        cout << "Jumlah pembelian (dengan angka) : ";
        cin >> beli_sementara;
        jumlah_beli_netsle_dancow_fortigro_400G += beli_sementara;
        bayar += jumlah_beli_netsle_dancow_fortigro_400G * 47300;
        cout << "Apakah kamu mau belanja lagi? (y/n)\n";
        cin >> belanja;
        harga_lima = jumlah_beli_netsle_dancow_fortigro_400G * 47300;
    } else {
        goto pembelian;
    }
    /*
        konfirmasi pembayaran dan struknya
        variabel belanja sudah diinput pada proses if else sebelumnay
    */

    if (belanja == 'y') {
        goto pembelian;
    } else if (belanja == 'n') {
        jadi:
        
        // penutup log

        cout << "\n--------------------------------------\n\n";

        // STRUK PEMBAYARAN
        cout << endl;
        cout << "\t===========================================================\n";
        cout << "\t                      STRUK PEMBAYARAN\n";
        cout << "\t===========================================================\n";
        cout << "\tNama pembeli : " << nama_pembeli << endl;
        cout << "\tProduk yang dibeli\t\tJumlah\t\t  Harga\n";

        if (jumlah_beli_aqua > 0) {
            cout << struk_satu << "\t" << jumlah_beli_aqua << "x\t\t" << "  Rp " << harga_satu;
        } else {}
        if (jumlah_beli_cornetto > 0) {
            cout << struk_dua << "\t\t" << jumlah_beli_cornetto << "x\t\t" << "  Rp " << harga_dua;
        } else {}
        if (jumlah_beli_kopi > 0) {
            cout << struk_tiga << "\t" << jumlah_beli_kopi << "x\t\t  " << "Rp " << harga_tiga;
        } else {}
        if (jumlah_beli_tepung_segitiga_biru > 0) {
            cout << struk_empat << "\t" << jumlah_beli_tepung_segitiga_biru << "x\t\t" << "  Rp " << harga_empat;
        }  else {}
        if (jumlah_beli_netsle_dancow_fortigro_400G > 0) {
            cout << struk_lima << "\t" << jumlah_beli_netsle_dancow_fortigro_400G << "x\t\t" << "  Rp " << harga_lima;
        } else {}
        cout << "\n\n\t============================================================\n";
        if (bayar >= 100000) {
            diskon = bayar * 0.1;
            bayar -= diskon;
            cout << "\tDiskon:\t\t\t\t\t\t  " << "Rp " << diskon << endl;
        } else {}
        cout << "\tTotal pembayaran:\t\t\t\t  " << "Rp " << bayar;
        duit:
        cout << "\n\tMasukkan uangnya!:\t\t\t\t  Rp ";
        cin >> uang;

        // keuangan
        if (uang < bayar) {
            cout << "\tUang anda kurang";
            goto duit;
        } else if (uang >= bayar) {
            kembalian = uang - bayar;
            if (kembalian > 0){
                cout << "\tKembalian:\t\t\t\t\t  Rp " << kembalian << endl;
            }
            cout << "\t===========================================================";
        }

        // BELI GAK?!
        cout << "\n\n\tKonfirmasi? (y/n)\n\t";
        cin >> belienggak;

        if (belienggak == 'y') {
            cout << "\n\t\tTerimakasih telah berbelanja di toko kami!\n\n";
        } else if (belienggak == 'n') {
            nanya:
            bayar = 0;

            // setelah gak jadi beli, mau keluar apa pesen lagi?
            cout << "Apakah anda ingin keluar? (y/n)\n";
            cin >> keluar;

            if (keluar == 'y') {
                cout << "\nBye bye!\n\n";
                return 0;
            } else if (keluar == 'n') {
                jumlah_beli_aqua = 0;
                jumlah_beli_kopi = 0;
                jumlah_beli_tepung_segitiga_biru = 0;
                jumlah_beli_cornetto = 0;
                cout << endl;
                goto permulaan;
            } else {
                goto nanya;
            }

        } else {
            goto jadi; }
    }
    return 0;
}