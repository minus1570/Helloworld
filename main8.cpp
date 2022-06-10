/*#include <iostream>

using namespace std;

int main() 
{
	int score = (0);
	cin >> score;

	// 100~90 : A
	// 90~80 : B
	// 80~70 : C
	// 70~60 : D
	// 60~50 : E
	// 나머지 점수는 : F
	
	if (score >= 90)
	{
		cout << "A" << endl;
	}
	else if (90 > score && score >= 80)
	{
		cout << "B" << endl;
	}
	else if (80 > score && score >= 70)
	{
		cout << "C" << endl;
	}
	else if (70 > score && score >= 60)
	{
		cout << "D" << endl;
	else if (60 > score && score >= 50)
	{
		cout << "E" << endl;
	}
	else
	{
		cout << "F" << endl;
	}
*/
/*
score /= 10;

switch (score)
{
case 10:
	[[fallthrough]];
case 9:
	cout << "A" << endl;
	break;
case 8:
	cout << "B" << endl;
	break;
case 7:
	cout << "C" << endl;
	break;
case 6:
	cout << "D" << endl;
	break;
case 5:
	cout << "E" << endl;
	break;
default:
	cout << "F" << endl;
	break;

} 
	int a, b = { 0 };
	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;

	bool result = (a - b > 0);
	//cout << boolalpha << (a - b > 0) << noboolalpha << endl; //1 번째

	switch (result)
	{
	case true:
		cout << "true" << endl;
		break;
	default:
		cout << "false" << endl;
		break;
	}

	int a, b, c = { 0 };
	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;
	cout << "C is ?";
	cin >> c;

	bool result = (a + b > c);
	switch (result)
	{
	case true:
		cout << a + b << endl;
		break;
	default:
		cout << c << endl;
		break;
	}
	
	int a = { 0 };
	cout << "숫자 하나를 입력? " << endl;
	cin >> a;
	switch (a)
	{
	case 1:
	    cout << "red" << endl;
		break;
	case 2:
		cout << "blue" << endl;
		break;
	case 3:
		cout << "black" << endl;
		break;
	case 4:
		cout << "white" << endl;
		break;
	}
	
{
int a = { 0 };
cout << "주민번호 뒤에 7자리를 입력? " << endl;
cin >> a;

a /= 1000000;
switch (a)
{
case 1:
	__fallthrough;
case 3:
	cout << "남자" << endl;
	break;

case 2:
	__fallthrough;
case4:
	cout << "여자" << endl;
	break;

default:
	cout << "외계인" << endl;
	break;
}


}
*/