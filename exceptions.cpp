#include<iostream>

using namespace std; 

void divison (int firstDigit, int secondDigit){
	if(!secondDigit){
		throw "Zero";	
		//throw is a syntax for throwing coustom errors
	}
	if(!firstDigit){
		throw 0;
	}

	//this code will only be executed when no exceptions accour
	cout << (firstDigit/secondDigit) ;
}

void multiplication(int firstDigit, int secondDigit ){
	if(!firstDigit || !secondDigit )
		throw string("Are YOU NUTS!!\n Who the fuck multiplies any number with zero ?");
	//this code will not be executed on accourance of any exception

	cout << (firstDigit * secondDigit);
}
int main(int argc, char const *argv[])
{
	int firstNumber,secondNumber;

	cout << "Enter two numbers for divison and multiplication :" << endl;
	cin >> firstNumber >> secondNumber;

	//TRY block catches those coustom errors
	try{
	divison(firstNumber,secondNumber);
	}
	//catch block handles those coustom errors but only of type they are specified to handle
	catch (int e){	
		cout << " The answer will always remain \n" << e << "\nYou dumbass.\nEnter another pair of numbers " << endl;

	}
	catch (const char *e){
		cout << "Are you Illitrate ? \nHow can you divide a number by "<< e <<" and still call your self litrate ?" << endl ;
	}

	try{
		multiplication(firstNumber,secondNumber);
	}
	//this catch block is handeling an object type exception
	catch (string &e){
		cout<< e <<endl;
	}
	return 0;
}