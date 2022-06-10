/*
#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main()
{ 
	
	int myArray[5] = { 0 }; // 5개의 Array 생성
	myArray[0] = 1;
	myArray[1] = 2;
	myArray[2] = 3;
	myArray[3] = 4;
	myArray[4] = 5;
	//myArray[5] <- 0부터 시작을 해서 5개 생성했으므로 없다.

	int myArray[] = { 1,2,3,4 }; // Array 4개 자동으로 생성
	int myArray[]{ 1,2,3,4 };
	int myArray[5] = { 1,2,3 }; // 나머지 4,5는 0으로 초기화

	int myArray2[2][4] = { {1,2,3,4}, {5,6,7,8} };
	//  1  2  3  4
	//  5  6  7  8

	array<int, 3> arr = { 1,2,3 }; //3개라는 공간을 만들어 사용하는 것.
	int arraySize = arr.size();
	arr[0] = 1;

	auto [a1, a2, a3] = arr; //자동으로 형변환.

	vector<int> myVector = { 11, 22 };
	myVector.push_back(33);
	myVector.push_back(44);
	

	//myVector 에 모든 값을 더한 값을 출력해보자
	{
		vector<int> myVector = { 11, 22, 33 };

		int vectorSize = myVector.size();
		cout << "VectorSize = " << vectorSize << endl;
		int sum = 0;

		//for (int i : myVector)
		//for (auto iter = myVector.begin(); iter < myVector. end(); iter++)
		for (int i = 0; i < myVector.size(); ++i)
		{

			sum += myVector[i]; // i ? 0, 1, 2
		}
		cout << "sum = " << sum << endl;
		//<---

		int myArray[3] = { 11, 22, 33 };
		//myArray에 모든 값에 1씩 더해보자 11, 22, 33 -> (12, 23, 34)
		for (int& i : myArray)
		{
			i++;
		}

		for (int i : myArray)
		{
			cout << "myArray[" << i << "] = " << i << endl;
		}
	}

	{
		vector<int> myVector = { 11, 22, 33 };

		int vectorSize = myVector.size();
		cout << "VectorSize = " << vectorSize << endl;
		int sum = 0;
		int i = 0;
		while (i < 3 )
		{
			sum += myVector[i];
			i++;
		}
		
		sum  = 0; // 선언을 했기 때문에 int생성필요 없음
		i = 0;
		do {
			sum += myVector[i];
			i++;

		}while(	i > 3)
	}
	
	{
		int selection = 0;
	
			do {
				system("cls");
				cout << "what do you like? : \n";
				cout << "1) Red\n";
				cout << "2) Blue\n";
				cout << "3) Black\n";
				cout << "4) Whire\n";
				cin >> selection;
			} while (4 < selection || selection < 1);

			cout << "You like "  << selection << endl;
	}
	

	{
		do {

			system("cls");
			int a, b = { 0 };
			cout << "put number [A B] : \n";
			cin >> a >> b;

			cout << "A + B = " << a + b << endl; 
			cout << "Quit? (Y/N) : ";
			char q = ' ';
			cin >> q;
			if (q == 'Y')
			{
				break;
			}
			
		} while (1);

		

	}

}*/