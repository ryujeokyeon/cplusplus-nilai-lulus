#include <iostream>
using namespace std;

int main(){
    double nilai;
    int kkm = 75;

    cout << "masukkan nilai (0-100) \t : ";
    cin >> nilai;

    if (nilai >= kkm) {
        cout << "TUNTAS";
    } else {
        cout << "TIDAK TUNTAS";
    }
}