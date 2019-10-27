#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char const *argv[])
{
	string data, fileName = "Test.txt";
	getline(cin,data);

	ofstream outputFile;

	/*
	While using ifstream the default opening mode is write only
	*/

	outputFile.open(fileName);

	if (outputFile.is_open())
	{
		outputFile << data << endl;
		outputFile.close();
	}
	else
	{
		cout << "Error : 404 \nFile not found " << endl;
	}
	return 0;
}