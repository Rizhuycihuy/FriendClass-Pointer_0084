#include <iostream>
using namespace std;

class LayangLayang {
private:
    double d1, d2;
    double s1, s2; 

public:
    void input() {
        cout << "=== Input Layang-Layang ===" << endl;
        cout << "Masukkan diagonal 1: ";
        cin >> d1;
        cout << "Masukkan diagonal 2: ";
        cin >> d2;
        cout << "Masukkan sisi 1: ";
        cin >> s1;
        cout << "Masukkan sisi 2: ";
        cin >> s2;
    }

    double luas() {
        return 0.5 * d1 * d2;
    }

    double keliling() {
        return 2 * (s1 + s2);
    }

    void output() {
        cout << "\n=== Layang-Layang ===" << endl;
        cout << "Luas: " << luas() << endl;
        cout << "Keliling: " << keliling() << endl;
    }

    friend double kelilingLayang(LayangLayang l);
};

double kelilingLayang(LayangLayang l) {
    return l.keliling();
}

class BelahKetupat {
private:
    double d1, d2;
    double sisi;

public:
    void input() {
        cout << "\n=== Input Belah Ketupat ===" << endl;
        cout << "Masukkan diagonal 1: ";
        cin >> d1;
        cout << "Masukkan diagonal 2: ";
        cin >> d2;
        cout << "Masukkan sisi: ";
        cin >> sisi;
    }

    double luas() {
        return 0.5 * d1 * d2;
    }

    double keliling() {
        return 4 * sisi;
    }

    void output(LayangLayang l) {
        cout << "\n=== Belah Ketupat ===" << endl;
        cout << "Luas: " << luas() << endl;
        cout << "Keliling: " << keliling() << endl;

        cout << "Keliling Layang-Layang : " << kelilingLayang(l) << endl;
    }
};

int main() {
    LayangLayang ll;
    BelahKetupat bk;

    ll.input();
    bk.input();

    ll.output();
    bk.output(ll);

    return 0;
}