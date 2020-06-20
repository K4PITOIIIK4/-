#include <iostream>
#include <ctime>
#include "Header.h"
#include "windows.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	Game game;
	char sign;
	cout << "������� ������ ������� ������ ������ (X ��� 0, ������ ������� �����������)" << endl;
	cin >> sign;
	while ((sign != 'X') && (sign != '0') && (sign != 'x'))
	{
		sign = char(toupper(sign));
		cout << "������!" << endl;
		cin >> sign;
	}
	game = initGame(sign);
	updateDisplay(game);
	while (!updateGame(&game))
	{
		if (game.isUserTurn == true)
			userTurn(&game);
		else
			botTurn(&game);
		updateDisplay(game);
	}
}