#include <iostream>

using namespace std;

int main(){
    int income, tax;

    cout << "Enter your taxable income: ";

    cin >> income;

    if (income < 150000){
        tax = 0;
    } else if (income < 300000){
        tax = 10;
    } else if (income < 500000){
        tax = 20;
    } else {
        tax = 30;
    }

    cout << "You have to pay "<< tax <<"% tax" << endl;
    cout << "Total payable amount: " << income*tax/100 << endl;

    return 0;
}