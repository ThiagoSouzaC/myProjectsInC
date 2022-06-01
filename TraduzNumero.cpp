#include <iostream>
#include <string>

using namespace std;

int traduzNumero(string num, string num2) {
	for(int i=0;i< num.length(); i++) {
		num2 = num.at(i);
		if(num2 == "a" || num2 == "b" || num2 == "c") {
			cout << 2;
		}else if(num2 == "d" || num2 == "e" || num2 == "f") {
			cout << 3;
		}else if(num2 == "g" || num2 == "h" || num2 == "i") {
			cout << 4;
		}else if(num2 == "j" || num2 == "k" || num2 == "l") {
			cout << 5;
		}else if(num2 == "m" || num2 == "n" || num2 == "o") {
			cout << 6;
		}else if(num2 == "p" || num2 == "q" || num2 == "r" || num2 == "s") {
			cout << 7;
		}else if(num2 == "t" || num2 == "u" || num2 == "v") {
			cout << 8;
		}else if(num2 == "w" || num2 == "x" || num2 == "y" || num2 == "z") {
			cout << 9;
		}
       // cout << "Carater na posição [" << i << "] -> " << num2 << endl;
	}
	
	//cout << num;
}


int main() {
	string num ("pipoca");
	string num2;
	traduzNumero(num, num2);
}
