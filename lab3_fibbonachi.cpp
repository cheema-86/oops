#include <iostream>

using namespace std;

int main(){
    int next, fib, last, usr;

    cout << "Enter max value till when to print: ";
    cin >> usr;

    last = 0;
    fib = 1;

    cout << "--Fibonacchi series--" << endl;
    cout << last << ", " << fib;

    while (1){
        next = fib + last;

        if (next > usr){
            break;
        }

        cout << ", " << next;
        last = fib;
        fib = next;
    }

    cout << endl;    

    return 0;
}