#pragma once
#ifndef elecBook_h
#define elecBook_h
#include <iostream>
#include <string> 
#include "book.h"
using namespace std;

class ElecBook:public Book {
protected:
	string fileName;
	string fileSize; // 126kb
	string fileType; // pdf ,
public:
	ElecBook(const string&, const string&, int, int, int, int, const string&, const string&, const string&);
	void print();
	string getTitile() { return title; }

	void setElecBook(const string&, const string&, int, const Date&, const string&, const string&, const string&);

};
#endif // !elecBook_h
