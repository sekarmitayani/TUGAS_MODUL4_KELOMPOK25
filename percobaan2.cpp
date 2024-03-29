#include <iostream>

using namespace std;

class namaanggota {
public:
    void namakelompok() {
        //nama kelompok
        cout << "Kelompok : 25" << endl;
        cout << "Shift : 5" << endl;
        cout << "Nama anggota 1 : Arif Zulham Bagaskara " << endl;
        cout << "Nama anggota 2 : Muhammad Zaky Adzkiya" << endl;
        cout << "Nama anggota 3 : Sekar Mitayani" << endl;
        cout << "Nama anggota 4 :  " << endl;
    }
};

void pembayaran(int beli);

void awal() {
    cout << "===============================================\n"
         << "=========SELAMAT DATANG DI WARNET ABCD=========\n"
         << "===============================================\n";
}


int main()
{
    int beli, hargapaket, paket, ch;

    namaanggota myObj;
    myObj.namakelompok();
    awal();

    do
    {
        cout << "" << endl;
        cout << "||=================================================||" << endl;
        cout << "||===========SILAHKAN PILIH PAKET DIBAWAH==========||" << endl;
        cout << "||===============KETIK ANGKANYA SAJA===============||" << endl;
        cout << "||                    CONTOH : 1                   ||" << endl;
        cout << "||                                                 ||" << endl;
        cout << "||PAKET 1 Biling 3 Jam              (Rp.15000)  (1)||" << endl;
        cout << "||PAKET 2 Biling 5 Jam              (Rp.20000)  (2)||" << endl;
        cout << "||PAKET 3 Biling 10 Jam             (Rp.35000)  (3)||" << endl;
        cout << "||PAKET Bertapa 24 JAM (REKOMENDED) (Rp.70000)  (4)||" << endl;
        cout << "||PAKET Malam dari jam 22.00 - 07.00(Rp.30000)  (5)||" << endl;
        cout << "||=================================================||" << endl;
        cout << "" << endl;
        cout << "MASUKKAN ANGKA PADA PAKET YANG DIPILIH : "; cin >> paket;

        beli = 0;

        switch (paket) {
        case 1:
            cout << "" << endl;
            cout << "PAKET 1 Bling 3 jam (Rp.15000)" << endl;
            cout << "" << endl;
            break;
        case 2:
            cout << "" << endl;
            cout << "PAKET 1 Bling 3 jam (Rp.20000)" << endl;
            cout << "" << endl;
            break;
        case 3:
            cout << "" << endl;
            cout << "PAKET 1 Bling 3 jam (Rp.35000)" << endl;
            cout << "" << endl;
            break;
        case 4:
            cout << "" << endl;
            cout << "PAKET 1 Bling 3 jam (Rp.70000)" << endl;
            cout << "" << endl;
            break;
        case 5:
            cout << "" << endl;
            cout << "PAKET Malam (Rp.30000)" << endl;
            cout << "" << endl;
            break;
        default:
            cout << "MOHON MAAF YH, PAKET TIDAK TERDAFTAR SILAHKAN PINDAH KE WARNET SEBELAH!" << endl;
            break;
        }

        if (paket == 1) {
            hargapaket = 15000;
        }
        else if (paket == 2) {
            hargapaket = 20000;
        }
        else if (paket == 3) {
            hargapaket = 35000;
        }
        else if (paket == 4) {
            hargapaket = 70000;
        }
        else if (paket == 5) {
            hargapaket = 30000;
        }
        else if (beli == 0) {
            return 0;
        }
        beli += hargapaket;
        pembayaran(beli);
        ch = 0;
        cout << "BELI PAKET LAGI ? \t\t>> TEKAN 1\n";
        cout << "KELUAR ? \t\t\t>> TEKAN 2\n >>";
        cin >> ch;
    }     while (ch != 2);
    return 0;
}

void pembayaran(int beli)
{
    int masuk, lebih;
    cout << "" << endl;
    cout << "||Harga Paket yang dipilih \t: Rp. " << beli; cout << "||" << endl;
    cout << "Pembayaran TUNAI \t\t: Rp. "; cin >> masuk;
    cout << "" << endl;

    while (masuk < beli)
    {
        cout << "LAH UANGNYA GA CUKUP BRO PINJEM TEMEN DULU BURUAN" << endl;
        cout << "Bayar ulang \t\t\t: Rp. "; cin >> masuk;
        cout << "" << endl;
    }
    if (masuk == beli)
    {
        cout << "DUITNYA PAS BRO, MANTAB" << endl;
        cout << "" << endl;
    }
    else
    {
        lebih = masuk - beli;
        cout << "DUITNYA KELEBIHAN \t\t: Rp. " << lebih; cout << "\t BRO!!!" << endl;
        cout << "" << endl;
    }
}
