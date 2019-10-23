#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int number[4] = {1,2,3,4};

	int *pointerOne = &number[0];
	int *pointerTwo = &number[3];

	cout<<"While loop after this " << endl;

	while( pointerOne != ( pointerTwo + 1 )){
		cout<< "Address \t" << (void *)pointerOne <<" \tValue\t " << *pointerOne << endl;
		++pointerOne;
	}


	return 0;
}