#include <iostream>
using namespace std;

class BelahKetupat;  // forward declaration

class LayangLayang {
private:
    float d1, d2; //diagonal
    float a, b; // sisi

public:
    void input(){
        cout << "=== Input Layang-Layang ===" << endl;
        cout << "Diagonal 1 : "; 
        cin >> d1;
        cout << "Diagonal 2 : ";
        cin >> d2;
        cout << "Sisi a : ";
        cin >> a;
        cout << "Sisi b : ";
        cin >> b;
    }

    float luas() {
        return 0.5 * d1 * d2;
    }

    float keliling() {
        return 2 * (a + b);
    }
    
    void output(){
        cout << "\n=== Output Layang-Layang ===" << endl;
        cout << "Luas : " << luas() << endl;
        cout << "Keliling : " << keliling() << endl;
    }

    // friend class
    friend class BelahKetupat;
};

class BelahKetupat {
private:
    float d1, d2;
    float sisi;

public:
    void input(){
        cout << "\n=== Input Belah Ketupat ===" << endl;
        cout << "Diagonal 1 : ";
        cin >> d1;
        cout << "Diagonal 2 : ";
        cin >> d2;
        cout << "Sisi : ";
        cin >> sisi;
    }

    float luas() {
        return 0.5 * d1 * d2;
    }

    float keliling() {
        return 4 * sisi;
    }

    

}

