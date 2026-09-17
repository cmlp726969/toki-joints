#include "iostream"

using namespace std;

int main(){
    // a = pernah ikut bimbel
    // b = belum pernah ikut bimbel
    int a, b;
    cin >> a >> b;

    if (b > 3){
        cout << (a + 1) - 3 << endl;
    } else {
        cout << (a + 1) - b << endl;
    }
    return 0;
}
