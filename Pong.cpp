// Pong.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


class ball {
private: 
	float velocityX;
	float velocityY;
	float pos[2];

public:
	ball(float vX = 1, float vY = 1, float pX = 0, float pY = 0)
	{
		velocityX = vX;
		velocityY = vY;
		pos[0] = pX;
		pos[1] = pY;
	}

	void bounce(int speedMutiplier)
	{
		velocityX = -velocityX;
		velocityY *= speedMutiplier;
		if (velocityY > 1)
		{
			velocityY = 1;
		}
	}

	void move()
	{
		pos[0] = pos[0] + velocityX;
		pos[1] = pos[1] + velocityY;
	}

	float *getPos()
	{
		return &pos[0];
	}

};

enum side {
	SIDE_LEFT,
	SIDE_RIGHT,
};

enum direction {
	DIRECTION_UP,
	DIRECTION_DOWN,
};


class paddle {
private:
	side sideOfBoard;
	float positionX[ 5 ];


public:
	paddle(side S = SIDE_LEFT, float pX = 0) {
		sideOfBoard = S;
		for (int i = 0; i < 5; i++)
		{
			positionX[i] = i;
		}
	}

	void move(direction d) {
		if (d == DIRECTION_UP)
		{
			for (int i = 0; i < 5; i++)
			{
				positionX[i] = positionX[i]-1;
			}
		}
		if (d == DIRECTION_DOWN)
		{
			for (int i = 0; i < 5; i++)
			{
				positionX[i] = positionX[i] + 1;
			}
		}
	}

	float* getPos()
	{
		return &positionX[0];
	}
};

int main()
{
	ball ball1;
	paddle paddleRight(SIDE_RIGHT);
	paddle paddleLeft(SIDE_LEFT);



    std::cout << "Hello World!\n"; 
}






void drawBoard(int boardSize, )
{
	int columns = 0;
	int rows = 0;
	system("cls");
	while (columns <= boardSize)
	{
		for (rows = 0; rows <= boardSize; rows++)
		{
			for (int g = 0; g <= (*playerPointer).length; g++)
			{
				if ((rows == (*playerPointer).x[g]) && (columns == (*playerPointer).y[g]))
				{
					printf("$");
					goto A;
				}
			}
			if (columns == 0 || columns == boardSize)
			{
				printf("%c", 219);
			}
			else if (rows == 0 || rows == boardSize)
			{
				printf("%c", 219);
			}
			else if ((rows == (*applePos).applePosX) && (columns == (*applePos).applePosY))
			{
				printf("A");
			}
			else if ((rows > 0) && (rows < boardSize))
			{
				printf(" ");
			}
		A:
			short x;
		}
		columns++;
		std::cout << endl;
	}
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
