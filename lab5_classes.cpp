#include <iostream>

using namespace std;

class student{
    public:

    void fun(){
        cout << "Function overloading" << endl;
    }

    void fun(int x){
        for (int i=0; i<x; i++){
            cout << "Repeating statement" << endl;
        }
    }
};

int main(){
    student cbs;

    cbs.fun();
    cbs.fun(4);
    cbs.fun();

    return 0;
}