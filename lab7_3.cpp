#include<iostream>
using namespace std;

char before(char x){
	if(x == 65){
		return 90;
	}else if(x>90 && x<65){
		return 48;
	}else if(x>65 && x<=90){
		return x-1;
	}else {
		return 48;
	}
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
