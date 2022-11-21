#include <iostream>
#include <string>

using namespace std;

class employee{
    public:

    string name;
    long num;

    void get_data(int i){
        cout << "Enter employee name: ";
        cin >> name;
        num = i;
    }

    void put_data(){
        cout << "--Employee--" << endl;
        cout << "Name: " << name << endl;
        cout << "Number: " << num << endl;
    }

};

int main(){
    int i;
    employee employee_list[10];

    for (i=0; i<10; i++) {
        cout << "Enter data for " << i+1 << "th employee" << endl;
        employee_list[i].get_data(i+1);
    }

    for (i=0; i<10; i++) {
        employee_list[i].put_data();
    }

    return 0;
}