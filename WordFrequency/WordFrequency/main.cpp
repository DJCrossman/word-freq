/**
	Program:	main.cpp
	Programmer:	David Crossman, 200296439
	Date:		01/19/2014
*/

#include <iostream>
#include <iomanip>
#include <locale>
#include <string>

using namespace std;

#include "wordTree.h"

void readFile (WordTree *wordTree);
void display  (TNode *node);

int main () {

	WordTree wordTree;
	readFile(&wordTree);
	display(wordTree.getHead());

	return 0;
}

void readFile (WordTree *wordTree) {
	string data;
	//loop until the end of file
	while (!cin.eof() && cin.good()) {
		cin >> data;
		//make all the characters lowercase
		for (unsigned int i = 0; i <= (int) data.size(); i++)
			data[i] = tolower(data[i]);
		//insert data in the tree alphabetical
		if ( isalpha(data[0]) && islower(data[0]) )
			wordTree->insert(data);
		//break; - For some reason will not exit loop at the end of file
	}
};

void display (TNode *node) {
	if (node != NULL) 
	{
		display(node->left);
		cout << node->word << " = " << node->count << endl;
		display(node->right);
	}
};