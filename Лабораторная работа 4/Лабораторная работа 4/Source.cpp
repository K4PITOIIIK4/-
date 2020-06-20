#include "Header.h"
#include <iostream>
#include <ctime>
#include "windows.h"

using namespace std;

Game initGame(char userChar)
{
	Game init;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)		
			init.bord[i][j] = ' ';
	srand(time(0));
	init.isUserTurn = rand() % 2;
	if (init.userChar == 'X')
		init.botChar = '0';
	else
		init.botChar = 'X';
	init.status = PLAY;
	return init;						
}

void updateDisplay(const Game game)
{
	system("cls");
	cout << "|" << " " << "a" << " " << "|" << " " << "b" << " " << "|" << " " << "c" << " " << "|" << endl;
	cout << "  " << "___" << " " << "___" << " " << "___" << endl;
	cout << "1" << "|" << " " << game.bord[0][0] << " " << "|" << " " << game.bord[0][1] << " " << "|" << " " << game.bord[0][2] << " " << "|" << endl;
	cout << "  " << "___" << " " << "___" << " " << "___" << endl;
	cout << "2" << "|" << " " << game.bord[1][0] << " " << "|" << " " << game.bord[1][1] << " " << "|" << " " << game.bord[1][2] << " " << "|" << endl;
	cout << " " << "___" << " " << "___" << " " << "___" << endl;
	cout << "3" << "|" << " " << game.bord[2][0] << " " << "|" << " " << game.bord[2][1] << " " << "|" << " " << game.bord[2][2] << " " << "|" << endl;
	cout << "  " << "---" << " " << "---" << " " << "---" << endl;
	cout << endl;
}

