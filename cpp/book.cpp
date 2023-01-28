#include <iostream>
#include <string>
#include "book.h"
#include "date.h"
using namespace std;



int Book::count = 1000;


Book::Book(const string title,const string auothorName,int price, int y, int m, int d) :pub(y, m, d) {
	id = ++count;
	type = 1;
	this->title = title;
	this->auothorName = auothorName;
	this->price = price > 0  ? price : 1000;
}


void Book::setBook(const string& title, const string& aouthorName, int price, const Date& pub) {
	this->title = title;
	this->auothorName = auothorName;
	this->price = price > 0 ? price : 1000;
	this->pub = pub;
}


void Book::Amanat( const string& title) {

	int m, d;
	int temp;
	amanatCount = 0;
		amanatArray[amanatCount] = title;

		cout << "Enter day is today : ";
		cin >> d;
		cout << "Enter month of the year is today : ";
		cin >> m;
		day[amanatCount] = d + 10;
		month[amanatCount] = m;
		if (day[amanatCount] > 30) {
			temp = day[amanatCount] % 10;
			day[amanatCount] = temp;
			month[amanatCount]++;
		}
		amanatCount++;

}

void Book::CheckAmanat(int m,int d) {

	


	for (int i = 0; i < amanatCount; i++) {
		
			int sumDay = day[i] + (month[i] * 30);
			int sumDay2 = d + (m * 30);
			if (sumDay2 > sumDay) {

				print();
				
			}

	}
}
void Book::printAmanat() {

	for (int i = 0; i < amanatCount; i++) {
		cout << "Title : " << amanatArray[i] << endl;
		cout << "Date : " << month[i] << " / " << day[i] << endl;
	}
}
void Book::print() {
	cout << " ID : " << id << endl;
	cout << " Title : " << title << endl;
	cout << "aouthorName : " << auothorName << endl;
	if (getType() != 2)
		cout << " price : " << price << endl;
	cout << "Pup : ";
	pub.print();
}

