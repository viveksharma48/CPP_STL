#include<iostream>


using namespace std;

#pragma pack (push , 1)
class temp{
public:
int golo;
long int gobble;
char name;
int value;
char jumbo;
temp(){
cout<<"Long Integer variable\t"<<sizeof(gobble)<<"\taddress\t"<<&gobble<<endl;
}};
#pragma pop ()


int main(int args,const char *argv[])
{
int integer =5;
char character='s';
cout<<"Integer variable\t"<<sizeof(integer)<<"\taddress\t"<<&integer<<endl;
cout<<"Character variable\t"<<sizeof(character)<<"\taddress\t"<<(int *)&character<<endl;
temp asus;
cout<<"Class variable\t\t"<<sizeof(asus)<<"\taddress\t"<<&asus<<endl;
return 0;
}