void botTurn(Game* game)
{
	srand(time(0));
	int a, b;
	if ((game->bord[0][0] == ' ') && (game->bord[0][1] == ' ') && (game->bord[0][2] == ' ') && (game->bord[1][0] == ' ') && (game->bord[1][1] == ' ') && (game->bord[1][2] == ' ') && (game->bord[2][0] == ' ') && (game->bord[2][1] == ' ') && (game->bord[2][2] == ' '))
	{
			a = rand() % 2;
			b = rand() % 2;
			game->bord[a][b] = game->botChar;
	}
	else
	if ((game->bord[0][0] == game->botChar) && (game->bord[1][0] == game->botChar) && (game->bord[2][0] == ' '))
		game->bord[2][0] = game->botChar;
	else
	if ((game->bord[0][0] == game->userChar) && (game->bord[1][0] == game->userChar) && (game->bord[2][0] == ' '))
		game->bord[2][0] = game->botChar;
	else
		if ((game->bord[0][0] == game->botChar) && (game->bord[2][0] == game->botChar) && (game->bord[1][0] == ' '))
			game->bord[1][0] = game->botChar;
	else
		if ((game->bord[0][0] == game->userChar) && (game->bord[2][0] == game->userChar) && (game->bord[1][0] == ' '))
			game->bord[1][0] = game->botChar;
		else
			if ((game->bord[1][0] == game->botChar) && (game->bord[2][0] == game->botChar) && (game->bord[0][0] == ' '))
				game->bord[0][0] = game->botChar;
		else
			if ((game->bord[1][0] == game->userChar) && (game->bord[2][0] == game->userChar) && (game->bord[0][0] == ' '))
				game->bord[0][0] = game->botChar;
			else
				if ((game->bord[0][1] == game->botChar) && (game->bord[1][1] == game->botChar) && (game->bord[2][1] == ' '))
					game->bord[2][1] = game->botChar;
			else
				if ((game->bord[0][1] == game->userChar) && (game->bord[1][1] == game->userChar) && (game->bord[2][1] == ' '))
					game->bord[2][1] = game->botChar;
				else
					if ((game->bord[0][1] == game->botChar) && (game->bord[2][1] == game->botChar) && (game->bord[1][1] == ' '))
						game->bord[1][1] = game->botChar;
				else
					if ((game->bord[0][1] == game->userChar) && (game->bord[2][1] == game->userChar) && (game->bord[1][1] == ' '))
						game->bord[1][1] = game->botChar;
					else
						if ((game->bord[2][1] == game->userChar) && (game->bord[1][1] == game->userChar) && (game->bord[0][1] == ' '))
							game->bord[0][1] = game->botChar;
					else
						if ((game->bord[2][1] == game->botChar) && (game->bord[1][1] == game->botChar) && (game->bord[0][1] == ' '))
							game->bord[0][1] = game->botChar;
						else
							if ((game->bord[0][2] == game->botChar) && (game->bord[1][2] == game->botChar) && (game->bord[2][2] == ' '))
								game->bord[2][2] = game->botChar;
						else
							if ((game->bord[0][2] == game->userChar) && (game->bord[1][2] == game->userChar) && (game->bord[2][2] == ' '))
								game->bord[2][2] = game->botChar;
							else
								if ((game->bord[0][2] == game->botChar) && (game->bord[2][2] == game->botChar) && (game->bord[1][2] == ' '))
									game->bord[1][2] = game->botChar;
							else
								if ((game->bord[0][2] == game->userChar) && (game->bord[2][2] == game->userChar) && (game->bord[1][2] == ' '))
									game->bord[1][2] = game->botChar;
								else
									if ((game->bord[2][2] == game->botChar) && (game->bord[1][2] == game->botChar) && (game->bord[0][2] == ' '))
										game->bord[0][2] = game->botChar;
								else
									if ((game->bord[2][2] == game->userChar) && (game->bord[1][2] == game->userChar) && (game->bord[0][2] == ' '))
										game->bord[0][2] = game->botChar;
									else
										if ((game->bord[0][0] == game->botChar) && (game->bord[0][1] == game->botChar) && (game->bord[0][2] == ' '))
											game->bord[0][2] = game->botChar;
									else
										if ((game->bord[0][0] == game->userChar) && (game->bord[0][1] == game->userChar) && (game->bord[0][2] == ' '))
											game->bord[0][2] = game->botChar;
										else
											if ((game->bord[0][1] == game->botChar) && (game->bord[0][2] == game->botChar) && (game->bord[0][0] == ' '))
												game->bord[0][0] = game->botChar;
										else
											if ((game->bord[0][1] == game->userChar) && (game->bord[0][2] == game->userChar) && (game->bord[0][0] == ' '))
												game->bord[0][0] = game->botChar;
											else
												if ((game->bord[0][0] == game->botChar) && (game->bord[0][2] == game->botChar) && (game->bord[0][1] == ' '))
													game->bord[0][1] = game->botChar;
											else
												if ((game->bord[0][0] == game->userChar) && (game->bord[0][2] == game->userChar) && (game->bord[0][1] == ' '))
													game->bord[0][1] = game->botChar;
												else
													if ((game->bord[1][0] == game->botChar) && (game->bord[1][1] == game->botChar) && (game->bord[1][2] == ' '))
														game->bord[1][2] = game->botChar;
												else
													if ((game->bord[1][0] == game->userChar) && (game->bord[1][1] == game->userChar) && (game->bord[1][2] == ' '))
														game->bord[1][2] = game->botChar;
													else
														if ((game->bord[1][1] == game->botChar) && (game->bord[1][2] == game->botChar) && (game->bord[1][0] == ' '))
															game->bord[1][0] = game->botChar;
													else
														if ((game->bord[1][1] == game->userChar) && (game->bord[1][2] == game->userChar) && (game->bord[1][0] == ' '))
															game->bord[1][0] = game->botChar;
														else
															if ((game->bord[1][0] == game->botChar) && (game->bord[1][2] == game->botChar) && (game->bord[1][1] == ' '))
																game->bord[1][1] = game->botChar;
														else
															if ((game->bord[1][0] == game->userChar) && (game->bord[1][2] == game->userChar) && (game->bord[1][1] == ' '))
																game->bord[1][1] = game->botChar;
															else
																if ((game->bord[2][0] == game->botChar) && (game->bord[2][1] == game->botChar) && (game->bord[2][2] == ' '))
																	game->bord[2][2] = game->botChar;
															else
																if ((game->bord[2][0] == game->userChar) && (game->bord[2][1] == game->userChar) && (game->bord[2][2] == ' '))
																	game->bord[2][2] = game->botChar;
																else
																	if ((game->bord[2][1] == game->botChar) && (game->bord[2][2] == game->botChar) && (game->bord[2][0] == ' '))
																		game->bord[2][0] = game->botChar;
																else
																	if ((game->bord[2][1] == game->userChar) && (game->bord[2][2] == game->userChar) && (game->bord[2][0] == ' '))
																		game->bord[2][0] = game->botChar;
																	else
																		if ((game->bord[2][0] == game->botChar) && (game->bord[2][2] == game->botChar) && (game->bord[2][1] == ' '))
																			game->bord[2][1] = game->botChar;
																	else
																		if ((game->bord[2][0] == game->userChar) && (game->bord[2][2] == game->userChar) && (game->bord[2][1] == ' '))
																			game->bord[2][1] = game->botChar;
																		else
																			if ((game->bord[0][0] == game->botChar) && (game->bord[1][1] == game->botChar) && (game->bord[2][2] == ' '))
																				game->bord[2][2] = game->botChar;
																		else
																			if ((game->bord[0][0] == game->userChar) && (game->bord[1][1] == game->userChar) && (game->bord[2][2] == ' '))
																				game->bord[2][2] = game->botChar;
																			else
																				if ((game->bord[1][1] == game->botChar) && (game->bord[2][2] == game->botChar) && (game->bord[0][0] == ' '))
																					game->bord[0][0] = game->botChar;
																			else
																				if ((game->bord[1][1] == game->userChar) && (game->bord[2][2] == game->userChar) && (game->bord[0][0] == ' '))
																					game->bord[0][0] = game->botChar;
																				else
																					if ((game->bord[0][0] == game->botChar) && (game->bord[2][2] == game->botChar) && (game->bord[1][1] == ' '))
																						game->bord[1][1] = game->botChar;
																				else
																					if ((game->bord[0][0] == game->userChar) && (game->bord[2][2] == game->userChar) && (game->bord[1][1] == ' '))
																						game->bord[1][1] = game->botChar;
																					else
																						if ((game->bord[1][1] == game->botChar) && (game->bord[2][0] == game->botChar) && (game->bord[0][2] == ' '))
																							game->bord[0][2] = game->botChar;
																					else
																						if ((game->bord[1][1] == game->userChar) && (game->bord[2][0] == game->userChar) && (game->bord[0][2] == ' '))
																							game->bord[0][2] = game->botChar;
																						else
																							if ((game->bord[1][1] == game->botChar) && (game->bord[0][2] == game->botChar) && (game->bord[2][0] == ' '))
																								game->bord[2][0] = game->botChar;
																						else
																							if ((game->bord[1][1] == game->userChar) && (game->bord[0][2] == game->userChar) && (game->bord[2][0] == ' '))
																								game->bord[2][0] = game->botChar;
																							else
																								if ((game->bord[2][0] == game->botChar) && (game->bord[0][2] == game->botChar) && (game->bord[1][1] == ' '))
																									game->bord[1][1] = game->botChar;
																							else
																								if ((game->bord[2][0] == game->userChar) && (game->bord[0][2] == game->userChar) && (game->bord[1][1] == ' '))
																									game->bord[1][1] = game->botChar;
																								else
																									do
																									{
																										a = rand() % 2;
																										b = rand() % 2;
																										game->bord[a][b] = game->botChar;
																									} while (game->bord[a][b] != game->botChar);
																									game->isUserTurn = !game->isUserTurn;
}

