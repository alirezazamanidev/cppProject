#include <iostream>
#include <string> 
#include "book.h"
#include  "elecbook.h"
#include "article.h"
using namespace std;
int CreateBook(Book**, int);
void ShowBook(Book**,int);
void SearchBook(Book**, int);
int DeleteBook(Book**, int);
void EditBook(Book**, int);
void AmanatBook(Book**,int);
void ShowAmanat(Book**,int);
void PastDeliveryDate(Book**, int);
int main() {

	int size;

	Book** bookList;

	cout << "Enter max number of Books : " << endl;
	cin >> size;
	bookList = new Book*[size];

	int index = 0;
	int status = 0;

	while (true)
	{
		cout << " ************** Menu libray *************" << endl << endl;

		cout << " 1 - Insert Book " << endl<<endl;
		cout << " 2 - Remove Book " << endl << endl;
		cout << " 3 - Search Book " << endl << endl;
		cout << " 4 - Edit Book " << endl << endl;
		cout << " 5 - Show Book " << endl << endl;
		cout << " 6 - Amanat Book " << endl << endl;
		cout << " 7 - Show Amanat Book " << endl << endl;
		cout << " 8 - Show Past delivery date book" << endl << endl;
		cout << " 0 -  Exit " << endl << endl;
		int choise;
		cout << "Enter your Choise : ";
		cin >> choise;
		switch (choise) {
		case 1:
			// insert book
			cout << "***************** Insert Book **********************" << endl;
			status = CreateBook(bookList, index);
			if (status == 1) index++;
			break;
		case 2:
			cout << "***************** delete Book **********************" << endl;
			status = DeleteBook(bookList, index);
			if (status == 1) index--;
			break;
		case 3:
			cout << "***************** Search Book **********************" << endl;
			SearchBook(bookList, index);
			break;
		case 4:
			cout << "***************** edit book **********************" << endl;
			EditBook(bookList,index);
		case 5:
			cout << " ************************ Show Books ************************ " << endl;
			ShowBook(bookList, index);
			break;
		case 6:
			cout << " ******************** Amanat book **************************** " << endl;
			AmanatBook(bookList, index);
			break;
		case 7:
			cout << " *********************** Show Amanat **************************" << endl;
			ShowAmanat(bookList, index);
			break;
		case 8:
			PastDeliveryDate(bookList, index);
		default:
			break;
		}


		if (choise == 0) break;

	}

	delete[]bookList;
	system("pause");
	return 0;
}