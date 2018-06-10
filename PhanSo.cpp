#include "PhanSo.h"



PhanSo::PhanSo()
{
	iTuSo = 0;
	iMauSo = 1;
}

PhanSo::PhanSo(int a, int b)
{
	iTuSo = a;
	iMauSo = b;
}


PhanSo::~PhanSo()
{
}

int PhanSo::UCLN(int a, int b)
{
	while (abs(a) != abs(b))
	{
		if (abs(a) < abs(b))
			b = abs(b) - abs(a);
		else
			a = abs(a) - abs(b);
	}
	return abs(a);
}

void PhanSo::NhapPhanSo()
{
	cout << "Nhap Tu So: ";
	cin >> iTuSo;

	cout << "Nhap Mau So:";
	cin >> iMauSo;

	while (iMauSo == 0)
		{
			cout << "Nhap Sai. Vui Long Nhap Lai." << endl;
			cout << "Nhap Mau So:";
			cin >> iMauSo;
		}
	
}

void PhanSo::XuatPhanSo()
{
	cout << "Phan So Cuoi Cung La: " << iTuSo / UCLN(iTuSo, iMauSo) << "/" << iMauSo / UCLN(iTuSo, iMauSo) << endl;
}


int PhanSo::getTuSo()
{
	return iTuSo;
}

int PhanSo::getMauSo()
{
	return iMauSo;
}

int PhanSo::setTuSo(int a)
{
	iTuSo = a;
	return iTuSo;
}

int PhanSo::setMauSo(int a)
{
	iMauSo = a;
	return iMauSo;
}

PhanSo PhanSo::TongHaiPhanSo(PhanSo a)
{
	PhanSo b;
	
		b.iTuSo = iTuSo * a.iMauSo + a.iTuSo * iMauSo;
		b.iMauSo = iMauSo * a.iMauSo;

	return b;
}

PhanSo PhanSo::TruHaiPhanSo(PhanSo a)
{
	PhanSo b;

	b.iTuSo = iTuSo * a.iMauSo - a.iTuSo * iMauSo;
	b.iMauSo = iMauSo * a.iMauSo;

	return b;
}

PhanSo PhanSo::NhanHaiPhanSo(PhanSo a)
{
	PhanSo b;
	
	b.iTuSo = iTuSo * a.iTuSo;
	b.iMauSo = iMauSo * a.iMauSo;

	return b;
}

PhanSo PhanSo::ChiaHaiPhanSo(PhanSo a)
{
	PhanSo b;

	b.iTuSo = iTuSo * a.iMauSo;
	b.iMauSo = iMauSo * a.iTuSo;

	return b;
}
