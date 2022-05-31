#include <iostream>

using namespace std;

constexpr int fac(int n) {
	return n > 1 ? n * fac(n - 1) : 1; // n팩토리얼
}

/*
int main()
{
	int x = 2147483647;
	cout << "x =" << x << endl;

	int someinteger = 256;
	short someshort;
	long somelong;
	float somefloat;
	double somedouble;

	someinteger++; // 257
	someinteger *= 2; //514
	someshort = static_cast<short>(someinteger);//514
	somelong = someshort * 10000;//5140000
	somefloat = somelong + 0.785f;//5140000.785
	somedouble = static_cast<double>(somefloat) / 100000;//51.40000785
	cout << somedouble << endl;

	int firstnum = 0;
	cout << "firstnum : ";
	cin >> firstnum;
	int secondnum = 0;
	cout << "secondnum : ";
	cin >> secondnum;
	cout << "sum : ";
	cout << firstnum + secondnum << endl;

	const int a = 0; //한번 값을 넣으면 변하지 않음
	constexpr int b = fac(4);
	int c = fac(4);
	
}
*/