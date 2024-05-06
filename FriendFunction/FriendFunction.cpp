// FriendFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class mahasiswa 
{
private: 
	string name;
public:
	friend void setNama(mahasiswa& a, string);
};
