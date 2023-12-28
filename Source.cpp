#include <iostream>
using namespace std;
int VvestiA() {
	int nomer1;
	cout << "Enter the natural number A: ";
	cin >> nomer1;
	return nomer1;
}
int VvestiB() {
	int nomer2;
	cout << "Enter the natural number B: ";
	cin >> nomer2;
	return nomer2;
}
int sum(int x, int y) {
	return x + y;
}
int dif(int x, int y) {
	return x - y;
}
int main()
{
	cout << "Enter 1 to enter the first number" << endl << "Enter 2 to enter the second number" << endl << "Enter 3 if you want to perform an addition operation  A and B" << endl << "Enter 4 if you want to perform a subtraction operation A and B" << endl << "Enter 0 to exit the program" << endl;
	int x = 0;
	int No1 = 0;
	int No2 = 0;
	do {
		cin >> x;
		if (x == 1) {
			No1 = VvestiA();
		}
		if (x == 2) {
			No2 = VvestiB();
		}
		switch (x)
		{
		case 1:
			continue;
		case 2:
			continue;
		case 3:
			cout << "the sum of A and B: " << sum(No1, No2) << endl;
			continue;
		case 4:
			cout << "the difference between A and B " << dif(No1, No2) << endl;
			continue;
		case 0:
			return 0;
			break;
		default:
			cout << "Wrong choice" << endl;
			return 0;
		}
	} while (x < 5 or x>0);
	return 0;
}

