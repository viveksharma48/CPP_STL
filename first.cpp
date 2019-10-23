#include<iostream>
#include<vector>
using namespace  std;
int main(int argc, char const *argv[])
{
	int j;
	char choice='y';
	vector<int> vec;
	while(choice!='n'){
		cin>>j;
		vec.push_back(j);
		cout<<" Wnat to enter more ";
		cin>>choice;
	}
	for(int i=0;i<vec.size();++i){
		cout<<vec[i]<<"\t";
	}

	return 0;
	
}