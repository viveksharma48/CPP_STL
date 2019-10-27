#include<iostream>

using namespace std;

/*
Pragma push is used to optimise the size of given class
*/
					 #pragma pack(push,1)

class empty{
public :
char jabba;
long tesu;

/*
cusntroctor is used to throw bad_alloc exception
*/
empty()
{
char *j = new char[999999999999999999999];

delete[] j;

//return true;
}
	
};
					#pragma pop()
/*
Pragma pop is used to end the pack block
*/

int main(int argc, char const *argv[])
{
	try{
	empty non;
	}
	/*
	catching bad_alloc exception by refference in e
	*/
	catch (bad_alloc &e){
		cout<<"Cougt something!!" << e.what() << endl;
	}

	
	return 0;
}