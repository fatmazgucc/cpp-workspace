#include <iostream>
using namespace std;
int main()
{
	int *int_ptr {nullptr};
    int_ptr = new int;
    cout << int_ptr<<endl; // addres;
    delete int_ptr; // to deallocate
    
    size_t size{0};
    double *temp_ptr{nullptr};
    
    cout << "How many temps?";
    cin >> size;
    
    
    temp_ptr = new double[size]; // allocate array
    
    cout << temp_ptr << endl; // addres
    
    delete [] temp_ptr; //deallocate
    
    
	return 0;
}
