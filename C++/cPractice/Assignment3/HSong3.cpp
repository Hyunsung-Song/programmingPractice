/*
 * HSong3.cpp
 *
 *  Created on: 2017. 11. 5.
 *      Author: Hyunsung PC
 */

#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
#include <ctime>
#include <chrono>

using namespace std;

void challengeModifier (string &question, bool &challengeFlag){

	static int consecUp = -1;
	static int consecDown = 0;
	static int difficulty = 0;

	if(challengeFlag == true){
		consecUp++;
		consecDown = 0;
		if(consecUp > 0 && consecUp % 2 == 0){
			cout << "Succeeded two consecutive times, challenge goes up!" << endl;
			difficulty++;
			consecUp = 0;
		}
	} else {
		consecDown++;
		consecUp = 0;
		if(consecDown > 0 && consecDown % 2 == 0 && difficulty > 0){
			cout << "Missed two consecutive times, challenge goes down!" << endl;
			difficulty--;
			consecDown = 0;
		}
	}

	if(difficulty > 0){
		for(int q=0; q < difficulty; q++){
			int randUnderscore = rand() % question.length();
			if(question[randUnderscore] == '_'){
				q--;
			} else {
				question[randUnderscore] = '_';
			}
		}
	}

	if(difficulty <= 0){
		difficulty = 0;
	}

}

int main () {

	char delim = ' ';
	bool roundFlag = true;
	bool answerFlag = true;
	bool challengeFlag = true;
	string userInput;
	string question;
	string answer;
	vector<string> tokens;
	vector<string> originalTokens;

	cout << "Enter at least five animal names, e.g., cat, dog, etc...\n";

//	Logic for tokenizing multiple inputs of animal using deliminator " "
	do{
	getline(cin,userInput);
	istringstream split(userInput);
	for(string each; getline(split, each, delim); tokens.push_back(each));
	}
	while(!userInput.empty());


	for(size_t i=0; i < tokens.size(); i++){
		cout << i+1 << ": " << tokens[i] << endl;
		originalTokens.push_back(tokens[i]);
	}

while(roundFlag == true){

//	Shuffle the vector of user input using Mersenne Twister PRNG
	mt19937 rng(chrono::system_clock::now().time_since_epoch().count());
	shuffle(begin(tokens), end(tokens), rng);

//	Randomly pick up 1 to 3 names from user input using rand()
	srand(time(NULL));
	vector<string> randTokens;
	for(int j=0; j <= rand() % 3; j++){
		randTokens.push_back(tokens[j]);
	}

//	Logic for producing a randomly shuffled word from randTokens
	question = "";
	for(size_t k=0; k < randTokens.size(); k++){
		question += randTokens[k];
	}
	shuffle(begin(question), end(question), rng);

//	Call function for challenge modifier
	challengeModifier(question,challengeFlag);

	switch(randTokens.size()){
		case '1':
			cout << "\nWhat are "<< randTokens.size() << " animal in \"" << question << "\" ? ";
			break;
		default :
			cout << "\nWhat are "<< randTokens.size() << " animals in \"" << question << "\" ? ";
	}

	answerFlag = true;

	while(answerFlag == true){

		getline(cin,answer);

		//	Two specified commands for quit and show name list
		if(answer == "quit"){
			roundFlag = false;
			break;
		}
		if(answer == "?"){
			for(size_t i=0; i < originalTokens.size(); i++){
				cout << i+1 << ": " << originalTokens[i] << endl;
			}
		}

		//	Tokenize user answer for comparison with randTokens
		vector<string> userAnswer;
		istringstream split(answer);
		for(string each; getline(split, each, delim); userAnswer.push_back(each));

		if(userAnswer.size() != randTokens.size() || answer == "?"){
			cout << "Your number of input is incorrect. Enter again: ";
			continue;
		}

		sort(begin(userAnswer), end(userAnswer));
		sort(begin(randTokens), end(randTokens));

		if(userAnswer == randTokens){
			cout << "Yes!" << endl;
			challengeFlag = true;
			answerFlag = false;
		} else {
			cout << "Nope!" << endl;
			challengeFlag = false;
			answerFlag = false;
		}
	}

}

	cout << "Bye..." << endl;

}


