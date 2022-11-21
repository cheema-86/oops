#include <iostream>

using namespace std;

int main(){

    int i;
    for (int tri = 1, mt = 16; tri < 20; tri+=2, mt--){ //tri - triangle; mt - empty space
        for (i = 0; i<mt; i++){
            cout << " ";
        }
        for (i = 0; i<tri; i++){
            cout << "#";
        }
        cout << endl;

    }

    return 0;
}