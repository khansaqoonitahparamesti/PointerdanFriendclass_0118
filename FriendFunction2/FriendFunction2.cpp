// FriendFunction2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class pelajar;
class manusia {

public:
	void showNilaiPelajar(pelajar& x);
};

class pelajar
{
private:
	int nilai;

public:
	pelajar() { nilai = 100; }
	friend void manusia::showNilaiPelajar(pelajar& x);
};
