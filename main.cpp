#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    int pilih, jumlah, harga;
    string tujuan;

    cout << "===== PEMESANAN TIKET BUS =====" << endl;
    cout << "1. Malang - Surabaya Rp35000" << endl;
    cout << "2. Malang - Pasuruan Rp20000" << endl;
    cout << "3. Malang - Jombang Rp25000" << endl;

    cout << "\nPilih tujuan (1-3): ";
    cin >> pilih;

    if (pilih == 1) {
        tujuan = "Malang - Surabaya";
        harga = 35000;
    } 
    else if (pilih == 2) {
        tujuan = "Malang - Pasuruan";
        harga = 20000;
    } 
    else if (pilih == 3) {
        tujuan = "Malang - Jombang";
        harga = 25000;
    } 
    else {
        cout << "Pilihan tidak tersedia!" << endl;
        harga = 0;
    }

    if (harga > 0) {
        cout << "Masukkan jumlah penumpang: ";
        cin >> jumlah;

        if (jumlah > 0) {
            cout << "\n===== DETAIL PEMESANAN =====" << endl;
            cout << "Tujuan: " << tujuan << endl;
            cout << "Harga tiket: Rp" << harga << endl;
            cout << "Jumlah penumpang: " << jumlah << endl;
            cout << "Total pembayaran: Rp" << harga * jumlah << endl;
            cout << "\nTerima kasih telah memesan tiket!" << endl;
        } else {
            cout << "Jumlah penumpang tidak valid!" << endl;
        }
    }

    cout << "\nTekan ENTER untuk keluar...";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    return 0;
}
