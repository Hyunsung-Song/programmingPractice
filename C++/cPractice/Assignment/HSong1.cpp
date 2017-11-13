/*
 * HSong1.cpp
 *
 *  Created on: 2017. 09. 26.
 *      Author: Hyunsung PC
 */

#include <iostream>
#include <ctime>
using namespace std;

int main () {

	srand(time(NULL));

	int playerBalance = 1000;
	int enemyBalance = 1000;
	int playerFirstDice, playerSecondDice, playerThirdDice, playerScore;
	int enemyFirstDice, enemySecondDice, enemyThirdDice, enemyScore;
	int round = 1;
	int bet, betRate;

	while (playerBalance > 0 && enemyBalance > 0){

		playerFirstDice = rand() % 6 + 1;
		playerSecondDice = rand() % 6 + 1;
		playerThirdDice = rand() % 6 + 1;
		enemyFirstDice = rand() % 6 + 1;
		enemySecondDice = rand() % 6 + 1;
		enemyThirdDice = rand() % 6 + 1;

		cout << "[Round " << round << "] You rolled (" << playerFirstDice << ", " << playerSecondDice << ", ?), "
			 << "machine rolled (" << enemyFirstDice << ", " << enemySecondDice << ", ?)..." << endl;

//		#define AUTOBET
		#ifndef AUTOBET
			cout << "How much are you going to bet: ";
			cin >> bet;
			while(bet > 10 || bet < 1){
				cout << " - your bet must be between $1 and $10, type again: ";
				cin >> bet;
			}
		#else
			if (playerFirstDice == playerSecondDice){
				bet = 10;
			} else if (enemyFirstDice == enemySecondDice){
				bet = 1;
			} else if ((playerFirstDice > 4 || playerSecondDice > 4) && (enemyFirstDice < 3 || enemySecondDice < 3)){
				bet = 8;
			} else if ((enemyFirstDice > 4 || enemySecondDice > 4) && (playerFirstDice < 3 || playerSecondDice < 3)){
				bet = 2;
			} else if ((playerFirstDice > 4 || playerSecondDice > 4) && (enemyFirstDice > 4 || enemySecondDice > 4)){
				bet = 6;
			} else if ((playerFirstDice < 3 || playerSecondDice < 3) && (enemyFirstDice < 3 || enemySecondDice < 3)){
				bet = 4;
			} else {
				bet = 5;
			}
			cout << "How much are you going to bet : " << bet << endl;
		#endif

		if(playerFirstDice == playerSecondDice && playerFirstDice == playerThirdDice){
			playerScore = 20;
			cout << "You had (" << playerFirstDice << ", " << playerSecondDice << ", " << playerThirdDice << ") ... Big Fish!!!" << endl;
			} else if(playerFirstDice >= playerSecondDice && playerFirstDice >= playerThirdDice){
				cout << "You had (" << playerFirstDice << ", " << playerSecondDice << ", " << playerThirdDice << ")-> ";
				playerSecondDice = rand() % 6 + 1;
				playerThirdDice = rand() % 6 + 1;
				cout << "You rolled (" << playerSecondDice << ", " << playerThirdDice << ") and then rolled ";
				if(playerSecondDice >= playerThirdDice){
					playerThirdDice = rand() % 6 + 1;
					playerScore = playerFirstDice + playerSecondDice + playerThirdDice;
					cout << "(" << playerThirdDice << ") -> You scored " << playerScore << "." << endl;
				} else if (playerThirdDice >= playerSecondDice){
					playerSecondDice = rand() % 6 + 1;
					playerScore = playerFirstDice + playerSecondDice + playerThirdDice;
					cout << "(" << playerSecondDice << ") -> You scored " << playerScore << "." << endl;
				}
			} else if(playerSecondDice >= playerFirstDice && playerSecondDice >= playerThirdDice){
				cout << "You had (" << playerFirstDice << ", " << playerSecondDice << ", " << playerThirdDice << ")-> ";
				playerFirstDice = rand() % 6 + 1;
				playerThirdDice = rand() % 6 + 1;
				cout << "You rolled (" << playerFirstDice << ", " << playerThirdDice << ") and then rolled ";
				if(playerFirstDice >= playerThirdDice){
					playerThirdDice = rand() % 6 + 1;
					playerScore = playerFirstDice + playerSecondDice + playerThirdDice;
					cout << "(" << playerThirdDice << ") -> You scored " << playerScore << "." << endl;
				} else if (playerThirdDice >= playerFirstDice){
					playerFirstDice = rand() % 6 + 1;
					playerScore = playerFirstDice + playerSecondDice + playerThirdDice;
					cout << "(" << playerFirstDice << ") -> You scored " << playerScore << "." << endl;
				}
			} else if(playerThirdDice >= playerFirstDice && playerThirdDice >= playerSecondDice){
				cout << "You had (" << playerFirstDice << ", " << playerSecondDice << ", " << playerThirdDice << ")-> ";
				playerFirstDice = rand() % 6 + 1;
				playerSecondDice = rand() % 6 + 1;
				cout << "You rolled (" << playerFirstDice << ", " << playerSecondDice << ") and then rolled ";
				if(playerFirstDice >= playerSecondDice){
					playerSecondDice = rand() % 6 + 1;
					playerScore = playerFirstDice + playerSecondDice + playerThirdDice;
					cout << "(" << playerSecondDice << ") -> You scored " << playerScore << "." << endl;
				} else if (playerSecondDice >= playerFirstDice){
					playerFirstDice = rand() % 6 + 1;
					playerScore = playerFirstDice + playerSecondDice + playerThirdDice;
					cout << "(" << playerFirstDice << ") -> You scored " << playerScore << "." << endl;
				}
			}

		if(enemyFirstDice == enemySecondDice && enemyFirstDice == enemyThirdDice){
			enemyScore = 20;
			cout << "Machine had (" << enemyFirstDice << ", " << enemySecondDice << ", " << enemyThirdDice << ") ... Big Fish!!!" << endl;
			} else if(enemyFirstDice >= enemySecondDice && enemyFirstDice >= enemyThirdDice){
				cout << "Machine had (" << enemyFirstDice << ", " << enemySecondDice << ", " << enemyThirdDice << ")-> ";
				enemySecondDice = rand() % 6 + 1;
				enemyThirdDice = rand() % 6 + 1;
				cout << "Machine rolled (" << enemySecondDice << ", " << enemyThirdDice << ") and then rolled ";
				if(enemySecondDice >= enemyThirdDice){
					enemyThirdDice = rand() % 6 + 1;
					enemyScore = enemyFirstDice + enemySecondDice + enemyThirdDice;
					cout << "(" << enemyThirdDice << ") -> Machine scored " << enemyScore << "." << endl;
				} else if (enemyThirdDice >= enemySecondDice){
					enemySecondDice = rand() % 6 + 1;
					enemyScore = enemyFirstDice + enemySecondDice + enemyThirdDice;
					cout << "(" << enemySecondDice << ") -> Machine scored " << enemyScore << "." << endl;
				}
			} else if(enemySecondDice >= enemyFirstDice && enemySecondDice >= enemyThirdDice){
				cout << "Machine had (" << enemyFirstDice << ", " << enemySecondDice << ", " << enemyThirdDice << ")-> ";
				enemyFirstDice = rand() % 6 + 1;
				enemyThirdDice = rand() % 6 + 1;
				cout << "Machine rolled (" << enemyFirstDice << ", " << enemyThirdDice << ") and then rolled ";
				if(enemyFirstDice >= enemyThirdDice){
					enemyThirdDice = rand() % 6 + 1;
					enemyScore = enemyFirstDice + enemySecondDice + enemyThirdDice;
					cout << "(" << enemyThirdDice << ") -> Machine scored " << enemyScore << "." << endl;
				} else if (enemyThirdDice >= enemyFirstDice){
					enemyFirstDice = rand() % 6 + 1;
					enemyScore = enemyFirstDice + enemySecondDice + enemyThirdDice;
					cout << "(" << enemyFirstDice << ") -> Machine scored " << enemyScore << "." << endl;
				}
			} else if(enemyThirdDice >= enemyFirstDice && enemyThirdDice >= enemySecondDice){
				cout << "Machine had (" << enemyFirstDice << ", " << enemySecondDice << ", " << enemyThirdDice << ")-> ";
				enemyFirstDice = rand() % 6 + 1;
				enemySecondDice = rand() % 6 + 1;
				cout << "Machine rolled (" << enemyFirstDice << ", " << enemySecondDice << ") and then rolled ";
				if(enemyFirstDice >= enemySecondDice){
					enemySecondDice = rand() % 6 + 1;
					enemyScore = enemyFirstDice + enemySecondDice + enemyThirdDice;
					cout << "(" << enemySecondDice << ") -> Machine scored " << enemyScore << "." << endl;
				} else if (enemySecondDice >= enemyFirstDice){
					enemyFirstDice = rand() % 6 + 1;
					enemyScore = enemyFirstDice + enemySecondDice + enemyThirdDice;
					cout << "(" << enemyFirstDice << ") -> Machine scored " << enemyScore << "." << endl;
				}
			}

		if(playerScore == enemyScore){
			cout << "Tied. You have $" << playerBalance << ", machine has $" << enemyBalance << "..." << endl;
		} else if (playerScore > enemyScore){
			if (playerScore == 20){
				betRate = 50;
			} else {
				betRate = playerScore - enemyScore;
			}
			playerBalance += betRate * bet;
			enemyBalance -= betRate * bet;
			if (enemyBalance > 0){
				cout << "You won :) You have $" << playerBalance << ", machine has $" << enemyBalance << "..." << endl;
			} else {
				playerBalance = 2000;
				enemyBalance = 0;
				cout << "You won :) You have $" << playerBalance << ", machine has $" << enemyBalance << "..." << endl;
				cout << "Machine is broke, You won the game !" << endl;
				break;
			}
		} else if (enemyScore > playerScore){
			if (enemyScore == 20){
				betRate = 50;
			} else {
				betRate = enemyScore - playerScore;
			}
			playerBalance -= betRate * bet;
			enemyBalance += betRate * bet;
			if (playerBalance > 0){
				cout << "You lost :) You have $" << playerBalance << ", machine has $" << enemyBalance << "..." << endl;
			} else {
				enemyBalance = 2000;
				playerBalance = 0;
				cout << "You lost :) You have $" << playerBalance << ", machine has $" << enemyBalance << "..." << endl;
				cout << "You are broke, You lost the game !" << endl;
				break;
			}
		}

		round++;

	}
}


