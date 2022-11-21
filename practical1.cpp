#include <iostream>

using namespace std;

void S1(){
    cout << " Front Camera \n Bluetooth" << endl;
}

void S2(){
    cout << " Infared Sensor \n G-Sensor" << endl;
}

void S3(){
    S1();
    S2();
}

void S4(){
    S3();
    cout << " Fingerprint Sensor \n Miracast" << endl;
}

int main(){
    int choice = 0,i;
    

    do {
        cout << "Press 1 to get details for model S1" << endl;
        cout << "Press 2 to get details for model S2" << endl;
        cout << "Press 3 to get details for model S3" << endl;
        cout << "Press 4 to get details for model S4" << endl;
        cout << "0 to exit" << endl;

        cin >> choice;

        if(choice == 1){
            cout << "\nFeatures: "<<endl;
            S1();
            cout << "\n\n";
        } else if (choice == 2){
            cout << "\nFeatures: "<<endl;
            S2();
            cout << "\n\n";
        } else if (choice == 3){
            cout << "\nFeatures: "<<endl;
            S3();
            cout << "\n\n";
        } else if (choice == 4){
            cout << "\nFeatures: "<<endl;
            S4();
            cout << "\n\n";
        }
    
    } while (choice);
    

    return 0;
}