//********************************* Example 3.5.1 *********************************
/*
#include <iostream>
using namespace std;

int main () {

	int wordcount = 0;
	string previous = "";
	string current;

	while (cin>>current){
		++wordcount;
		if (previous == current){
			cout << "Repeated Word: " << current << "\n";
		}
		previous = current;
		cout << "Words entered so far: " << wordcount << endl;
	}

}
*/
//********************************* Example 3.5.1 *********************************

//********************************* Drill Exercise ********************************
/*
#include <iostream>
using namespace std;

int main () {

	string first_name;
	string friend_name;
	char friend_sex;
	int friend_age;

	cout << "Enter the name of the person you want to write to: ";
	cin >> first_name;
	cout << "Enter the name of another friend: ";
	cin >> friend_name;
	cout << "Enter the gender of your friend (m or f): ";
	cin >> friend_sex;
	cout << "Enter the age of the recipient: ";
	cin >> friend_age;

	cout << "Dear " << first_name << ",\n\n\tHow are you doing ? \n\tI am fine. I miss you \n";
	cout << "\tHave you seen " << friend_name << " lately?\n";

	if (friend_sex == 'm'){
		cout << "\tIf you see " << friend_name << " please ask him to call me." << endl;
	}

	if (friend_sex == 'f'){
		cout << "\tIf you see " << friend_name << " please ask her to call me." << endl;
	}

	cout << "\tI hear you just had a birthday and you are " << friend_age << " years old.\n\n";
	cout << "\t\t\t\t\t\tYours Sincerely,\n\n\t\t\t\t\t\tSong";


}
*/
//********************************* Drill Exercise ********************************

//********************************* Exercise 4 & 5 ********************************
/*
#include <iostream>
using namespace std;

int main () {

	int val1;
	int val2;
	double bal1;
	double bal2;

	cout << "What is the value of the first and second integer? \n";
	cin >> val1 >> val2;

	cout << "What is the value of the first and second double? \n";
	cin >> bal1 >> bal2;

	if (val1 > val2){
		cout << "The minimum integer is: " << val2 << endl;
		cout << "The maximum integer is: " << val1 << endl;
	} else {
		cout << "The minimum integer is: " << val1 << endl;
		cout << "The maximum integer is: " << val2 << endl;
	}

	cout << "The sum of two integer is: " << val1 + val2
		 << "\nThe difference of two integer is: " << val1 - val2
		 << "\nThe product of two integer is: " << val1 * val2
		 << "\nThe ratio of first integer to second intger is: " << val1 / val2;

	cout << "\n*******************************************************" << endl;

	if (bal1 > bal2){
		cout << "The minimum double is: " << bal2 << endl;
		cout << "The maximum double is: " << bal1 << endl;
	} else {
		cout << "The minimum double is: " << bal1 << endl;
		cout << "The maximum double is: " << bal2 << endl;
	}

	cout << "The sum of two double is: " << bal1 + val2
		 << "\nThe difference of two double is: " << bal1 - bal2
		 << "\nThe product of two double is: " << bal1 * val2
		 << "\nThe ratio of first double to second double is: " << bal1 / bal2 << endl;

}
*/
//********************************* Exercise 4 & 5 ********************************

//********************************* Exercise 6 & 7 ********************************
/*
#include <iostream>
using namespace std;

int main () {

//	string one;
//	string two;
//	string three;

	int one;
	int two;
	int three;

	cin >> one >> two >> three;

	if (one < two && one < three && two < three){
		cout << one << "," << two << "," << three;
	} else if (two < one && two < three && one < three){
		cout << two << "," << one << "," << three;
	} else if (three < one && three < two && one < two){
		cout << three << "," << one << "," << two;
	}

	if (one < two && one < three && three < two){
		cout << one << "," << three << "," << two;
	} else if (two < one && two < three && three < one){
		cout << two << "," << three << "," << one;
	} else if (three < one && three < two && two < one){
		cout << three << "," << two << "," << one;
	}

	if (one == two && one < three){
		cout << one  << "," << two << "," << three;
	} else if (one == two && three < one){
		cout << three << "," << one << "," << two;
	} else if (one == three && one < two){
		cout << one << "," << three << "," << two;
	} else if (one == three && two < one){
		cout << two << "," << one << "," << three;
	} else if (two == three && one < three){
		cout << one << "," << two << "," << three;
	} else if (two == three && two < one){
		cout << three << "," << one << "," << two;
	}
}
*/
//********************************* Exercise 6 & 7 ********************************

//********************************* Exercise 8 ************************************
/*
#include <iostream>
using namespace std;

int main () {

	int number;

	cout << "What is your number ? ";
	cin >> number;

	if (number % 2 == 0){
		cout << "\nThe value " << number << " is an even number";
	} else {
		cout << "\nThe value " << number << " is an odd number";
	}

}
*/
//********************************* Exercise 8 ************************************

//********************************* Exercise 11 ***********************************
/*
#include <iostream>
using namespace std;

int main () {

	int penny;
	int nickel;
	int dime;
	int quarter;
	int halfdollar;
	int fulldollar;
	double total;

	cout << "How many pennies do you have ? ";
	cin >> penny;

	cout << "\nHow many nickels do you have ? ";
	cin >> nickel;

	cout << "\nHow many dimes do you have ? ";
	cin >> dime;

	cout << "\nHow many quarters do you have ? ";
	cin >> quarter;

	cout << "\nHow many half dollars do you have ? ";
	cin >> halfdollar;

	cout << "\nHow many full dollars do you have ? ";
	cin >> fulldollar;

	total = (0.01 * penny) + (0.05 * nickel) + (0.10 * dime) + (0.25 * quarter) + (0.50 * halfdollar) + (1.0 * fulldollar);

	cout << "\nThe value of your coins are: $" << total << endl;


}
*/
//********************************* Exercise 11 ***********************************

//********************************* Exercise 10 ***********************************

#include <iostream>
using namespace std;

int main () {

	char operation;
	double operand1;
	double operand2;
	double result;



	do {

		cout << "Enter the first operand, operation, and second operand in respective order: ";
		cin >> operand1 >> operation >> operand2;

	if (operation == '+'){
		cout <<"Adding " << operand1 <<" and " << operand2;
		result = operand1 + operand2;
		cout << "\nThe result is: " << result << endl;
	}

	if (operation == '-'){
		cout <<"Subtracting " << operand1 <<" and " << operand2;
		result = operand1 - operand2;
		cout << "\nThe result is: " << result << endl;
	}

	if (operation == '*'){
		cout <<"Multiplying " << operand1 <<" and " << operand2;
		result = operand1 * operand2;
		cout << "\nThe result is: " << result << endl;
	}

	if (operation == '/'){
		cout <<"Dividing " << operand1 <<" and " << operand2;
		result = operand1 / operand2;
		cout << "\nThe result is: " << result << endl;
	}

		cout << "*****************************************************************************" << endl;
	} while (!cin.fail());


	return 0;
}
