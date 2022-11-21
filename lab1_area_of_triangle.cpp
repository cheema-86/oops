#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float side_1, side_2, side_3;
    float semi, temp, area;

    cout << "Enter three sides of the triangle\n";

    cin >> side_1 >> side_2 >> side_3;

    if (side_1 == 0 || side_2 == 0 || side_3 == 0){

        cout << "This is not a triangle" << endl;

    }else{

        semi = (side_1+side_2+side_3)/2;

        temp = (semi*(semi-side_1)*(semi-side_2)*(semi-side_3));

        if (temp <= 0){
            cout << "Not a valid triangle" << endl;
        } else {
            area = sqrt(temp);
            cout << "Area of triangle is " << area << endl;
        }
    }

    return 0;
}