// PointerdanFriendclass_0118.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void shownim() {
		cout << "no induk =" << nim << endl;
	}
};

int main() {
	mahasiswa mhs{ 1 };//object mhs
	mhs.shownim();

	mahasiswa& refmhs = mhs;
	refmhs.nim = 2;
	mhs.shownim();

	mahasiswa* pmhs = &mhs;
	pmhs->nim = 3;
	mhs.shownim();
	return 0;
}

