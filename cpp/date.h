#pragma once
#ifndef date_h
#define date_h

class Date {

private:
	int year, month, day;
public:
    Date(int=1340, int=1, int=1);
	void setDate(int, int, int);
	void print();
};


#endif // !date_h
