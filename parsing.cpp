#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char const *argv[])
{
	fstream fileObject;
	string fileName = "Test.txt";

	fileObject.open(fileName);

	if(fileObject.is_open()){
		
		while(!fileObject.eof()){
			string line;
			long population;
			getline(fileObject, line, '-');
			fileObject >>  population;
			fileObject >> ws;
			cout << line << " : " << population << endl ; 
		}
		fileObject.close();
	}
	else{
		cout << "Error 404" << endl;
	}
	return 0;
}