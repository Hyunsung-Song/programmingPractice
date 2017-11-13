/*
 * Hsong2.cpp
 *
 *  Created on: 2017. 10. 22.
 *      Author: Hyunsung PC
 */

#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
using namespace std;

string getSecretWord (const vector<string> &wList){
	int randomNum = rand() % wList.size();
	return wList[randomNum];
}

int main () {

	srand(time(0));
	vector<string> wList {"variable","function","object","expression","plus","pattern",
						  "module","debug","integrated","development","environment",
						  "virtual","input","shift","constructor","destructor","syntax",
						  "iterate","procedure","compiler"};

	char guess;
	char playAgain = 'y';
	bool sameGuess = false;

while(playAgain == 'y'){

	bool newroundFlag = false;
	string secretWord = getSecretWord(wList);
	vector<char> answer {secretWord.begin(), secretWord.end()};
	vector<char> question;
	vector<char> guessStorage {};
	size_t userTries = 0;
	size_t maxTries = ((answer.size()*2) >= 10) ? (answer.size()*2) : 10;
	size_t startTime = time(0);
	size_t timeLimit = ((answer.size()*7) >= 40) ? (answer.size()*7) : 40;

	for(size_t i=0; i < answer.size(); i++){
		question.push_back('_');
	}

	while(userTries <= maxTries){

//		prints out underscore for the secret word
		for(size_t i=0; i < question.size(); i++){
			cout << question[i] << " ";
		}

//		Maximum try check logic
		if(userTries >= maxTries){
			cout << "\nYou exceeded " << maxTries << " tries.\n"
				 << "The word was " << secretWord << "\n";
			cout << "\nDo you want to play again(y/n) ? ";
			while(cin >> playAgain){
				if(playAgain == 'n'){
					goto endgame;
				} else if(playAgain == 'y'){
					newroundFlag = true;
					break;
				}
				cout << "Do you want to play again(y/n) ? ";
			}
			if(newroundFlag == true){ break; }

		}

//		User input
		cout << "\nEnter a letter: ";
		cin >> guess;

//		Time limit check logic
		if((time(0) - startTime) > timeLimit){
			cout << "You exceeded " << timeLimit << " seconds to guess the word\n"
				 << "The word was " << secretWord << "\n";
			cout << "\nDo you want to play again(y/n) ? ";
			while(cin >> playAgain){
				if(playAgain == 'n'){
					goto endgame;
				} else if(playAgain == 'y'){
					newroundFlag = true;
					break;
				}
				cout << "Do you want to play again(y/n) ? ";
			}
			if(newroundFlag == true){ break; }
		}

//		Duplicate guess logic
		for(size_t i=0; i < guessStorage.size(); i++){
			if(guessStorage[i] == guess){
				cout << guess << " is one of previously guessed letters: ";
				sameGuess = true;
			}
		}
		if(sameGuess == false){
			guessStorage.push_back(guess);
			userTries++;
		} else {
			for(size_t i=0; i < guessStorage.size(); i++){
				cout << guessStorage[i];
			}
			cout << "\n";
			sameGuess = false;
		}

//		if guess is correct, replaces underscore with the guessed char
		for(size_t i=0; i < answer.size(); i++){
			if(answer[i] == guess){
				question[i] = guess;
			}
		}

//		check if all underscores are revealed
		if(answer == question){
			cout << "Congratulations! You guessed " << secretWord << " in " << userTries << " tries" << endl;
			cout << "\nDo you want to play again(y/n) ? ";
			while(cin >> playAgain){
				if(playAgain == 'n'){
					goto endgame;
				} else if(playAgain == 'y'){
					newroundFlag = true;
					break;
				}
				cout << "Do you want to play again(y/n) ? ";
			}
			if(newroundFlag == true){ break; }
		}
	}

}

	endgame: ;
	cout << ">\n" << "----------------------------";

}


