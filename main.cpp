#include <iostream>

using namespace std;

int main() {
	double first;
	double second;
	char operator_;
	string answer;
	bool the_switch = true;

	while (the_switch) {
		cout << "Please Enter The First Number >> ";
		cin >> first;

		cout << "Please Enter The Second Number >> ";
		cin >> second;
		jump:
		cout << "Please Enter The Operator EX :* or + or / or -  >> ";
		cin >> operator_;

		if (operator_ == '+') {
			cout << first + second << '\n';
		}
		else if (operator_ == '-') {
			cout << first - second << '\n';
		}
		else if (operator_ == '*') {
			cout << first * second << '\n';
		}
		else if (operator_ == '/') {
			cout << first / second << '\n';
		}
		else
		{
			printf("Enter A Valid Operator\n");
			goto jump;
		}

		if (the_switch == true) {
			cout << "Do You Want To Continue? Yes Or No >> ";
			cin >> answer;
			if (answer == "no" or answer == "No" or answer == "n" or answer == "N") {
				break;
			}
		}
	}
}


















/*
int main()
{
	double fir;//makes a double unintialized variable
	double sec;//makes a double unintialized variable
	char s;
	string w;
	bool t = true;

	while (true) {//we make a while loop to loop through the program so it wont stop unless we say stop

		if (t == false) {// we make it check if the t bool is true or false if its false then it will break the while loop
			break;
		}

		printf("OPERATORS: *, /, +, -\n");
		printf("Please enter a number\n");//prints to the console
		cin >> fir;//gets the user input

		printf("enter the second number\n");
		cin >> sec;
		printf("enter the opertaor\n");
		cin >> s;	

		if (s == '+') { //make an if statement to check the used operator
			cout << "= " << fir + sec << "\n";
		}
		else if (s == '-') { // we make a else if statement to check the other opertaors
			cout << "= " << fir - sec << "\n";
		}
		else if (s == '*') { // we make a else if statement to check the other opertaors
			cout << "= " << fir * sec << "\n";
		}
		else if (s == '/') { // we make a else if statement to check the other opertaors
			cout <<"= " << fir / sec << "\n";
		}
		else {
			printf("Please Enter A Valid Operator\n");
		}
		
		printf("do you want to colse?");
		cin >> w;

		if (w == "yes" or w == "Yes" or w == "Y" or w == "y") {//we make a if statment to check the string w if it says yes then the program will end
			t = false;
		}
		
	}
	return 0;
}*/
