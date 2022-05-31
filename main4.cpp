#include <iostream>
#include "Employeestruct.h"
using namespace std;

enum piecetype1 {
	piecetypeking = 1, 
	piecetypequeen, 
	piecetyperook = 10, 
	piecetypepawn 
};

enum class piecetype : unsigned long {
	king = 1,
	queen,
	rook = 10,
	pawn
};

int main()
{
	piecetype1 mypiece = piecetyperook;
	int a = mypiece;

	piecetype mypiece2 = piecetype::king;
	//int b = mypiece2; // Enum Class는 타입을 변경할 수 없다.

	//직원 레코드 생성 및 값 채우기
	Employee anEmployee;
	anEmployee.firstinitial = 'M';
	anEmployee.lastinitial = 'G';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;
	//직원 레코드에 저장된 값 출력하기
	cout << "Employee: " << anEmployee.firstinitial <<
		anEmployee.lastinitial << endl;
	cout << "Number: " << anEmployee.employeeNumber << endl;
	cout << "salary: $" << anEmployee.salary << endl;
	return 0;
}