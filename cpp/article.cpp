
#include <iostream>
#include <string> 
#include "book.h"
#include "article.h"
using namespace std;


Article::Article(const string& title, const string& auothorName,const Date& pub, const string& uniName, const string& thecName, int salVrod) {
	type = 2;
	this->title = title;
	this->auothorName = auothorName;
	this->pub = pub;
	this->uniName = uniName;
	this->salVorod = salVrod >44 ? salVrod :99;
	this->techName = thecName;
	
}

void Article::setArticleBook(const string& title, const string& auothorName, const Date& pub, const string& uniName, const string& thecName, int salvrod) {
	this->title = title;
	this->auothorName = auothorName;
	this->pub = pub;
	this->uniName = uniName;
	this->salVorod = salvrod > 44 ? salvrod : 99;
	this->techName = thecName;
}

void Article::print() {
	Book::print();
	cout << "Uni Name : " << uniName << endl;
	cout << "sal vorod : " << salVorod << endl;
	cout << "tech Name : " << techName << endl;

}