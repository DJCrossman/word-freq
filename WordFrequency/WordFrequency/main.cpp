/**
	Program:	main.cpp
	Programmer:	David Crossman, 200296439
	Date:		01/18/2014
*/

#include <iostream>
#include <iomanip>
#include <locale>
#include <fstream>

using namespace std;

#include "wordTree.h"

void readDataFromFile(WordTree *wordTree);
void displayFreqResults(WordTree *wordTree);

int main () {

	WordTree wordTree;
	readDataFromFile(&wordTree);
	displayFreqResults(&wordTree);

	return 0;
}

void readDataFromFile (WordTree *wordTree) {
	string data;
	cin >> data;
	//loop until the end of file
	while (cin.eof()) {
		//make all the characters lowercase
		for (unsigned int i = 0; i <= data.size(); i++)
			data[i] = tolower(data[i]);
		//insert data in the tree alphabetical
		if ( isalpha(data[0]) && islower(data[0]) )
			cout << "this is data:" << data;

		cin >> data;
	}
};

void displayFreqResults(WordTree *wordTree) {

};