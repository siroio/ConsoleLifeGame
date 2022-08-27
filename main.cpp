#include <iostream>
#include <windows.h>
#include "Board.h"

using namespace std;

int main(char* args)
{
	const Board board(10, 10);
	while (true)
	{
		system("cls");
		for (auto&& h : board.GetBoard())
		{
			for(auto&& w : h)
			{
				cout << w.Draw();
			}
			cout << endl;
		}
		Sleep(1000);
	}
}
