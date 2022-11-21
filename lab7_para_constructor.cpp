#include <iostream>

using namespace std;

//find area of rectangle withh parametrized constructor

class rectangle{
    int length, width;

    public:

    rectangle(int l, int w){
        length = l;
        width = w;
    }

    int area(){
        return length * width;
    }


};

int main(){

    rectangle obj(33,13);

    cout << obj.area() << endl;

    return 0;
}