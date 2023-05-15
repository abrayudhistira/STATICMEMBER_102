#include <iostream>
using namespace std;

class angka {
private:
    int* arr;
    int panjang;
public:
    angka(int);     //constructor
    ~angka();       //destructor
    void cetakData();
    void isiData();
};
//definisi member function
angka::angka(int i) {
    panjang = i;
    arr = new int[i];
    isiData();
}

int main()
{
    std::cout << "Hello World!\n";
}