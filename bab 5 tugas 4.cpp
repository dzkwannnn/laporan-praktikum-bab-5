#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

using pii = pair<string, int>;


void bersihkan(vector<pii>& v) {
    
    for (auto it = v.begin(); it != v.end(); ) {
        if (it->second <= 0) {
            it = v.erase(it); 
        } else {
            ++it; 
        }
    }
}


void hapusduplikat(vector<pii>& v) {
    vector<pii> hasil; 
    
    for (auto &item : v) {
        bool ditemukan = false;
        
        for (auto &h : hasil) {
            if (h.first == item.first) {
                h.second = item.second; 
                ditemukan = true;
                break;
            }
        }
        
        if (!ditemukan) {
            hasil.push_back(item);
        }
    }
    v = hasil; 
}


void ringkasan(const vector<pii>& v) {
    if (v.empty()) {
        cout << "Tidak ada data barang" << endl;
        return;
    }

    int jumlahBarang = v.size();
    int totalHarga = 0;
    int hargaMin = numeric_limits<int>::max();
    int hargaMax = numeric_limits<int>::min();

    
    for (auto &item : v) {
        totalHarga += item.second;
        if (item.second < hargaMin) hargaMin = item.second;
        if (item.second > hargaMax) hargaMax = item.second;
    }

    double rata2 = (double)(totalHarga) / jumlahBarang;

    cout << "Ringkasan Data Barang" << endl;
    cout << "Jumlah barang unik : " << jumlahBarang << endl;
    cout << "Harga minimum      : " << hargaMin << endl;
    cout << "Harga maksimum     : " << hargaMax << endl;
    cout << "Harga rata-rata    : " << rata2 << endl;
}

int main() {
    vector<pii> data = {
        {"apel", 2000},
        {"jeruk", 1500},
        {"apel", -100},
        {"mangga", 3000},
        {"jeruk", 1500},
        {"pisang", 0},
        {"apel", 2500},
        {"mangga", 3000}
    };

    cout << "Data Awal" << endl;
    for (auto &p : data) {
        cout << p.first << " " << p.second << endl;
    }

    cout << "\nSetelah bersihkan:"<< endl;
    bersihkan(data);
    for (auto &p : data) {
        cout << p.first << " " << p.second << endl;
    }

    cout << "\nSetelah hapus duplikat:" << endl;
    hapusduplikat(data);
    for (auto &p : data) {
        cout << p.first << " " << p.second << endl;
    }

    cout<<endl;
    ringkasan(data);

    return 0;
}

