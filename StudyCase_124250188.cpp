#include <iostream> 
// Mengimpor library iostream untuk menggunakan cout dan cin

using namespace std; 
// Supaya tidak perlu menulis std:: sebelum cout atau endl

int main() { 
    // Fungsi utama, program mulai dieksekusi dari sini

    int n = 5; 
    // Menentukan jumlah elemen array (panjang array = 5)

    int array[5] = {10, 25, 7, 40, 15}; 
    // Mendeklarasikan dan menginisialisasi array dengan 5 nilai tetap

    int *ptr = array; 
    // Membuat pointer yang menunjuk ke alamat awal array

    cout << "Isi Array:\n"; 
    // Menampilkan teks "Isi Array:" ke layar

    for(int i = 0; i < n; i++) { 
        // Perulangan untuk mengakses setiap elemen array

        cout << *(ptr + i) << " "; 
        // Mengakses elemen array menggunakan pointer
    }

    int max = *ptr; 
    // Menginisialisasi nilai maksimum dengan elemen pertama array

    int min = *ptr; 
    // Menginisialisasi nilai minimum dengan elemen pertama array

    int jumlah = 0; 
    // Variabel untuk menyimpan total jumlah seluruh elemen

    for(int i = 0; i < n; i++) { 
        // Perulangan untuk mencari nilai maks, min, dan jumlah

        if(*(ptr + i) > max) { 
            // Mengecek apakah elemen saat ini lebih besar dari max
            max = *(ptr + i); 
            // Jika iya, perbarui nilai max
        }

        if(*(ptr + i) < min) { 
            // Mengecek apakah elemen saat ini lebih kecil dari min
            min = *(ptr + i); 
            // Jika iya, perbarui nilai min
        }

        jumlah += *(ptr + i); 
        // Menambahkan setiap elemen ke variabel jumlah
    }

    double rata = (double)jumlah / n; 
    // Menghitung rata-rata dengan membagi jumlah dengan n
    // double agar hasilnya bisa desimal

    cout << "\n\nNilai Maximum: " << max; 
    // Menampilkan nilai maksimum

    cout << "\nNilai Minimum: " << min; 
    // Menampilkan nilai minimum

    cout << "\nJumlah: " << jumlah; 
    // Menampilkan total jumlah elemen

    cout << "\nRata-rata: " << rata; 
    // Menampilkan nilai rata-rata

    return 0; 
    // Mengakhiri program dan mengembalikan nilai 0 (berhasil)
}