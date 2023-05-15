#include <iostream>
using namespace std;
class buku				// membuat class buku
{
	string judul;

public:
	buku setJudul(string judul)
	{
		this->judul = judul;
		return *this;	//
	}
};

int main()
{

}
