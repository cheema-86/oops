#include <iostream>

using namespace std;

int main(){
    float mark_1, mark_2, mark_3, mark_4;
    float percent, total;

    cout << "Enter marks of 4 subjects (out of 100): " << endl;

    cin >> mark_1 >> mark_2 >> mark_3 >> mark_4;

    total = mark_1+mark_2+mark_3+mark_4;
    percent = total/4;

    cout << "Student name: Steve" << endl;
    cout << "UID: 25CBS1199" << endl;
    if (percent < 40){
        cout << "Fail" << endl;
    } else if (percent < 50){
        cout << "Third Division" << endl;
    } else if (percent < 60){
        cout << "Second Division" << endl;
    } else if (percent < 75){
        cout << "First Division" << endl;
    } else {
        cout << "Distinction" << endl;
    }

    cout << "You have obtained " << total << " out of 400." << endl;
    cout << "Your aggregate is " << percent << "%" << endl;

    return 0;
}