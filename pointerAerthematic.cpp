#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	
	char c='C';
	char d='D';
	char e='E';
	char f='F';
	char s[4]={c,d,e,f};
	char * pointer = &s[0];
/*	
	cout<<"Address \t"<< (void *)pointer <<"\t Value\t " << *pointer<<endl;
	pointer++;
	cout<<"Address \t"<< (void *)pointer <<"\t Value\t " << *pointer<<endl;

	pointer++;
	cout<<"Address \t"<< (void *)pointer <<"\t Value\t " << *pointer<<endl;
*/
	//pointer = &s;
	for(int i=0;i<4;++i,++pointer)
	cout<<"Address \t"<< (void *)pointer <<"\t Value\t " << *pointer<<endl;

	return 0;
}