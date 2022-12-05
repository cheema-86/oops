#include <iostream>

using namespace std;

class student{
    public:

    int a();
};

int student::a(){
    cout << "hello";
}

int x = 9;

int main(){

    double x = 3.4;

    cout << int(x) << endl; 

    cout << x;
    cout << ::x;

    student b;
    b.a();

    try
    {
        /* code */
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}
