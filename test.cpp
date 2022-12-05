#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream myfile("test.txt");

    myfile << "NFS Unbound";

    myfile.close();

    return 0;
}