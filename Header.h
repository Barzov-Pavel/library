#ifndef HEADER_H
#define HEADER_H
#include <string>
#include <iostream>
#include <fstream>
#include <istream>
#include <ostream>
#include <Windows.h>
#include <cstdio>
#include <ctime>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////

class library												// Базовый класс
{
protected:
	string author;
	string title;
	int year;
	int amount;
public:
	library();
	library(string title, int year);
	void setTitle(string title);
	void setYear(int year);
	string getTitle();
	int getYear();
	friend istream & operator >> (istream & stream, library obj);
	friend ostream& operator << (ostream & stream, library obj);
};

///////////////////////////////////////////////////////////////////////////////////////////////

class book : public library								// Базовый класс 2 уровня
{
protected:

	string levelDefend;
public:
	book();
	book(string title, int year);
	friend ostream& operator << (ostream & stream, book obj);
};


#endif