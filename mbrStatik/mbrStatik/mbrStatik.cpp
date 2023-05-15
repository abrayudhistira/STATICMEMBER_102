#include <iostream>
#include <string>
using namespace std;

class mahasiswa {			//membuat class mahasiswa
public:
	static int nim;			//membuat member static
	int id;
	string nama;

	void setID();			//method setid
	void printAll();		//method print all
	mahasiswa(string pnama) :nama(pnama) { setID(); }
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
	id = ++nim;

}
int main()
{
 
}
