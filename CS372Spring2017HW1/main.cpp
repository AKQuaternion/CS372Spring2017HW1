//
//  main.cpp
//  CS372Spring2017HW1
//
//  Created by Chris Hartman on 1/23/17.
//  Copyright © 2017 Chris Hartman. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;

int main(int argc, const char * argv[]) {
    cout << "Professor Hartman does not need a grade." << endl;
    cout << "Alexander Eckert should get an A on Assignment 1,\n";
    cout << "because he was the first student doing it." << endl;
	char x = 82;
	cout << x << (char) (x + 29) << (char)((x & 205) | 40);
	x += 271;
	cout << x << (char)((x - 42) << 1) << (char)((x >> 2) + 15);
	int y[] = {230, 64, 142, 228, 194, 200};
	char c = 0;
	for(int xD = 364; (xD % 3) == 1; xD /= 3) {
		cout << (char)(y[c] >> 1);
		c++;
	}
	cout << (char)(x + 4) << (char)(123 & 186) << (char)(4 << 3) << (char) 65;
	cout << endl << "Cameron Showalter's Grade: A-" << endl;
	cout << endl;
	cout << "Bryan gets a " << 1000%900 << " on Assignment 1." << endl << endl;
	cout << "Trace Braxling should get an A on assignment 1" << endl;
	cout << "Sam Erie should get an A on assignment 1." << endl;
	cout << "Bryce Melegari's Assignment 1 grade: A-, because he's boring." <<endl;

	cout << "Jeremiah Jacobson should get an A on assignment 1" << endl;
	
	cout << "Aisha Peters should get an A on Assignment 1." << endl;

	cout << "Jarye, A grade on hw 1 " << endl;

	cout << "Frank Cline should get an outstanding A." << endl;
	
    return 0;
}
