#pragma once
#ifndef article_h
#define article_h
#include <iostream>
#include <string> 
#include "book.h"
using namespace std;

class Article:public Book {
protected:
	string uniName;
	string techName;
	int salVorod; // سال ورودی
public:
	Article(const string&,const string&,const Date&,const string&, const string&, int);
	void setArticleBook(const string&, const string&, const Date&, const string&, const string&, int);
	void print();
	string getTitile() { return title; }


};
#endif // !article_h
