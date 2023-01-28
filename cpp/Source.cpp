#include <iostream>
#include <string> 
#include "book.h"
#include  "elecbook.h"
#include "article.h"
using namespace std;

// Create book

int CreateBook(Book** bookList, int index) {

	// Varibales
	string title, auothorName, UniName, techName, fileNsme, fileSize, fileType;
	Date d1;
	int price,salVrod;
	int y, m, d;
	cout << " 1 - create Article  " << endl<<endl;
	cout << " 2 - create ElecBook  " << endl << endl;
	cout << " 3 - create base book " << endl<<endl;
	cout << " 0 - back home " << endl << endl;
	int choise;
	cout << "Enter your Choise : ";
	cin >> choise;

	switch (choise)
	{
	case 1:
		// create article
		cout << "Enter Title : ";
		cin >> title;
		cout << "Enter aouthorName : ";
		cin >> auothorName;
		cout << "Enter Uni Name : ";
		cin >> UniName;
		cout << "Enter tech Name : ";
		cin >> techName;
		cout << " Enter salVorod : ";
		cin >> salVrod;
		cout << "Enter Pup : ";
		cin >> y >> m >> d;
		d1.setDate(y, m, d);
		bookList[index] = new Article(title, auothorName, d1, UniName, techName, salVrod);
		return 1;
		break;

	case 2 :
		// create Elec book
		cout << "Enter Title : ";
		cin >> title;
		cout << "Enter aouthorName : ";
		cin >> auothorName;
		cout << "Enter price : ";
		cin >> price;
		cout << " File Name : ";
		cin >> fileNsme;
		cout << "File Size : ";
		cin >> fileSize;
		cout << "file Type : ";
		cin >> fileType;
		cout << "Enter Pup : ";
		cin >> y >> m >> d;
		
		bookList[index] = new ElecBook(title, auothorName,price,y,m,d,fileNsme,fileSize,fileType);
		return 1;
		break;
	case 3:
		// create base book
		cout << "Enter title : ";
		cin >> title;
		cout << "Enter auothor name : ";
		cin >> auothorName;
		cout << " Enter price : ";
		cin >> price;
		cout << " Enter pub : ";
		cin >> y >> m >> d;
		bookList[index] = new Book(title, auothorName, price, y, m, d);
		return 1;
		break;
	default:
		return 0;
		break;
	}

	

}


void ShowBook(Book** bookList, int index) {
	cout << " 1 - show Base book " << endl << endl;
	cout << " 2 - show Article " << endl << endl;
	cout << " 3 - Show Elec Book " << endl << endl;
	cout << " 4 - show All " << endl;
	int choise;
	cout << "Enter your Choise : ";
	cin >> choise;
	switch (choise)
	{case 1:

		for (int i = 0; i < index; i++) {
			if (bookList[i]->getType() == 1) {
				bookList[i]->print();
				cout << "-------------------" << endl;
			}
		}
		break;
	case 2:
		for (int i = 0; i < index; i++) {
			if (bookList[i]->getType() == 2) {
				bookList[i]->print();
				cout << "-------------------" << endl;
			}
		}
		break;
	case 3 :
		for (int i = 0; i < index; i++) {
			if (bookList[i]->getType() == 3) {
				bookList[i]->print();
				cout << "---------------------" << endl;
			}
		}
		break;

	case 4:
		for (int i = 0; i < index; i++) {
				bookList[i]->print();
				cout << "---------------------" << endl;

		}
	default:
		break;
	}
}

void SearchBook(Book** bookList, int index) {
	string title;
	cout << "Enter title for Search : ";
	cin >> title;

	for (int i = 0; i < index; i++) {
		if (bookList[i]->getTitile() == title) {
			bookList[i]->print();
		}
	}
}

int DeleteBook(Book** bookList, int index) {
	int id;
	cout << "Enter id for Remove book : ";
	cin >> id;

	for (int i = 0; i < index; i++) {
		if (bookList[i]->getId() == id) {
		
			for (int j = i; j < index; j++)
				bookList[j] = bookList[j + 1];

			return 1;
		}
	}
	cout << "not found! " << endl;
	return 0;
}


void EditBook(Book** bookList, int index) {

	// Varibales
	string title, auothorName, UniName, techName, fileNsme, fileSize, fileType;
	Date d1;
	int price, salVrod;
	int y, m, d;
	int id;

	cout << "1 - Edit Base book : " << endl << endl;
	cout << "2 - Edit Aticle book : " << endl << endl;
	cout << "3 - Edit Elec Book : " << endl << endl;
	int choise;
	cout << "Enter your choise : ";
	cin >> choise;

	switch (choise)
	{
	case 1:

	
		cout << "Enter id for edit : ";
		cin >> id;
	
		for (int i = 0; i < index; i++) {
			if (bookList[i]->getId() == id) {
				cout << "Enter title";
				cin >> title;
				cout << "Enter auothor Name ";
				cin >> auothorName;
				cout << "Enter price : ";
				cin >> price;
				cout << " Pub : ";
				cin >> y >> m >> d;
				d1.setDate(y, m, d);
				bookList[i]->setBook(title, auothorName, price, d1);
				break;
			}
		}
		break;
	case 2:
		cout << "Enter id for edit  : ";
		cin >> id;

		for (int i = 0; i < index; i++) {
			if (bookList[i]->getId() == id) {
				cout << "Enter title";
				cin >> title;
				cout << "Enter auothor Name ";
				cin >> auothorName;
				cout << "Enter price : ";
				cin >> price;
				cout << "Enter Pub : ";
				cin >> y >> m >> d;
				cout << "Enter Uni name :";
				cin >> UniName;
				cout << "Enter sal vrod : ";
				cin >> salVrod;
				cout << "Enter tech Name : ";
			    cin >> techName;
				d1.setDate(y, m, d);
				bookList[i]->setArticleBook(title, auothorName, d1,UniName,techName,salVrod);
				break;
			}
		}
		break;
	case 3:
		cout << "Enter id for edit  : ";
		cin >> id;

		for (int i = 0; i < index; i++) {
			if (bookList[i]->getId() == id) {
				cout << "Enter title";
				cin >> title;
				cout << "Enter auothor Name ";
				cin >> auothorName;
				cout << "Enter price : ";
				cin >> price;
				cout << " Pub : ";
				cin >> y >> m >> d;
				cout << "Enter file Name : ";
				cin >> fileNsme;
				cout << "Enter file size : ";
				cin >> fileSize;
				cout << "Enter file type : ";
				cin >> fileType;
				d1.setDate(y, m, d);
				bookList[i]->setElecBook(title, auothorName,price, d1, fileNsme,fileSize,fileType);
				break;
			}
		}
		break;
	default:
		break;
	}


}

void AmanatBook(Book** bookList, int index) {

	string title;
	int size;
	cout << "Enter number of book : ";
	cin >> size;
	for (int i = 0; i < size; i++) {
		cout << "Enter title Book : ";
		cin >> title;
		for (int i = 0; i < index; i++) {
			if (bookList[i]->getTitile() == title) {

				bookList[i]->Amanat(title);
			}
		}
	}

}

void ShowAmanat(Book** booklist, int index) {

	for (int i = 0; i < index; i++) {
		booklist[i]->printAmanat();
	}
}

void PastDeliveryDate(Book** booklist, int index) {
	int m, d;
	cout << "Enter day of today : ";
	cin >> d;
	cout << "Eneter month of the year : ";
	cin >> m;

	booklist[index]->CheckAmanat(m, d);
}