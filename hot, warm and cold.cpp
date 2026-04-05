#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin>> a;
	if (a > 30 ){
		cout<< "hot";
	} else if (a > 15 and a < 30){
		cout<< "warm";
	} else{
		cout<< "cold";
	}

	return 0;
}
