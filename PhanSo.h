#pragma once
#include <iostream>
using namespace std;

class PhanSo
{
private:
	int iTuSo;
	int iMauSo;
public:
	int UCLN(int a, int b);
	void NhapPhanSo();
	void XuatPhanSo();
	int getTuSo();
	int getMauSo();
	int setTuSo(int a);
	int setMauSo(int a);
	PhanSo TongHaiPhanSo(PhanSo a);
	PhanSo TruHaiPhanSo(PhanSo a);
	PhanSo NhanHaiPhanSo(PhanSo a);
	PhanSo ChiaHaiPhanSo(PhanSo a);
	PhanSo();
	PhanSo(int a, int b);
	~PhanSo();
};

