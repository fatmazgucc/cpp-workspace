#include <iostream>

using namespace std;
int main()
{

int *ptr {nullptr};
ptr = new int;
cout<<ptr<<endl; //adress
cout<<*ptr<<endl; //garbage
*ptr = 100;
cout<< *ptr<<endl; //100
	return 0;
}
