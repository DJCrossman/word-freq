/**
	Program:	main.cpp
	Programmer:	David Crossman, 200296439
	Date:		01/19/2014
*/

#include <iostream>
#include <iomanip>
#include <locale>
#include <string>
#include <map>

using namespace std;

map<string, int> readFile ();
void display  (map<string, int> tree);

int main () {
	map<string, int> tree;
	tree = readFile();
	display(tree);
	return 0;
}

map<string, int> readFile () {
	string data;
	map<string, int> tree;
	map<string, int>::const_iterator it;

	//loop until the end of file
	while (!cin.eof() && cin.good()) {
		int count = 1;
		cin >> data;
		//make all the characters lowercase
		for (unsigned int i = 0; i <= (int) data.size(); i++)
			data[i] = tolower(data[i]);
		//insert data in the tree alphabetical
		if ( isalpha(data[0]) && islower(data[0]) )
			for ( it = tree.begin(); it != tree.end(); ++it )
				if (it->first == data)
					count += it->second;
			tree.insert(make_pair((data) , count));
		// break; //- For some reason will not exit loop at the end of file
	}
	return tree;
};

void display (map<string, int> node) {
	map<string, int>::const_iterator it;
	for ( it = node.begin(); it != node.end(); ++it )
		std::cout << it->first << " : " << it->second << std::endl;
};