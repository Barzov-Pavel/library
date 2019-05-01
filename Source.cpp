#include "Header.h"


library::library()
{

}

library::library(string title, int year)
{
	this->library::title = title;
	this->library::year = year;
}



void library::setTitle(string title)
{
	this->title = title;
}

void library::setYear(int year)
{
	this->year = year;
}




string library::getTitle()
{
	return library::title;
}

int library::getYear()
{
	return library::year;
}




ostream & operator<<(ostream & stream, library obj)
{
	stream << "Название: " << obj.title << "\n";
	stream << "Год издания: " << obj.year << "\n";
	stream << endl;
	return stream;
}

istream & operator >> (istream & stream, library obj)
{
	stream >> obj.title >> obj.amount;
	return stream;
}

///////////////////////////////////////////////////////////////////////////////


book::book()
{

}

book::book(string title, int year)
{
	this->book::title = title;
	this->book::year = year;
}

ostream & operator<<(ostream & stream, book obj)
{
	stream << endl << "Название: " << obj.title << "\n";
	stream << "Год издания: " << obj.year << "\n";
	stream << endl;
	return stream;
}