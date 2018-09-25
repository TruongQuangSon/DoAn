#include "pch.h"
#include "NgaySinh.h"

void NgaySinh::input()
{
	cout << "Enter birthday: " << endl;
	cin >> this->date >> this->month >> this->year;
}

void NgaySinh::output()
{
	cout << this->date << "/" << this->month << "/" << this->year;
}
