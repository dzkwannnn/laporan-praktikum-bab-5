#include <iostream>
using namespace std;


int sum(const int a[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += a[i];
    }
    return total;
}


int minVal(const int a[], int n) {
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}


int maxVal(const int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}


double mean(const int a[], int n) {
    return (double)sum(a, n) / n;
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    int a[n];
    cout << "Masukkan " << n << " bilangan: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "\nHasil Perhitungan:\n";
    cout << "Jumlah     = " << sum(a, n) << endl;
    cout << "Minimum    = " << minVal(a, n) << endl;
    cout << "Maksimum   = " << maxVal(a, n) << endl;
    cout << "Rata-rata  = " << mean(a, n) << endl;

    return 0;
}

