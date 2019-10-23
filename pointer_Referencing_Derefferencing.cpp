#include<iostream>

using namespace std;

int main(int args,const char *argv[]){


	int variableOne = 5, variableTwo = 10 ;
	int *pointerOne = &variableOne, *pointerTwo = &variableTwo ;

	cout<<"Addresas of VariableOne "<< &variableOne<<endl;
	cout<<"Addresas of VariableTwo "<< &variableTwo<<endl;
	cout<<"Pointer to variableOne :"<< pointerOne << *pointerOne <<endl;

	pointerOne = &variableTwo ;
	cout<<"Pointer to variableTwo :"<< pointerOne << *pointerOne <<endl; 
	return 0;
}