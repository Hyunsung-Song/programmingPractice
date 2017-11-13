/*
 * Exercise.cpp
 *
 *  Created on: 2017. 10. 15.
 *      Author: Hyunsung PC
 */

//********************************   Ex 02  **************************************

//#include <iostream>
//#include <stdexcept>
//using namespace std;
//
//double ctok (double c){
//	if(c < -273.15){
//		throw runtime_error("Celcius below Absolute Zero");
//	}
//	double k = c + 273.15;
//	return k;
//}
//
//double ktoc (double k){
//	if(k < 0){
//		throw runtime_error("Kevin below Absolute Zero");
//	}
//	double c = k - 273.15;
//	return c;
//}
//
//int main () {
//try{
//	double celcius_one = 0;
//	double kelvin_one = 0;
//
//	cout << "Enter C to K: ";
//	cin >> celcius_one;
//	double k = ctok(celcius_one);
//	cout << k << '\n';
//
//	cout << "Enter K to C: ";
//	cin >> kelvin_one;
//	double c = ktoc(kelvin_one);
//	cout << c << '\n';
//}
//catch(runtime_error& e){
//	cerr << e.what();
//}
//}

//********************************   Ex 02  **************************************
//********************************   Ex 07  **************************************

//#include <iostream>
//#include <stdexcept>
//#include <cmath>
//using namespace std;
//
//double root1 = 0;
//double root2 = 0;
//
//void solvequad(int a, int b, int c){
//	double discriminant = (pow(b,2) - (4*a*c));
//	if(discriminant < 0){
//		throw runtime_error("Discriminant less than zero, imaginery root");
//	}
//	root1 = (-b + sqrt(discriminant)) / (2.0*a);
//	root2 = (-b - sqrt(discriminant)) / (2.0*a);
//
//	cout << "First Root: " << root1 << endl;
//	cout << "Second Root: " << root2 << endl;
//}
//
//int main () {
//try{
//	int a,b,c;
//	cout << "Enter a,b,c: ";
//	cin >> a >> b >> c;
//	solvequad(a,b,c);
//}
//catch(runtime_error& e){
//	cerr << e.what();
//}
//}

//********************************   Ex 07  **************************************
//********************************   Ex 08  **************************************

//#include <iostream>
//#include <stdexcept>
//#include <vector>
//
//using namespace std;
//
//void N_sum (int sumN) {
//	vector <double> numbers;
//	double sum = 0.0;
//	double diff = 0.0;
//
//	cout << "Please enter some integers (press '|' to stop):" << endl;
//	for(double num; cin >> num;){
//		numbers.push_back(num);
//	}
//
//	if(numbers.size() < (size_t)sumN){
//		throw runtime_error("First N greater than vector size");
//	}
//
//	for(int i=0; i < sumN; i++){
//		sum += numbers[i];
//	}
//
//	cout << "The sum of the first " << sumN << " numbers ( ";
//	for(int j=0; j < sumN; j++){ cout << numbers[j] << " "; };
//	cout << ") is " << sum << "." << endl;
//
//	for(int k=1; k <= (sumN-1); k++){
//		diff = numbers[k-1] - numbers[k];
//		cout << "Difference between " << k-1 << " and " << k
//			 << " is: " << diff << endl;
//	}
//}
//
//int main () {
//
//try{
//	int sumN;
//
//	cout << "Please enter the number of values you want to sum: ";
//	cin >> sumN;
//
//	N_sum(sumN);
//}
//catch(runtime_error& e){
//	cerr << e.what() << endl;
//}
//
//}

//********************************   Ex 08  **************************************
//********************************   Ex 11  **************************************

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main () {
//	vector<int> fibo;
//
//	fibo.push_back(1);
//	fibo.push_back(1);
//	cout << "1 1 ";
//
//	for(int i=2; i < 12; i++){
//		fibo[i] = fibo[(i-1)] + fibo[(i-2)];
//		cout << fibo[i] << " ";
//	}
//}

//********************************   Ex 11  **************************************

//#include <iostream>
//
//using namespace std;
//
//int main () {
//	string fucker;
//	cout << "FUCK THIS CLASS: ";
//	getline(cin,fucker);
//	cout << "\nSO YOUR THOUGHTS ARE: " << fucker;
//
//}

#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

bool isPrime(int tempNum){

bool compositeFlag = false;

			for(int j=2; j < tempNum/2 + 1; j++){
				if(tempNum % j == 0){
					compositeFlag = true;
				}
				if (compositeFlag == true){ return false; }
			}

	return true;

}

int main() {

	int lowerValue;
	int upperValue;

try{
	cout << "This program sums all integers between a lower value and an upper value\n"
		 << "and finds all prime numbers between those values\n";
	cout << "\nEnter lower value: ";
	cin >> lowerValue;
	cout << "Enter upper value: ";
	cin >> upperValue;

	if(lowerValue >= upperValue){
		throw runtime_error("first value is not less than second value");
	}

	vector<int> numberRange;
	int range = upperValue - lowerValue;
	int lowerCopy = lowerValue;
	int sum = 0;
	vector<int> primeNumber;

//	Create vector container for list of values
	for(int i=0; i <= range; i++){
		numberRange.push_back(lowerCopy);
		sum += lowerCopy;
		lowerCopy++;
	}

//	Logic for containing prime number on separate vector
	for(size_t i=0; i < numberRange.size(); i++){
		if(isPrime(numberRange[i]) == true){
			primeNumber.push_back(numberRange[i]);
		}
	}

//	Print out prime numbers between values
	cout << "Prime numbers found between " << lowerValue << " and " << upperValue << " are:" << endl;
	if(primeNumber.size() == 0){
		cout << "\tNone" << endl;
	} else {
		for(size_t k=0; k < primeNumber.size(); k++){
			cout << "\t" << primeNumber[k] << endl;
		}
	}

//	Print out the sum
	cout << "The total of integers between " << lowerValue << " and " << upperValue << " equals " << sum << endl;
}
catch(runtime_error& e){
	cerr << e.what();
}
}
