#include<bits/stdc++.h>
using namespace std;

int main(){
	float number1;
	float number2;
	string a;
	cin>> number1;
	cin>> a;
	cin>> number2;
	if (a == "+"){
		cout<< number1 + number2;
	} if (a =="-"){
		cout<< number1 - number2;
	} if (a == "*"){
		cout<< number1 * number2;
	} if (a == "/"){
		cout<< number1 / number2;
	}
	
	
		
	return 0;
}
