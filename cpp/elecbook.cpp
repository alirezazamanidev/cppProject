#include <iostream>
#include <string> 
#include "book.h"
#include  "elecbook.h"

ElecBook::ElecBook(const string& title, const string& auothorName, int price, int y, int m, int d, const string& fileName, const string& fileSize, const string& fileType) :Book(title, auothorName, price, y, m, d) {
	type = 3;
	this->fileName = fileName;
	this->fileSize = fileSize;
	this->fileType = fileType;
}
void ElecBook::ElecBook::setElecBook(const string& title, const string& auothorName, int price, const Date& pub, const string& fileName, const string& fileSize, const string& fileType) {
	Book::setBook(title, auothorName,price,pub);
	this->fileName = fileName;
	this->fileSize = fileSize;
	this->fileType = fileType;

}
void ElecBook::print() {

	Book::print();
	cout << "File Name : " << fileName << endl;
	cout << "file Size : " << fileSize << endl;
	cout << "file type : " << fileType << endl;

}