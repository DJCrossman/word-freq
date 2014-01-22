/**
	Program:	wordTree.h
	Date:		01/18/2014
*/

#ifndef __WORDTREE_H__
#define __WORDTREE_H__

#include <string>
using namespace std;

struct TNode {
	string word; // char* word;
	int count;
	TNode* left;
	TNode* right;
};

class WordTree {
public: 
	WordTree (); 
	~WordTree ();

	bool isEmpty ();
	void insert  (string word);
	void insert	 (TNode* node);
	TNode* getHead ();
private:
	TNode *head;
};

#endif