#include <iostream>
using namespace std;

int main() {
    int jam_masuk, jam_keluar;
    char jenis_kendaraan;
    int tarif_per_jam;

    cout << "Selamat datang di parkiran rivaldi prartama" << endl;
    cout << "Masukkan jenis kendaraan (M untuk mobil, S untuk sepeda motor): ";
    cin >> jenis_kendaraan;

    if (jenis_kendaraan == 'M') 
    {
        tarif_per_jam = 5000;  // Tarif parkir per jam untuk mobil
    } else if (jenis_kendaraan == 'S') 
    {
        tarif_per_jam = 2000;  // Tarif parkir per jam untuk sepeda motor
    } else 
    {
        cout << "Jenis kendaraan tidak valid." << endl;
        return 1;  // Keluar dari program dengan kode keluar 1 (error)
    }

    cout << "Masukkan jam masuk (format 24 jam): ";
    cin >> jam_masuk;
    cout << "Masukkan jam keluar (format 24 jam): ";
    cin >> jam_keluar;

    if (jam_masuk >= 0 && jam_masuk <= 24 && jam_keluar >= 0 && jam_keluar <= 24 && jam_keluar >= jam_masuk) {
        int lama_parkir = jam_keluar - jam_masuk;

        // Menghitung biaya parkir berdasarkan tarif per jam
        int biaya_total = lama_parkir * tarif_per_jam;

        cout << "Anda parkir selama " << lama_parkir << " jam." << endl;
        cout << "Biaya parkir Anda adalah Rp " << biaya_total << endl;
        cout << "Semoga selamat sampai tujuan anda berikutnya" << endl;
        cout << "Semoga hari Anda menyenangkan" << endl;
    } else {
        cout << "Input jam tidak valid. Pastikan jam masuk dan jam keluar dalam format 24 jam dan jam keluar harus setelah jam masuk." << endl;
    }

    return 0;
}

