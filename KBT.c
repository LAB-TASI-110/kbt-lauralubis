#include <stdio.h>   // Untuk fungsi input/output seperti printf dan fgets
#include <string.h>  // Untuk manipulasi string seperti strlen dan strcspn

// Mendefinisikan panjang maksimum untuk input string agar tidak overflow
#define MAX_INPUT_LENGTH 100

int main() {
    // Deklarasi variabel untuk menyimpan data pemesanan
    char namaPenumpang[MAX_INPUT_LENGTH];
    char nomorTelepon[MAX_INPUT_LENGTH];
    char tujuanPerjalanan[MAX_INPUT_LENGTH];
    int hargaTiket;
    char tanggalKeberangkatan[MAX_INPUT_LENGTH];
    char waktuKeberangkatan[MAX_INPUT_LENGTH];
    const char *namaPerusahaan = "Koperasi Bintang Tapanuli"; // Nama perusahaan yang statis

    // --- Awal Alur Pemikiran untuk Mahasiswa Semester 2 ---
    // 1. Sambut pengguna dan jelaskan tujuan program.
    // 2. Minta setiap data input satu per satu tanpa validasi.
    // 3. Setelah semua data terkumpul, tampilkan rekap pemesanan.
    // 4. Berikan pesan penutup.
    // --- Akhir Alur Pemikiran ---

    printf("Selamat datang di Sistem Pemesanan Tiket Koperasi Bintang Tapanuli!\n");
    printf("=================================================================\n");

    // Input Nama Penumpang
    printf("Masukkan Nama Penumpang: ");
    fgets(namaPenumpang, MAX_INPUT_LENGTH, stdin);
    // Menghilangkan karakter newline ('\n') yang ditambahkan fgets
    namaPenumpang[strcspn(namaPenumpang, "\n")] = 0;

    // Input Nomor Telepon
    printf("Masukkan Nomor Telepon: ");
    fgets(nomorTelepon, MAX_INPUT_LENGTH, stdin);
    nomorTelepon[strcspn(nomorTelepon, "\n")] = 0;

    // Input Tujuan Perjalanan
    printf("Masukkan Tujuan Perjalanan: ");
    fgets(tujuanPerjalanan, MAX_INPUT_LENGTH, stdin);
    tujuanPerjalanan[strcspn(tujuanPerjalanan, "\n")] = 0;

    // Input Harga Tiket (asumsi pengguna akan memasukkan angka bulat yang benar)
    printf("Masukkan Harga Tiket (bilangan bulat): ");
    scanf("%d", &hargaTiket);
    // Membersihkan buffer input dari karakter newline yang tersisa setelah scanf
    while (getchar() != '\n');

    // Input Tanggal Keberangkatan (asumsi pengguna akan memasukkan format yang benar)
    printf("Masukkan Tanggal Keberangkatan (contoh: DD-MM-YYYY): ");
    fgets(tanggalKeberangkatan, MAX_INPUT_LENGTH, stdin);
    tanggalKeberangkatan[strcspn(tanggalKeberangkatan, "\n")] = 0;

    // Input Waktu Keberangkatan (asumsi pengguna akan memasukkan format yang benar)
    printf("Masukkan Waktu Keberangkatan (contoh: HH.MM WIB): ");
    fgets(waktuKeberangkatan, MAX_INPUT_LENGTH, stdin);
    waktuKeberangkatan[strcspn(waktuKeberangkatan, "\n")] = 0;

    // --- Tampilan Output Hasil Pemesanan sesuai contoh yang diberikan ---
    printf("\n"); // Baris kosong untuk kerapian
    printf("--Pemesanan tiket kendaraan umum--\n");
    printf("%s\n", namaPerusahaan);
    printf("----------------------------------\n");
    printf("Nama             : %s\n", namaPenumpang);
    printf("Nomor Telepon    : %s\n", nomorTelepon);
    printf("Tujuan           : %s\n", tujuanPerjalanan);
    printf("Harga Tiket      : %d\n", hargaTiket);
    printf("Tanggal Berangkat: %s\n", tanggalKeberangkatan);
    printf("Waktu Berangkat  : %s\n", waktuKeberangkatan);
    printf("---------------------------------\n");
    printf("Terimakasih sudah menggunakan layanan kami!\n");
    printf("Hati-hati di jalan!\n");

    return 0; // Mengindikasikan program berjalan
}
