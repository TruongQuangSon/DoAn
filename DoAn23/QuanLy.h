#pragma once
#include <vector>
#include "NhanVien.h"
#include <ctime>
class QuanLy: public NhanVien
{
	private:
		vector<NhanVien*> dsNhanVien;
		vector<string> dsDonVi;
		int nhanVienNam;
		int nhanVienNu;
	public:
		void nhapds();
		void inds();
		void lietKeDonVi();
		void bang();
		void xoa();
};

