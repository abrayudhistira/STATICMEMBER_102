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
	mahasiswa(string pnama) :nama(pnama) { setID(); }		//
};

int mahasiswa::nim = 0;						//

void mahasiswa::setID() {					//
	id = ++nim;								//
}
void mahasiswa::printAll() {				//
	cout << "ID		= " << id <<endl;			//
	cout << "Nama	= " << nama << endl;		//
	cout << endl;
}

int main() {								// main program
	mahasiswa mhs1("Lia Kurnia");			//
	mahasiswa mhs2("Asroni");				//
	mahasiswa mhs3("Andi Kurniawan");		//
	mahasiswa mhs4("Joko Purbo");			//

	mhs1.printAll();						//
	mhs2.printAll();						//
	mhs3.printAll();						//
	mhs4.printAll();						//
	return 0;
}
