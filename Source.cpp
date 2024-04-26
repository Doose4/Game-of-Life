//Board
	//make board
	//print board
//Engine
	//2 arrays (temp and live)
	// Search through to see cell, 
//Input
	//input intro cells
	//start
	//how many ticks

#include <iostream>
#include <array>

using namespace std;

class board {
public:
	int myarray[9][9];
	int temparray[9][9];

	board() {
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				myarray[i][j] = 0;
			}
		}
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				temparray[i][j] = 0;
			}
		}
	}

	void printboard() {
		cout << "-   0  1  2  3  4  5  6  7  8" << endl;
		for (int i = 0; i < 9; i++)
		{
			cout << i << "  ";
			for (int j = 0; j < 9; j++)
			{
				 cout << " " << myarray[i][j] << " ";
			}
			cout << endl;
		}
	}

};

//text
class Engine {
private:
	board* playboard;


public:
	Engine(board* boardptr) {
		this->playboard = boardptr;
	}

	void userinput(int colum, int roww) {
		playboard->myarray[roww][colum] = 1;
	}

	void tick() {
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				playboard->myarray[i][j] = 0;
			}
		}

	}

	int checkcell() {

	}
};

int main() {
	board myboard;
	Engine gameengine(&myboard);

	myboard.printboard();

	return 0;
}