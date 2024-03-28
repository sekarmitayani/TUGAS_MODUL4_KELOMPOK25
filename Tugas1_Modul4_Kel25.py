class PencatatanPengeluaran:
    def __init__(self):
        self.pengeluaran = []

    # Method non-return type untuk menambahkan pengeluaran
    def tambah_pengeluaran(self, item, jumlah):
        self.pengeluaran.append({"item": item, "jumlah": jumlah})
        print(f"Pengeluaran '{item}' sebesar {jumlah} telah ditambahkan.")

    # Method dengan return type untuk menampilkan total pengeluaran
    def total_pengeluaran(self):
        total = 0
        for item in self.pengeluaran:
            total += item["jumlah"]
        return total

    # Method non-return type untuk menampilkan daftar pengeluaran
    def tampilkan_pengeluaran(self):
        if not self.pengeluaran:
            print("Belum ada pengeluaran yang dicatat.")
        else:
            print("Daftar Pengeluaran:")
            for idx, item in enumerate(self.pengeluaran, 1):
                print(f"{idx}. {item['item']}: {item['jumlah']}")
    
    # Function dengan return type untuk meminta input nama item
    def input_item(self):
        item = input("Masukkan nama item pengeluaran: ")
        return item

    # Function dengan return type untuk meminta input jumlah pengeluaran
    def input_jumlah(self):
        while True:
            try:
                jumlah = float(input("Masukkan jumlah pengeluaran: "))
                return jumlah
            except ValueError:
                print("Masukkan angka yang valid.")

# Main program
catatan = PencatatanPengeluaran()

while True:
    print("\n===== Program Pencatatan Pengeluaran =====")
    print("1. Tambah Pengeluaran")
    print("2. Total Pengeluaran")
    print("3. Tampilkan Daftar Pengeluaran")
    print("4. Keluar")

    pilihan = input("Masukkan pilihan (1/2/3/4): ")

    if pilihan == '1':
        item = catatan.input_item()
        jumlah = catatan.input_jumlah()
        catatan.tambah_pengeluaran(item, jumlah)
    elif pilihan == '2':
        total = catatan.total_pengeluaran()
        print(f"Total Pengeluaran Anda: {total}")
    elif pilihan == '3':
        catatan.tampilkan_pengeluaran()
    elif pilihan == '4':
        print("Terima kasih telah menggunakan program ini.")
        break
    else:
        print("Pilihan tidak valid. Silakan pilih 1, 2, 3, atau 4.")
