#include <iostream>
using namespace std;

int main(){
	int a = 4, b =2, hasil;
	
	hasil = a & b;
	cout << "a & b = " << hasil << endl;
	
	hasil = a | b;
	cout << "a | b = " << hasil << endl;
	
	hasil = a ^ b;
	cout << "a ^ b = " << hasil << endl;
	
	hasil = ~a;
	cout << "~a = " << hasil << endl;
	
	hasil = a << 1;
	cout << "a << 1 = " << hasil << endl;
	
	hasil = a >> 1;
	cout << "a >> 1 = " << hasil << endl;
	
}