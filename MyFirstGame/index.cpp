#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "============================================ \n";
	cout << "Simple C++ text game. Made by Ndekere. \n";
	cout << "============================================ \n \n";

	string naim;
	int age;
	cout << "--> Hello. What can I call you?!!" << "\n";
	cout << "[HINT: Type 1 name please. Thanks.]" << "\n \n";
	cin >> naim; 
	cout << "--> Hi " << naim << "! How old are you? :) \n";
	cout << "[HINT: Type in your age as letters...] \n \n";
	cin >> age;
	if (age < 18 ) {
		cout << "--> Oops! This game is NOT meant for persons aged " << age << " Years! \n";
	}
	else {
		cout << "--> You're an adult. Awesome! \n";
		cout << "<----------------- Begin Instructions -------------------> \n \n";
		cout << ">> From now on, you will use 1 or 0 to interact with this game. \n";
		cout << ">> 1 stands for 'Yes' and 0 stands for 'No'. \n";
		cout << ">> I might include some SEX stuff just to spice things up! \n";
		cout << ">> By choosing 0, you won't see the 'dirty' stuff. \n";
		cout << ">> If you're Naughty, well, I think this game will be super-satisfying!! \n";
		cout << ">> All you have to do is to type in that 1! \n";
		cout << "<----------------- End Instructions -------------------> \n \n";
		cout << ">> Are you ready to start? ((^_^)) \n";
		cout << "[HINT: Type in 1 or 0] \n";
		int woow;
		cin >> woow;

		if (woow == 1) {
			cout << "Awesome!! \n";
			cout << "Okay, let's start. Have you had sex recently? \n";
		}else if (woow == 0) {
			cout << "Alright. Practise some basic math then... \n";
			cout << "Enter two numbers to see their multiplications: \n";
			int namba1;
			cout << "Type first number-: \n";
			cin >> namba1;
			int namba2;
			cout << "Type second number-: \n";
			cin >> namba2;
			int ansa = namba1 * namba2;
			cout << "The multiple of " << namba1 << " and " << namba2 << " is " <<ansa << "\n";
			return 0;
		}
		else {
			cout << "Did you read the Instructions? use only 1 and 0, damn-it!! \n";
		}
		int ans;
		cin >> ans;
		if (ans == 1) {
			cout << "Congrats! Was it satisfying? \n";
		}
		else if (ans == 0) {
			cout << "You're letting me down! \n";
		}
		else {
			cout << "Did you read the Instructions? use only 1 and 0, damn-it!! \n";
		}
	}
}