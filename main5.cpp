
/*
#include <iostream>
#include <bitset> // bitset 이라는 기능을 추가한 것

using namespace std;

int main()
{
	{
		int a = 10;
		int b = 0;
		//b = a++; //b는 10, a= 11;
		//b = ++a; //b = 11, a= 11;
		//b = a--; //b= 10 , a= 9 ;
		b = --a; // b = 9 , a = 9;
		cout << "a = " << a << " b = " << b << endl;
	}
	{
		int a = 10;
		int b = -5;
		bool result = false; // bool 형태의 result라는 컵을 만드는 것
		result = (a > b) ? true : false; // true false 1이나 0 처럼 숫자를 넣을 수 있다.
		result = (a == b) ? true : false;
		result = (a > 0 && b > 0) ? true : false; // 논리곱에 대한 연산자. 양쪽 표현식이 모두 true 여야 전체 결과가 true.
		result = (a > 0 || b > 0) ? true : false; // 논리합에 대한 연산자. 양쪽 표현식 중 어느 하나만 true 면 true. // b = -5 앞부터 false기 때문
		result = (a < 0 && --b > 0) ? true : false; //
		result = !(a > 0) ? true : false;
		cout << "result = " << boolalpha << result << noboolalpha << " b = " << b << endl; // true false 로 표기하고 싶을 때 boolalpha
	}

	{
		int num = 10; // num이라는 컵을 만든 것
		cout << bitset<32>(num) << endl; // & = 비트 단위 AND 연산. | < - ( \ + shift) = 비트 단위 Or 연산
		cout << "2진수 표기 : " << bitset<32>(num) << endl;
		cout << "8진수 표기 : " << oct << num << endl;
		cout << "10진수 표기 : " << dec << num << endl;
		cout << "16진수 표기 : " << hex << num << dec << endl; // dec10진수로 복귀 시켜주는 것이 좋음

		int x = 0x35;
		int y = 0xf0;
		cout << "x = " << bitset<8>(x) << endl;
		cout << "y = " << bitset<8>(y) << endl;
		cout << "x & y = " << bitset<8>(x & y) << endl;
		cout << "x | y = " << bitset<8>(x | y) << endl;
		cout << "x ^ y = " << bitset<8>(x ^ y) << endl; //논리합
		cout << "~x = " << bitset<8>(~x ) << endl;

		int x1 = x << 2; ///x 2단계 왼쪽으로 밀어서
		cout << "x = " << bitset<8>(x) << endl;
		cout << "x1 = " << bitset<8>(x1) << endl;

		char cX = 0b10010100; // 오른쪽으로 밀었을 때 맨 앞의 숫자가 복사가 됨
		cout << "cX = " << bitset<8>(cX) << endl;
		cX = cX >> 2;
		cout << "cX = " << bitset<8>(cX) << endl;
	}

	{
		//형변환(묵시적)
		//형태가 다른 그릇들
		int intvar = 7;
		double doublevar = 1.5;
		float floatvar = 3.7f;

		intvar = doublevar;
		floatvar = intvar;
		//연산자는 우선순위 순으로.
		//자료형 우선 순위 - 사이즈가 크고, 실수인 형태가 우선 
		//char -> int -> long -> float -> double -> long double 
		intvar = doublevar + intvar * floatvar; // 자료형에도 우선순위가 있음.
		//                         float
		//       doublevar + (intvar * floatvar)
		//              double
		//intvar = (doublevar + (intvar * floatvar))
		//        int


		//static_cast : 실행 중에 형 검사를 하지 않으며, 컴파일 할 때 수식에 지정된 그대로 변환함
		//dynamic_cast : 기초 클래스와 파생 클래스 간의 포인터 또는 참조 형 변환이 프로그램 실행 중에 일어나도록 지시함
		//reinterpret_cast : 포인터를 다름 자료형의 포인터나 정수 자료형으로, 또는 그 역으로 변환함
		//const_cast : const 지정을 일시 해제함

		double d = 10.5;
		int a = static_cast<int>(d); //명시적
		int a = d;
	
	}

}
*/