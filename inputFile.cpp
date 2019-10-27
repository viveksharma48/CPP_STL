#include<iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
	try{
	ifstream inputObject;
	string fileName = "Test.txt";

	inputObject.open(fileName);

	if(inputObject.is_open()){
		
		string line;
		while(!inputObject.eof()){
		getline(inputObject , line);
		//inputObject >> line;
		cout << line << endl;
		}
		
		inputObject.close();
	}
	else{
		throw "File Not found";
	}
	}
	catch (char *e){
		cout<< "Error 404 :" << endl << e << endl ;
	}

	return 0;
}