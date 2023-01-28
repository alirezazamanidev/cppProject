#include <iostream>
#include "date.h"
using namespace std;


Date::Date(int year, int month, int day) {
	setDate(year, month, day);
}

void Date::setDate(int year, int month,int day) {
	this->year = (year > 1330 && year <= 1401) ? year : 1399;
	this->month = (month >= 1 && month <= 12) ? month : 1;
	this->day = (day > 0 && day <= 30) ? day : 1;
}
void Date::print() {
	cout << year << " / " << month << " / " << day << endl;
}