void userTurn(Game* game)
{
	setlocale(LC_ALL, "RUS");
	int ap, bp;
	bool test = true;
		test = false;
		cout << "Ваш ход(сначала столбец, потом )." << endl;
		cin >> ap >> bp;
		ap--;
		bp--;
		if ((game->bord[ap][bp] != 'x') && (game->bord[ap][bp] != 'X') && (game->bord[ap][bp] != '0'))
			game->bord[ap][bp] = game->userChar;
				else
				{
					test = true;
					cout << "error!" << endl;
					Sleep(2000);
					void updateDisplay();
				}
		game->isUserTurn = !game->isUserTurn;
}

bool updateGame(Game* game)
{
	bool win = false;
	if ((game->bord[0][0] == game->userChar) && (game->bord[0][1] == game->userChar) && (game->bord[0][2] == game->userChar))
	{
		cout << "Вы победили!" << endl;
		game->status = USER_WIN;
		win = true;
		system("pause");
		exit(0);
	}
	else
		if ((game->bord[1][0] == game->userChar) && (game->bord[1][1] == game->userChar) && (game->bord[1][2] == game->userChar))
		{
			cout << "Вы победили!" << endl;
			game->status = USER_WIN;
			win = true;
			system("pause");
			exit(0);
		}
		else
			if ((game->bord[2][0] == game->userChar) && (game->bord[2][1] == game->userChar) && (game->bord[2][2] == game->userChar))
			{
				cout << "Вы победили!" << endl;
				game->status = USER_WIN;
				win = true;
				system("pause");
				exit(0);
			}
			else
				if ((game->bord[0][0] == game->userChar) && (game->bord[1][0] == game->userChar) && (game->bord[2][0] == game->userChar))
				{
					cout << "Вы победили!" << endl;
					game->status = USER_WIN;
					win = true;
					system("pause");
					exit(0);
				}
				else
					if ((game->bord[0][1] == game->userChar) && (game->bord[1][1] == game->userChar) && (game->bord[2][1] == game->userChar))
					{
						cout << "Вы победили!" << endl;
						game->status = USER_WIN;
						win = true;
						system("pause");
						exit(0);
					}
					else
						if ((game->bord[0][2] == game->userChar) && (game->bord[1][2] == game->userChar) && (game->bord[2][2] == game->userChar))
						{
							cout << "Вы победили!" << endl;
							game->status = USER_WIN;
							win = true;
							system("pause");
							exit(0);
						}
						else
							if ((game->bord[0][0] == game->userChar) && (game->bord[1][1] == game->userChar) && (game->bord[2][2] == game->userChar))
							{
								cout << "Вы победили!" << endl;
								game->status = USER_WIN;
								win = true;
								system("pause");
								exit(0);
							}
							else
								if ((game->bord[2][0] == game->userChar) && (game->bord[1][1] == game->userChar) && (game->bord[0][2] == game->userChar))
								{
									cout << "Вы победили!" << endl;
									game->status = USER_WIN;
									win = true;
									system("pause");
									exit(0);
								}
								else
	if ((game->bord[0][0] == game->botChar) && (game->bord[0][1] == game->botChar) && (game->bord[0][2] == game->botChar))
	{
		cout << "Вы проиграли!" << endl;
		game->status = BOT_WIN;
		win = true;
		system("pause");
		exit(0);
	}
	else
		if ((game->bord[1][0] == game->botChar) && (game->bord[1][1] == game->botChar) && (game->bord[1][2] == game->botChar))
		{
			cout << "Вы проиграли!" << endl;
			game->status = BOT_WIN;
			win = true;
			system("pause");
			exit(0);
		}
		else
			if ((game->bord[2][0] == game->botChar) && (game->bord[2][1] == game->botChar) && (game->bord[2][2] == game->botChar))
			{
				cout << "Вы проиграли!" << endl;
				game->status = BOT_WIN;
				win = true;
				system("pause");
				exit(0);
			}
			else
				if ((game->bord[0][0] == game->botChar) && (game->bord[1][0] == game->botChar) && (game->bord[2][0] == game->botChar))
				{
					cout << "Вы проиграли!" << endl;
					game->status = BOT_WIN;
					win = true;
					system("pause");
					exit(0);
				}
				else
					if ((game->bord[0][1] == game->botChar) && (game->bord[1][1] == game->botChar) && (game->bord[2][1] == game->botChar))
					{
						cout << "Вы проиграли!" << endl;
						game->status = BOT_WIN;
						win = true;
						system("pause");
						exit(0);
					}
					else
						if ((game->bord[0][2] == game->botChar) && (game->bord[1][2] == game->botChar) && (game->bord[2][2] == game->botChar))
						{
							cout << "Вы проиграли!" << endl;
							game->status = BOT_WIN;
							win = true;
							system("pause");
							exit(0);
						}
						else
							if ((game->bord[0][0] == game->botChar) && (game->bord[1][1] == game->botChar) && (game->bord[2][2] == game->botChar))
							{
								cout << "Вы проиграли!" << endl;
								game->status = BOT_WIN;
								win = true;
								system("pause");
								exit(0);
							}
							else
								if ((game->bord[2][0] == game->botChar) && (game->bord[1][1] == game->botChar) && (game->bord[0][2] == game->botChar))
								{
									cout << "Вы проиграли!" << endl;
									game->status = BOT_WIN;
									win = true;
									system("pause");
									exit(0);
								}
								else
									if ((game->bord[0][0] != ' ') && (game->bord[0][1] != ' ') && (game->bord[0][2] != ' ') && (game->bord[1][0] != ' ') && (game->bord[1][1] != ' ') && (game->bord[1][2] != ' ') && (game->bord[2][0] != ' ') && (game->bord[2][1] != ' ') && (game->bord[2][2] != ' ') && (game->status == NOT_WIN))
									{
										cout << "Ничья!" << endl;
										game->status = NOT_WIN;
										win = true;
										system("pause");
										exit(0);
									}
	return win;
}