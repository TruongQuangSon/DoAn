#include "pch.h"
#include "NhanVien.h"
#include <string>

void NhanVien::input()
{
	NgaySinh::input();
	cin.ignore();
	cout << "Enter ma nhan vien: " << endl;
	getline(cin, this->MaNV);
	cout << "Enter name: " << endl;
	getline(cin, this->name);
	int choose;
	do
	{
		cout << "1.Nam" << endl;
		cout << "2.Nu" << endl;
		cout << "Enter your gender: ";
		cin >> choose;
	} while (choose<1 || choose>2);
	if (choose == 1) 
		this->gender = "Nam"; 
	else 
		this->gender = "Nu";
	cin.ignore();
	cout << "Enter don vi: " << endl;
	getline(cin, this->donVi);
	cout << "Enter chuc vu: " << endl;
	getline(cin, this->chucVu);
	cout << "Enter he so luong: " << endl;
	cin >> this->heSoLuong;
	this->salary = this->heSoLuong * 850;
	if (this->chucVu == "GD" || this->chucVu == "PGD") this->phuCap = this->salary*0.4;
	else if (this->chucVu == "TP" || this->chucVu == "PP") this->phuCap = this->salary*0.25;
	else this->phuCap = 0;
}

void NhanVien::output()
{
	cout << "Name: " << this->name<<endl;
	cout << "Birth: "; NgaySinh::output();
	cout << "\nGender: " << this->gender << endl;
	cout << "Don vi: " << this->donVi << endl;
	cout << "Chuc vu: " << this->chucVu << endl;
	cout << "He so luong: " << this->heSoLuong << endl;
	cout << "Salary: " << this->salary << endl;
	cout << "Phu cap: " << this->phuCap << endl;
	cout << "Thuc linh: " << NhanVien::TL() << endl;
}

double NhanVien::TL()
{
	return this->salary+this->phuCap;
}

string NhanVien::getDonVi()
{
	return donVi;
}

string NhanVien::getGender()
{
	return gender;
}
