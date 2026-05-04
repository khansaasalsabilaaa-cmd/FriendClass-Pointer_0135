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
    

}

