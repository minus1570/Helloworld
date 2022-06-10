
/*
#include <iostream>
#include <bitset> // bitset �̶�� ����� �߰��� ��

using namespace std;

int main()
{
	{
		int a = 10;
		int b = 0;
		//b = a++; //b�� 10, a= 11;
		//b = ++a; //b = 11, a= 11;
		//b = a--; //b= 10 , a= 9 ;
		b = --a; // b = 9 , a = 9;
		cout << "a = " << a << " b = " << b << endl;
	}
	{
		int a = 10;
		int b = -5;
		bool result = false; // bool ������ result��� ���� ����� ��
		result = (a > b) ? true : false; // true false 1�̳� 0 ó�� ���ڸ� ���� �� �ִ�.
		result = (a == b) ? true : false;
		result = (a > 0 && b > 0) ? true : false; // ������ ���� ������. ���� ǥ������ ��� true ���� ��ü ����� true.
		result = (a > 0 || b > 0) ? true : false; // ���տ� ���� ������. ���� ǥ���� �� ��� �ϳ��� true �� true. // b = -5 �պ��� false�� ����
		result = (a < 0 && --b > 0) ? true : false; //
		result = !(a > 0) ? true : false;
		cout << "result = " << boolalpha << result << noboolalpha << " b = " << b << endl; // true false �� ǥ���ϰ� ���� �� boolalpha
	}

	{
		int num = 10; // num�̶�� ���� ���� ��
		cout << bitset<32>(num) << endl; // & = ��Ʈ ���� AND ����. | < - ( \ + shift) = ��Ʈ ���� Or ����
		cout << "2���� ǥ�� : " << bitset<32>(num) << endl;
		cout << "8���� ǥ�� : " << oct << num << endl;
		cout << "10���� ǥ�� : " << dec << num << endl;
		cout << "16���� ǥ�� : " << hex << num << dec << endl; // dec10������ ���� �����ִ� ���� ����

		int x = 0x35;
		int y = 0xf0;
		cout << "x = " << bitset<8>(x) << endl;
		cout << "y = " << bitset<8>(y) << endl;
		cout << "x & y = " << bitset<8>(x & y) << endl;
		cout << "x | y = " << bitset<8>(x | y) << endl;
		cout << "x ^ y = " << bitset<8>(x ^ y) << endl; //����
		cout << "~x = " << bitset<8>(~x ) << endl;

		int x1 = x << 2; ///x 2�ܰ� �������� �о
		cout << "x = " << bitset<8>(x) << endl;
		cout << "x1 = " << bitset<8>(x1) << endl;

		char cX = 0b10010100; // ���������� �о��� �� �� ���� ���ڰ� ���簡 ��
		cout << "cX = " << bitset<8>(cX) << endl;
		cX = cX >> 2;
		cout << "cX = " << bitset<8>(cX) << endl;
	}

	{
		//����ȯ(������)
		//���°� �ٸ� �׸���
		int intvar = 7;
		double doublevar = 1.5;
		float floatvar = 3.7f;

		intvar = doublevar;
		floatvar = intvar;
		//�����ڴ� �켱���� ������.
		//�ڷ��� �켱 ���� - ����� ũ��, �Ǽ��� ���°� �켱 
		//char -> int -> long -> float -> double -> long double 
		intvar = doublevar + intvar * floatvar; // �ڷ������� �켱������ ����.
		//                         float
		//       doublevar + (intvar * floatvar)
		//              double
		//intvar = (doublevar + (intvar * floatvar))
		//        int


		//static_cast : ���� �߿� �� �˻縦 ���� ������, ������ �� �� ���Ŀ� ������ �״�� ��ȯ��
		//dynamic_cast : ���� Ŭ������ �Ļ� Ŭ���� ���� ������ �Ǵ� ���� �� ��ȯ�� ���α׷� ���� �߿� �Ͼ���� ������
		//reinterpret_cast : �����͸� �ٸ� �ڷ����� �����ͳ� ���� �ڷ�������, �Ǵ� �� ������ ��ȯ��
		//const_cast : const ������ �Ͻ� ������

		double d = 10.5;
		int a = static_cast<int>(d); //�����
		int a = d;
	
	}

}
*/