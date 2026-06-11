#include <iostream>
using namespace std;


// print function
// an okay function to check if it is okay
// q[0, 0 ... 0]
// q[0,0]

bool ok(int q[], int c) {
	for(int i = 0; i < c; i++) {
			if( q[i] == q[c] || (c-i) == abs(q[c] - q[i])) return false;
	}
	return true;
}
void print(int q[]) {
	for(int i = 0; i < 8; i++) {
		for(int j = 0; j < 8; j++) {
			if(i == q[j]) cout << "1";
			else cout << "0";
		}
		cout << endl;
	}
	cout << endl;
}

int main() {
	
	int q[8] = {0}; //board
	int c = 0; //this is tracked
	int NumSol = 0;
	q[0] = 0;

	c++;
	q[c]++;

	while(c >= 0) {
		
		//if we have moved beyond the last column
		if(c == 8) {
			//print the board
			cout << "Solution number " << ++NumSol << endl;
			print(q);
			//backtrack
			c--;
			q[c]++;
		}
		//if we have moved beyond the last row
		else if(q[c] == 8) {
			//reset the queen
			q[c] = 0;
			
			//backtrack
			c--;
			if(c >= 0) {
				q[c]++;
			}
		}
		//check if the place of the queen is ok
		else if(ok(q, c)) {
		//move to the next column if its okay
		c++;
		q[c] = 0;
		} 
		else {
			//move to the next row if its not okay
			q[c]++;
		}
	}
	return 0;
}
