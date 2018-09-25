#pragma once
#include "NgaySinh.h"
class NhanVien: public NgaySinh
{
	private:
		string MaNV;
		string name;
		//string gender;
		string chucVu;
		//string donVi;
		int heSoLuong;
		int salary;
		double phuCap;
	public:
		string gender;
		string donVi;
		void input();
		void output();
		double TL();
		string getDonVi();
		string getGender();
};

