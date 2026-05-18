#include "main.hpp"

int main()
{
	const int SIZE = 10;
	int usernum;
	vector<int> number(SIZE);

	srand(time(NULL));

	makeVector(number);
	printVector(number); 

	usernum = getInput();
	insertVector(number, usernum);
	printVector(number);

	usernum = getInput();
	printVector(number);
	int cnt = deleteVector(number, usernum);
	cout << "The deleted element is " << cnt << endl;
	printVector(number);
}