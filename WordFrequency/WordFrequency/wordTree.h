/**
	Program:	wordTree.h
	Date:		01/18/2014
*/

#ifndef __WORDTREE_H__
#define __WORDTREE_H__

#include <string>
using namespace std;

struct TNode {
	char* word;
	int count;
	TNode* left;
	TNode* right;
};

class WordTree {
public: 
	WordTree ();
	~WordTree ();
	bool wordExists(string word);
	void addWord(string word);
};

#endif