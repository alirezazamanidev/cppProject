#pragma once
#ifndef book_h
#define book_h
#include <iostream>
#include <string>
#include "date.h"
using namespace std;
class Book {
protected:
	int type;
	static int count;
	int id;
	int day[100];
	int month[100];
    int amanatCount;
	string amanatArray[100];
	string title;
	string auothorName;
	int price;
	Date pub;
public:
	Book(const string = "", const string = "", int = 1000, int = 1344, int = 1, int = 1);
	void setBook(const string&, const string&, int, const Date&);
	virtual void  setArticleBook(const string&, const string&, const Date&, const string&, const string&, int) {}
	virtual void setElecBook(const string&, const string&, int, const Date&, const string&, const string&, const string&) {}

	int getType() { return type; }
	virtual void print();
	virtual	string getTitile() { return title; }
	int getId() { return id; }
	void Amanat( const string&);
	void printAmanat();
	void CheckAmanat(int,int);
};
#endif // !book_h
