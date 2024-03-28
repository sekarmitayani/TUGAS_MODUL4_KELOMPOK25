class Pengeluaran:
    def __init__(self):
        self.list_pengeluaran = []
        self.total_pengeluaran = 0

    def tambah_pengeluaran(self, jumlah):
        self.list_pengeluaran.append(jumlah)
        self.total_pengeluaran += jumlah

    def cek_total(self):
        print("Total Pengeluaran Anda:", self.total_pengeluaran)

def beri_saran(total):
    if total > 500:
        print("Hati-hati, pengeluaran Anda sudah mencapai 500.")
    elif total > 300:
        print("Pengeluaran Anda sudah mendekati 300.")
    else:
        print("Pengeluaran Anda masih dalam batas wajar.")

# Fungsi utama
def main():
    pengeluaran = Pengeluaran()

    while True:
        print("\n=== Aplikasi Pencatat Pengeluaran ===")
        print("1. Tambah Pengeluaran")
        print("2. Lihat Total Pengeluaran")
        print("3. Keluar")

        pilihan = input("Pilih menu (1/2/3): ")

        if pilihan == "1":
            jumlah = float(input("Masukkan jumlah pengeluaran: "))
            pengeluaran.tambah_pengeluaran(jumlah)
            print("Pengeluaran berhasil ditambahkan.")
        elif pilihan == "2":
            pengeluaran.cek_total()
            beri_saran(pengeluaran.total_pengeluaran)
        elif pilihan == "3":
            print("Terima kasih!")
            break
        else:
            print("Pilihan tidak valid. Silakan pilih menu yang benar.")

if __name__ == "__main__":
    main()
