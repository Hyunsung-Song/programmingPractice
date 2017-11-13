//******************************** Try This **************************************
/*
#include <iostream>
using namespace std;

int main () {

	int alphabet = 97;
	char letter;
	int i = 0;

	while (i < 26){
		letter = char(alphabet);
		cout << letter << "\t" << alphabet << endl;
		alphabet += 1;
		i++;
	}
}
*/
//******************************** Try This **************************************
//******************************** Try This **************************************
/*
#include <iostream>
using namespace std;

int main () {

	int alphabet = 97;
	char letter;

	for (int i = 0; i < 26; i++){
		letter = char(alphabet);
		cout << letter << "\t" << alphabet << endl;
		alphabet++;
	}
}
*/
//******************************** Try This **************************************
//******************************** Try This **************************************
/*
#include <iostream>
using namespace std;

int square(int x){

	int squared = 0;

	for (int i=0; i < x; i++){
		squared += x;
	}

	return squared;
}

int main () {

	cout << square(2) << endl;
	cout << square(3) << endl;
	cout << square(4) << endl;

}
*/
//******************************** Try This **************************************
//******************************** Numeric EX ************************************
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {

	vector<double> temps;
	for(double temp;  cin>>temp;){   // This for loop does not have increment.
		temps.push_back(temp); // It only has initial control variable and condition.
	}
	double sum = 0;
	double sum2 = 0;
	for(double x : temps){
		sum += x;
	}
	cout << "Average temperature (using range for): " << (sum / temps.size()) << endl;

	for(size_t i = 0; i <= temps.size(); i++){
		sum2 += temps[i];
	}
	cout << "Average temperature (using for): " << (sum2 / temps.size()) << endl;
//	size() returns unsigned int, so using int i = 0 will bring warning, since int is signed.
//	range difference between singed and unsigned int
//	size_t is unsigned object, so it can be bigger than unsigned int
//	this is why size_t is used over unsigned int

	sort(temps.begin(), temps.end());

//	Sort() is for range, so sort(temps) will not work, it does not have range.

	for(double x : temps){
		cout << "Sorted temperature: " << x << endl;
	}

	cout << "Median Temperature: " << temps[temps.size()/2] << endl;

}
*/
//******************************** Numeric EX ************************************
//******************************** Try This **************************************
/*
#include <iostream>
using namespace std;
#include <vector>

int main ()

	vector<string> words;
	for(string word; cin>>word;){
		if(word == "Riven" || word == "Nunu"){
			words.push_back("BLEEP (" + word + ")");
		} else {
		words.push_back(word);
		}
	}
	for(string word : words){
		cout << word << endl;
	}
}
*/
//******************************** Try This **************************************
//********************************   Drill  **************************************

//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//
//int main () {
//
//	double first = 0.0;
//	double second = 0.0;
//	double input;
//	int counter = 0;
//	string unit;
//	double sum = 0;
//	vector<double> store;
//
//	cout << "Enter number followed by unit (cm, m, in, ft)" << endl;
//
//	while(cin >> input >> unit){
//
//		if (unit != "cm" && unit != "m" && unit != "in" && unit != "ft"){
//			cout << "Wrong unit, terminating program";
//			break;
//		}
//
////		DRILL NUMBER 6
////		double diff;
////		diff = fabs(first-second);
////
////		if(first > second){
////			cout << "The larger value is: " << first << endl;
////			cout << "The smaller value is " << second << endl;
////			if (diff < (1.0/100)){
////				cout << "Two values are almost equal" << endl;
////			}
////		} else if (second > first) {
////			cout << "The larger value is: " << second << endl;
////			cout << "The smaller value is " << first << endl;
////			if (diff < (1.0/100)){
////				cout << "Two values are almost equal" << endl;
////			}
////		} else if (first == second){
////			cout << "Two values are equal" << endl;
////		}
//
//		cout << "Your input: " << input << "" << unit << endl;
//
//		if (unit == "cm"){
//			input = input / 100;
//		} else if (unit == "in"){
//			input = input * 0.0254;
//		} else if (unit == "ft"){
//			input = (input * 12) * 0.0254;
//		}
//
//		if (counter == 0){
//			first = input;
//		}
//
//		if (input < first){
//			first = input;
//		} else if (input > second){
//			second = input;
//		}
//
//		store.push_back(input);
//
//		sum += input;
//
//		sort(store.begin(), store.end());
//
//		cout << "Value entered so far: ";
//		for (int i = 0; i <= counter; i++){
//			cout << "(" << store[i] << ")" << " ";
//		}
//
//		counter++;
//
//		cout << "\nSmallest so far: " << first << endl;
//		cout << "Largest so far: " << second << endl;
//		cout << "Number entered so far: " << counter << endl;
//		cout << "Sum so far: " << sum << endl;
//
//	}
//}

