#include <iostream>
using namespace std;

void nameshow(string nama[], int n){
    for(int i=0;i<n;i++){
        cout << nama[i] << endl;
    }
}

void bubble(string nama[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(nama[j] > nama[j+1]){
                string temp = nama[j];
                nama[j] = nama[j+1];
                nama[j+1] = temp;
            }
        }
    }
}

void quick(string nama[], int awal, int akhir){
    int i = awal, j = akhir;
    string pivot = nama[(awal+akhir)/2];

    while(i <= j){
        while(nama[i] > pivot) i++;
        while(nama[j] < pivot) j--;

        if(i <= j){
            string temp = nama[i];
            nama[i] = nama[j];
            nama[j] = temp;
            i++;
            j--;
        }
    }

    if(awal < j)
        quick(nama, awal, j);
    if(i < akhir)
        quick(nama, i, akhir);
}

int main(){

    int n;
    cout << "Jumlah mahasiswa: ";
    cin >> n;
    cin.ignore();
	string nama[n];
    string namaQuick[n];

    cout << "\nMasukkan nama mahasiswa:\n";
    for(int i=0;i<n;i++){
        cout << "Nama ke-" << i+1 << " : ";
        getline(cin, nama[i]);
        namaQuick[i] = nama[i];
    }
    
    cout << "\nDaftar Nama Sebelum Sorting:\n";
    nameshow(nama, n);

    bubble(nama, n);

    cout << "\nHasil Bubble Sort (Ascending):\n";
    nameshow(nama, n);

    quick(namaQuick, 0, n-1);

    cout << "\nHasil Quick Sort (Descending):\n";
    nameshow(namaQuick, n);

    return 0;
}
