#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char const *argv[])
{
	fstream outputFile;

	string fileName = "Test.txt";

	/*if(outputFile.open(fileName)){
	
	}
	else{
		cout<< "Unable to access " << fileName << endl;
	}*/

	outputFile.open(fileName,ios::out);
	/*
	app = Append mode. All output to that file to be appended to the end.
	ate = Open a file for output and move the read/write control to the end of the file.
	in = Open a file for reading.
	out = Open a file for writing. It overwrites all exesting data.
	trnc = If the file already exists, its contents will be truncated before opening the file.
	*/
	if (outputFile.is_open())
	{
		string input;
		cout << "Enter the content you want to add to the file" <<endl;
		getline(cin,input);
		outputFile << input << endl;
		outputFile.close();
	}
	else{
		cout << "Can not open the desired file " << endl;
	}

	return 0;
}