//********************************   Drill  **************************************
//********************************   Ex 2   **************************************

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main () {
//
//	vector<double> temps;
//	for(double temp;  cin>>temp;){   // This for loop does not have increment.
//		temps.push_back(temp); // It only has initial control variable and condition.
//	}
//	double sum = 0;
//	double sum2 = 0;
//	for(double x : temps){
//		sum += x;
//	}
//	cout << "Average temperature (using range for): " << (sum / temps.size()) << endl;
//
//	for(size_t i = 0; i <= temps.size(); i++){
//		sum2 += temps[i];
//	}
//	cout << "Average temperature (using for): " << (sum2 / temps.size()) << endl;
////	size() returns unsigned int, so using int i = 0 will bring warning, since int is signed.
////	range difference between singed and unsigned int
////	size_t is unsigned object, so it can be bigger than unsigned int
////	this is why size_t is used over unsigned int
//
//	sort(temps.begin(), temps.end());
//
////	Sort() is for range, so sort(temps) will not work, it does not have range.
//
//	for(double x : temps){
//		cout << "Sorted temperature: " << x << endl;
//	}
//
//	if(temps.size() % 2 == 0){
//		int Rmed = temps.size()/2;
//		int Lmed = Rmed -1;
//		cout << "Median Temperature: " << (double)(temps[Rmed] + temps[Lmed]) / 2 << endl;
//	} else {
//		int med = temps.size()/2;
//		cout << "Median Temperature: " << (double)temps[med] << endl;
//	}
//}

//********************************   Ex 2   **************************************
//********************************   Ex 3   **************************************

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main () {
//
//	vector <double> dist;
//	double sum = 0;
//
//	for(double distance; cin >> distance;){
//		dist.push_back(distance);
//		sum += distance;
//	}
//
//	cout << "Total Sum: " << sum << endl;
//
//	sort(dist.begin(), dist.end());
//
//	cout << "Smallest: " << dist[0] << endl;
//	cout << "Largest: " << dist[dist.size()-1] << endl;
//}

//********************************   Ex 3   **************************************
//********************************   Ex 6   **************************************

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main () {
//
//	vector <string> digit;
//	vector <int> number;
//	char choice;
//	string digitchoice;
//	int numberchoice;
//
//	digit.push_back("zero"); digit.push_back("one"); digit.push_back("two"); digit.push_back("three");
//	number.push_back(0); number.push_back(1); number.push_back(2); number.push_back(3);
//
//	cout << "Digit or Number (d/n) ? ";
//	while(cin >> choice){
//
//		if (choice == 'd'){
//			cout << "What is your digit ? ";
//			while(cin >> digitchoice){
//				if(digitchoice == "zero"){
//					cout << "\n" << number[0];
//				} else if(digitchoice == "one"){
//					cout << "\n" << number[1];
//				} else if(digitchoice == "two"){
//					cout << "\n" << number[2];
//				} else if(digitchoice == "three"){
//					cout << "\n" << number[3];
//				} else {
//					break;
//				}
//
//				}
//
//		} else if (choice == 'n'){
//			cout << "\nWhat is your number ? ";
//			while(cin >> numberchoice){
//				if (numberchoice >= 0 && numberchoice < 4){
//					cout << "\n" << digit[numberchoice];
//					} else {
//						break;
//					}
//				}
//			}
//
//		else {
//			cout << "\nDigit or Number only";
//		}
//
//		cout << "Digit or Number (d/n) ? ";
//
//		}
//}

//********************************   Ex 6   **************************************
//********************************   Ex 8   **************************************

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main () {
//
//	vector <double> rice;
//
//	rice.push_back(1.0);
//	cout << "Square Number: " << 1 << " , Number of rice: " << rice[0] << endl;
//
//	for (int i=1; i < 64; i++){
//		rice[i] = rice[i-1] * 2.0;
//		cout << "Square Number: " << (i+1) << " , Number of rice: " << rice[i] << endl;
//
//		if(rice[i] >= 1000 && rice[i] < 1999){
//			cout << "Square Number for at least 1000: " << (i+1) << endl;
//		}
//
//		if(rice[i] >= 1000000 && rice[i] < 1999999){
//			cout << "Square Number for at least 1000000: " << (i+1) << endl;
//		}
//
//		if(rice[i] >= 1000000000 && rice[i] < 1999999999){
//			cout << "Square Number for at least 1000000: " << (i+1) << endl;
//		}
//
//	}
//
//	//	In case of int, it overflows at 32, gives out negative number and runtime error
//	//
//}

//********************************   Ex 8   **************************************
//********************************   Ex 10  **************************************

//#include <iostream>
//#include <vector>
//#include <ctime>
//using namespace std;
//
//int main () {
//
//	vector<char> rps;
//	char you;
//	int randomnizer;
//	char opponent;
//	srand(time(0));
//
//	cout << "Rock, Paper, Scissor ? (R/P/S): ";
//	while(cin >> you){
//
//	randomnizer = rand() % 3;
//
//	rps.push_back('R');
//	rps.push_back('P');
//	rps.push_back('S');
//
//	opponent = rps[randomnizer];
//
//	cout << "Your Attack: " << you << endl;
//	cout << "Opponent Defense: " << opponent << endl;
//
//	if(you == 'R'){
//		switch(opponent){
//			case 'R':
//				cout << "Draw" << endl;
//				break;
//			case 'P':
//				cout << "Lose" << endl;
//				break;
//			case 'S':
//				cout << "Win" << endl;
//				break;
//			default:
//				cout << "Wrong Input" << endl;
//			}
//		}
//
//	if(you == 'P'){
//		switch(opponent){
//			case 'R':
//				cout << "Win" << endl;
//				break;
//			case 'P':
//				cout << "Draw" << endl;
//				break;
//			case 'S':
//				cout << "Lose" << endl;
//				break;
//			default:
//				cout << "Wrong Input" << endl;
//		}
//	}
//
//	if(you == 'S'){
//		switch(opponent){
//			case 'R':
//				cout << "Lose" << endl;
//				break;
//			case 'P':
//				cout << "Win" << endl;
//				break;
//			case 'S':
//				cout << "Draw" << endl;
//				break;
//			default:
//				cout << "Wrong Input" << endl;
//		}
//	}
//
//	cout << "Rock, Paper, Scissor ? (R/P/S): ";
//
//	}
//
//}

//********************************   Ex 10  **************************************
//********************************   Ex 11  **************************************

//#include <iostream>
//#include <vector>
//using  namespace  std;
//
//int main (){
//
//	vector <int> prime;
//	int max;
//
//	cout << "What is max ? ";
//	cin >> max;

//	for(int i = 2; i < max; i++){
//		bool isPrime = true;
//
//		for (int j = 2; j < (i/2 + 1); j++){
//			if(i % j == 0){
//				isPrime = false;
//				break;
//			}
//		}
//
//		if(isPrime){
//			prime.push_back(i);
//		}
//	}
//
//	for(size_t k = 0; k < prime.size(); k++){
//		cout << "Prime Number: " << prime[k] << endl;
//	}


//This is for finding the first N prime number
//To change for range of number and picking prime number,
//CHANGE
//max > 0  to  i < max
//remove max--;

//	for(int i = 2; max > 0; i++){
//		bool isPrime = true;
//
//		for (int j = 2; j < (i/2 + 1); j++){
//			if(i % j == 0){
//				isPrime = false;
//				break;
//			}
//		}
//
//		if(isPrime){
//			prime.push_back(i);
//			max--;
//		}
//	}
//
//	for(size_t k = 0; k < prime.size(); k++){
//		cout << "Prime Number: " << prime[k] << endl;
//	}
//
//}

//********************************   Ex 11  **************************************
//********************************   Ex 16  **************************************

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main () {
//
//	vector <int> series;
//
//	cout << "Enter values: ";
//	for(int num ; cin >> num;){
//		series.push_back(num);
//	}
//
//	sort(series.begin(), series.end());
//
//	cout << "Min: " << series[0] << endl;
//	cout << "Max: " << series[series.size() - 1] << endl;
//
//	int count = 1;
//	int countMode = 1;
//	int lastNum = series[0];
//	int mode;
//
//	for (size_t i = 1; i < series.size(); i++){
//		if (series[i] == lastNum){
//			count++;
//		} else {
//			if (count > countMode){
//				countMode = count;
//				mode = lastNum;
//			}
//			count = 1;
//			lastNum = series[i];
//		}
//	}
//
//	cout << "Mode: " << mode << endl;
//}

//********************************   Ex 16  **************************************
//********************************   Ex 18  **************************************

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main () {
//
//	double a, b, c;
//	double root1, root2;
//
//	cout << "Enter a, b, c,: ";
//	cin >> a >> b >> c;
//
//	root1 = (-b + sqrt(pow(b,2) - (4*a*c))) / (2*a);
//	root2 = (-b - sqrt(pow(b,2) - (4*a*c))) / (2*a);
//
//	cout << "First root: " << root1 << endl;
//	cout << "Second root: " << root2 << endl;
//}

//********************************   Ex 18  **************************************
//********************************   Ex 21  **************************************

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {

	vector <string> names;
	vector <int> scores;
	string name;
	int score;
	string prevname = "";
	vector <string> testNames;
	bool duplicate = false;

	cout << "Enter name and score: ";
	while(cin >> name >> score){

		if (name == "NoName" && score == 0){
			break;
		}

		names.push_back(name);
		scores.push_back(score);
		testNames.push_back(name);

		sort(testNames.begin(), testNames.end());

		for (size_t j=0; j < testNames.size(); j++){
			if (prevname == testNames[j]){
				duplicate = true;
			}
			prevname = testNames[j];
		}

		if(duplicate == true){
			cout << "FUCKING DUPLICATE" << endl;
			break;
		}

		cout << "Enter name and score: ";

		}

	for (size_t i=0; i < names.size(); i++){
		cout << "\n" << names[i] << " " << scores[i];
	}

	string query;
	int Iquery;
	bool queryStatus = false;
	string queryResponse;

	cout << "\nWhat do you want to search with ? (name/score): ";
	cin >> queryResponse;

	if(queryResponse == "name"){

	cout << "\nWhat name do you want to search for ? ";
	cin >> query;

	for (size_t k=0; k < names.size(); k++){
		if(query == names[k]){
			cout << "Search Successful: " << names[k] << " " << scores[k];
			queryStatus = true;
		}

	}

	if(queryStatus == false){
		cout << "Search Unsuccessful" << endl;
	}

	}

	if(queryResponse == "score"){

	cout << "\nWhat score do you want to search for ? ";
	cin >> Iquery;

	for (size_t k=0; k < scores.size(); k++){
		if(Iquery == scores[k]){
			cout << "Search Successful: " << names[k] << " " << scores[k];
			queryStatus = true;
		}

	}

	if(queryStatus == false){
		cout << "Search Unsuccessful" << endl;
	}

	}



}

//********************************   Ex 21  **************************************
