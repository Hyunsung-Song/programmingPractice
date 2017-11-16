/*
 * Exercise.cpp
 *
 *  Created on: 2017. 11. 13.
 *      Author: Hyunsung PC
 */

//******************************* Exercise 3 & 4 ****************************************

//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//void fibonacci(int x, int y, vector<int>& v, int n){
//
//	v.push_back(x);
//	v.push_back(y);
//
//	for(int i = 2; i < n; i++){
//		v.push_back(v[i-2] + v[i-1]);
//	}
//
//}
//
//int main(){
//
//	int first, second, nth;
//	vector<int> testOne;
//
//	cout << "Enter the first, second, and nth: ";
//	cin >> first >> second >> nth;
//
//	fibonacci(first,second,testOne,nth);
//
//	for(size_t j = 0; j < testOne.size(); j++){
//		cout << "Printing: " << testOne[j] << endl;
//	}
//
//}

#include <iostream>
#include <string>

using namespace std;

void skip_to_int(){
	if(cin.fail()){
		cin.clear();
//		for(char ch; cin>>ch;){
//			cout << isdigit(ch) << ch <<  endl;
//			if(isdigit(ch)){
//				cout << "LOLWUT" << endl;
//				cin.unget();
//				return;
//			}
//		}
	}
}

int main () {

	cout << "Please enter an integer in the range 1 to 10 (inclusive):\n";
	int n = 0;
	while(true){
		if(cin>>n){
			if(1<=n && n<=10) break;
			cout << "Sorry" << n << " is not in the [1:10] range; please try again\n";
		} else {
			cout << "Sorry, that was not a number; please try again\n";
			skip_to_int();
		}
	}
	cout << "FINAL: " << n;
}

