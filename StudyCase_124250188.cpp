#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int array[5] = {10, 25, 7, 40, 15};
    int *ptr = array;
    cout << "Isi Array:\n";

    for(int i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";
    }
    int max = *ptr;
    int min = *ptr;
    int jumlah = 0;

    for(int i = 0; i < n; i++) {

        if(*(ptr + i) > max) {
            max = *(ptr + i);
        }

        if(*(ptr + i) < min) {
            min = *(ptr + i);
        }

        jumlah += *(ptr + i);
    }

    double rata = (double)jumlah / n;

    cout << "\n\nNilai Maximum: " << max;
    cout << "\nNilai Minimum: " << min;
    cout << "\nJumlah: " << jumlah;
    cout << "\nRata-rata: " << rata;

    return 0;
}