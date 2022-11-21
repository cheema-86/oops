#include <iostream>

using namespace std;

int main(){
    int array[4][4];
    int i,j;
    int toFind, found = 0;
    int base = 1000;

    for (i = 0; i < 4; i++){
        for (j = 0; j< 4; j++){
            cout << "Enter element for [" << i << "][" << j << "] position: ";
            cin >> array[i][j];
        }
    }

    cout << "\n\n:: 2D array ::\n" << endl;
    for (i = 0; i < 4; i++){
        for (j = 0; j< 4; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n" << endl;


    cout << "Enter the number you want the memory address for: ";
    cin >> toFind;

    for (i = 0; i < 4; i++){
        for (j = 0; j< 4; j++){
            if (array[i][j]==toFind){
                cout << toFind << " found at location " << i << ", " << j << endl;
                cout << "It has memory address of "<< base <<endl;
                found = 1;
            }
            base += 4;
        }
    }

    if (!found){
        cout << "The number entered by you does not exist in the array." << endl;
    }

    return 0;

}