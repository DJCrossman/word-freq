/**
	Program:	wordTree.cpp
	Date:		01/18/2014
*/

#include <iostream>
#include <iomanip>
#include <stddef.h>

using namespace std;

#include "wordTree.h"

WordTree::WordTree() 
{
	head = nullptr ;
}
WordTree::~WordTree () { }
bool WordTree::isEmpty() 
{
	return head == nullptr;
}
void WordTree::insert (TNode* node) {
	TNode *temp;
    TNode *back;

    temp = head;
    back = nullptr ;

    while(temp != nullptr )
    {
        back = temp;
		if ( node->word == temp->word ) {
			break;
		}
		if ( node->word < temp->word ) {
			temp = temp->left;
		} else if ( node->word < temp->word ) {
			temp = temp->right;
		}
    }

    // Now attach the new node to the node that back points to 
    if(back == nullptr ) // Attach as root node in a new tree 
        head = node;
    else if ( node->word == back->word) {
		back->count++;
	} else {
		if ( node->word < back->word) {
			back->left = node;
		} else if ( node->word < back->word ) {
			back->right = node;
		}
    }
}
void WordTree::insert (string word) {
	TNode *newNode;

	newNode = new TNode();
	newNode->word = word;
	newNode->count = 1;
	newNode->left = newNode->right = nullptr ;

	insert(newNode);
}
TNode* WordTree::getHead ()
{
	return head;
}