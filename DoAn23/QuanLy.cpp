#include "pch.h"
#include "QuanLy.h"
#include "NhanVien.h"
#include <string>
void QuanLy::nhapds()
{
	NhanVien* nv = new NhanVien();
	nv->input();
	dsNhanVien.push_back(nv);
}

void QuanLy::inds()
{
	for (int i = 0; i < dsNhanVien.size(); i++)
	{
		dsNhanVien[i]->output();
	}
}

void QuanLy::lietKeDonVi()
{
	dsDonVi.push_back(dsNhanVien[0]->donVi);
	for (int i = 1; i < dsNhanVien.size(); i++)
	{
		int dem = 0;
		for (int j = 0; j < dsDonVi.size(); j++)
		{
			if (dsNhanVien[i]->donVi == dsDonVi[j]) dem += 1;
		}
		if (dem == 0) dsDonVi.push_back(dsNhanVien[i]->donVi);
	}
}

void QuanLy::bang()
{
	QuanLy::lietKeDonVi();
	for (int i = 0; i < dsDonVi.size(); i++)
	{
		int tongNam = 0;
		int tongNu = 0;
		double tongTL=0;
		for (int j = 0; j < dsNhanVien.size(); j++)
		{
			if (dsNhanVien[j]->donVi == dsDonVi[i])
			{
				if (dsNhanVien[j]->gender == "Nam") tongNam += 1; else tongNu += 1;
				tongTL += dsNhanVien[j]->TL();
			}

		}
		cout<<"\n  " << dsDonVi[i];
		cout << "\t     " << tongNam << "\t\t\t" << tongNu << "\t"<<tongTL;
	}
}

void QuanLy::xoa()
{
	time_t now = time(NULL);
	tm t;
	localtime_s(&t, &now);
	for (int i = 0; i < dsNhanVien.size(); i++)
	{
		if (((t.tm_year + 1900) - dsNhanVien[i]->year) > 50)
		{
			//delete dsNhanVien[i];
			dsNhanVien.erase(dsNhanVien.begin() + i);
		}
		
	}
}

