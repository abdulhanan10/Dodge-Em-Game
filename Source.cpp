#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>
#include<Windows.h>
#include<fstream>
using namespace std;
void display(string str[25][70])
{

	//this loop is for spaces
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 70; j++)
		{
			str[i][j] = " ";
		}
	}
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 70; j++)
		{
			//for column one above and below
			if (((i == 0 || i == 24) && ((j > 0 && j < 30) || (j > 40 && j < 70))))
			{
				str[i][j] = "*";
			}
			else
			{
				//for row one above and below
				if ((j == 0 || j == 69) && ((i >= 0 && i < 10) || (i >= 15 && i < 25)))
				{
					str[i][j] = "*";
				}
			}
			//for column two above and below, 
			//(i is increased by 2 in first condition or i is decreassed by 2 in second condition) and, 
			//(j is increased by 5 in first condition and in second condition j reamins same) or, 
			//(j remains same in first condition and j is decreased by 5 in second condition).
			if (((i == 2 || i == 22) && ((j > 5 && j < 30) || (j > 40 && j < 65))))
			{
				str[i][j] = "*";
			}
			else
			{
				//for row two above and below,
				//(j is increased by 5 in first condition  or j is decreased by 5 in second condition) and, 
				//(i is increased by 2 in first condition and i remain same in second condition) or, 
				//(i remain same in first condition and i is decreased by 2 in second condition).
				if ((j == 5 || j == 64) && ((i >= 2 && i < 10) || (i >= 15 && i < 23)))
				{
					str[i][j] = "*";
				}
			}
			//for column three above and below,
			//(i is increased by 2 in first condition or i is decreassed by 2 in second condition) and, 
			//(j is increased by 5 in first condition and in second condition j reamins same) or, 
			//(j remains same in first condition and j is decreased by 5 in second condition).
			if (((i == 4 || i == 20) && ((j > 10 && j < 30) || (j > 40 && j < 60))))
			{
				str[i][j] = "*";
			}
			else
			{
				//for row three above and below,
				//(j is increased by 5 in first condition  or j is decreased by 5 in second condition) and, 
				//(i is increased by 2 in first condition and i remain same in second condition) or, 
				//(i remain same in first condition and i is decreased by 2 in second condition).
				if ((j == 10 || j == 59) && ((i >= 4 && i < 10) || (i >= 15 && i < 21)))
				{
					str[i][j] = "*";
				}
			}
			//for column four above and below,
			//(i is increased by 2 in first condition or i is decreassed by 2 in second condition) and, 
			//(j is increased by 5 in first condition and in second condition j reamins same) or, 
			//(j remains same in first condition and j is decreased by 5 in second condition).
			if (((i == 6 || i == 18) && ((j > 15 && j < 30) || (j > 40 && j < 55))))
			{
				str[i][j] = "*";
			}
			else
			{
				//for row four above and below,
				//(j is increased by 5 in first condition  or j is decreased by 5 in second condition) and, 
				//(i is increased by 2 in first condition and i remain same in second condition) or, 
				//(i remain same in first condition and i is decreased by 2 in second condition).
				if ((j == 15 || j == 54) && ((i >= 6 && i < 10) || (i >= 15 && i < 19)))
				{
					str[i][j] = "*";
				}

			}
			//for column five above and below,
			//(i is increased by 2 in first condition or i is decreassed by 2 in second condition) and, 
			//(j is increased by 5 in first condition and in second condition j reamins same) or, 
			//(j remains same in first condition and j is decreased by 5 in second condition).
			if (((i == 8 || i == 16) && ((j > 20 && j < 30) || (j > 40 && j < 50))))
			{
				str[i][j] = "*";
			}
			else
			{
				//for row five above and below,
				//(j is increased by 5 in first condition  or j is decreased by 5 in second condition) and, 
				//(i is increased by 2 in first condition and i remain same in second condition) or, 
				//(i remain same in first condition and i is decreased by 2 in second condition).
				if ((j == 20 || j == 49) && ((i >= 8 && i < 10) || (i >= 15 && i < 17)))
				{
					str[i][j] = "*";
				}
			}
			//this nested if will print the points that the two cars has to collect
			if (((i % 2) && ((i >= 0 && i <= 10) || (i >= 15 && i < 25))))
			{
				//in every condition j is increased by 5 in first condition and in second condition also j is increased by 5
				if (((j > 1 && j < 4) || (j > 6 && j < 9) || (j > 11 && j < 14) || (j > 16 && j < 19) || (j > 21 && j < 24) || (j > 45 && j < 48) || (j > 50 && j < 53) || (j > 55 && j < 58) || (j > 60 && j < 63) || (j > 65 && j < 68)))
				{
					str[i][j] = "-";
				}
			}
			//this will print a box at the center of the game 
			if ((i == 12))
			{
				if ((j > 30) && (j < 40))
				{
					str[i][j] = "=";
				}
				else if (j == 30 || j == 40)
				{
					str[i][j] = "|";
				}
			}

		}
	}
}
void car(string str[][70], int start, int i, int pos)
{
	str[start][i] = "^";
	str[start][i + 1] = "^";
	if (i != pos)
	{
		str[start][i + 2] = ' ';
		str[start][i + 3] = ' ';
	}
}
void ocar(string str[][70], int start, int i, int pos)
{
	string temp, temp1;
	temp = str[start][i];
	temp1 = str[start][i + 1];
	str[start][i] = "^";
	str[start][i + 1] = "^";
	if (i != pos)
	{
		str[start][i + 2] = temp;
		str[start][i + 3] = temp1;
	}

}
void show(string str[][70])
{
	for (int i = 0; i < 25; i++)
	{
		cout << setw(25) << ' ';
		for (int j = 0; j < 70; j++)
		{
			cout << str[i][j];
		}
		cout << endl;
	}
}
//Justing moving the cars
void Oleft(string temp[][70], int& Start, int& Pos)
{
	temp[Start][Pos] = '^';
	temp[Start][Pos + 1] = '^';
	//For border
	if (Pos != 66)
	{
		temp[Start][Pos + 3] = ' ';
		temp[Start][Pos + 2] = ' ';
	}
	show(temp);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
	Pos--;
}
void Oright(string temp[][70], int& Start, int& Pos)
{
	temp[Start][Pos] = '^';
	temp[Start][Pos + 1] = '^';
	//For border
	if (Pos != 2)
	{
		temp[Start][Pos - 1] = ' ';
		temp[Start][Pos - 2] = ' ';
	}
	show(temp);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
	Pos++;
}
void Oup(string temp[][70], int& Start, int& Pos)
{
	temp[Start][Pos] = '^';
	temp[Start][Pos + 1] = '^';
	if (Start != 23)
	{
		temp[Start + 1][Pos] = ' ';
		temp[Start + 1][Pos + 1] = ' ';
	}
	show(temp);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
	Start--;
}
void Odown(string temp[][70], int& Start, int& Pos)
{
	temp[Start][Pos] = '^';
	temp[Start][Pos + 1] = '^';
	if (Start != 1)
	{
		temp[Start - 1][Pos] = ' ';
		temp[Start - 1][Pos + 1] = ' ';
	}
	show(temp);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
	Start++;
}
// Helping the operation of movement cleared by their names.
//Logic in this that for opponent taking the turn in space region, start must be equal to start for 1st opponent car to reach to the player car in up down turns.
// For left right, logic is that it is based on the horizontal distance of them.
// For 2nd opponent car logic is opposite due to the starting position of car.
void DSwitch(string temp[][70], int pos, int& Pos, int& Start)
{
	switch (pos)
	{
	case 7:
	{
		while (abs(Pos - pos) != 54)
		{
			Oleft(temp, Start, Pos);
		}
		break;
	}
	case 12:
	{
		while (abs(Pos - pos) != 44)
		{
			Oleft(temp, Start, Pos);
		}
		break;
	}
	case 17:
	{
		while (abs(Pos - pos) != 34)
		{
			Oleft(temp, Start, Pos);
		}
		break;
	}
	case 22:
	{
		while (abs(Pos - pos) != 24)
		{
			Oleft(temp, Start, Pos);
		}
		break;
	}
	default:
	{
		break;
	}
	}
}
void OLSwitch(string temp[][70], int start, int& Pos, int& Start)
{
	switch (start)
	{
	case 3:
	{
		while (abs(Start - start) != 18)
		{
			Oup(temp, Start, Pos);
		}
		break;
	}
	case 5:
	{
		while (abs(Start - start) != 14)
		{
			Oup(temp, Start, Pos);
		}
		break;
	}
	case 7:
	{
		while (abs(Start - start) != 10)
		{
			Oup(temp, Start, Pos);
		}
		break;
	}
	case 9:
	{
		while (abs(Start - start) != 6)
		{
			Oup(temp, Start, Pos);
		}
		break;
	}
	default:
	{
		break;
	}
	}
}
void USwitch(string temp[][70], int pos, int& Pos, int& Start)
{
	switch (pos)
	{
	case 61:
	{
		while (abs(Pos - pos) != 54)
		{
			Oright(temp, Start, Pos);
		}
		break;
	}
	case 56:
	{
		while (abs(Pos - pos) != 44)
		{
			Oright(temp, Start, Pos);
		}
		break;
	}
	case 51:
	{
		while (abs(Pos - pos) != 34)
		{
			Oright(temp, Start, Pos);
		}
		break;
	}
	case 46:
	{
		while (abs(Pos - pos) != 24)
		{
			Oright(temp, Start, Pos);
		}
		break;
	}
	default:
	{
		break;
	}
	}
}
void ORSwitch(string temp[][70], int start, int& Pos, int& Start)
{
	switch (start)
	{
	case 21:
	{
		while (abs(Start - start) != 18)
		{
			Odown(temp, Start, Pos);
		}
		break;
	}
	case 19:
	{
		while (abs(Start - start) != 14)
		{
			Odown(temp, Start, Pos);
		}
		break;
	}
	case 17:
	{
		while (abs(Start - start) != 10)
		{
			Odown(temp, Start, Pos);
		}
		break;
	}
	case 15:
	{
		while (abs(Start - start) != 6)
		{
			Odown(temp, Start, Pos);
		}
		break;
	}
	default:
	{
		break;
	}
	}
}
void LSwitch(string temp[][70], int start, int& Pos, int& Start)
{
	while (abs(Start - start) != 0)
	{
		Oup(temp, Start, Pos);
	}
}
void OUSwitch(string temp[][70], int pos, int& Pos, int& Start)
{
	while (abs(Pos - pos) != 0)
	{
		Oleft(temp, Start, Pos);
	}
}
void RSwitch(string temp[][70], int start, int& Pos, int& Start)
{
	static int i = 0;
	while (abs(Start - start) != 0)
	{
		Odown(temp, Start, Pos);
	}
}
void ODSwitch(string temp[][70], int pos, int& Pos, int& Start)
{
	while (abs(Pos - pos) != 0)
	{
		Oright(temp, Start, Pos);
	}
}
void Opponent1(string str[][70], int& Start, int& Pos, string temp[][70], int start, int pos, int level, bool& o_left, bool& o_right, bool& o_down, bool& o_up)
{
	static char ch = 'a';
	static int level1 = level;
	//Just eleminating the static glitch coming thanks to menu driving
	if (start == 1 && pos == 31 && Start == 23 && Pos == 30)
	{
		ch = 'a';
	}
	if (level - level1 != 0)
	{
		ch = 'a';
		level1 = level;
	}
	if (ch == 's')
	{
		//move the 2nd opponent to take left wards turn based on the proximity of player car turning left 
		if ((o_right) && level == 4 && (Start > 10 && Start < 15))
		{
			OUSwitch(temp, pos, Pos, Start);
			o_right = false;
		}
		//simple downward movement
		else
		{
			Start++;
			temp[Start][Pos] = '^';
			temp[Start][Pos + 1] = '^';
		}
		if (temp[Start + 1][Pos] == "*")
		{
			ch = 'a';
		}
	}
	else if (ch == 'a')
	{
		//move the 2nd opponent to take up ward turn based on the proximity of player car turning down
		if ((o_down) && level == 4 && (Pos > 30 && Pos < 40))
		{
			OLSwitch(temp, start, Pos, Start);
			o_down = false;
		}
		//Simple left movement
		else
		{
			temp[Start][Pos] = '^';
			temp[Start][Pos - 1] = '^';
			Pos--;
		}
		if (temp[Start][Pos - 2] == "*")
		{
			ch = 'w';
		}
	}
	else if (ch == 'w')
	{
		//move the 2nd opponent to take  right turn based on the proximity of player car turning right
		if (o_left && level == 4 && (Start > 10 && Start < 15))
		{
			ODSwitch(temp, pos, Pos, Start);
			o_left = false;
		}
		//Simple up movement
		else
		{
			Start--;
			temp[Start][Pos] = '^';
			temp[Start][Pos + 1] = '^';
		}
		if (temp[Start - 1][Pos] == "*" || Start == 1)
		{
			ch = 'd';
		}
	}
	else if (ch == 'd')
	{
		//move the 2nd opponent to take down ward turn based on the proximity of player car turning up 
		if (o_up && level == 4 && (Pos > 30 && Pos < 40))
		{
			ORSwitch(temp, start, Pos, Start);
			o_up = false;
		}
		//simple right movement
		else
		{
			temp[Start][Pos] = '^';
			temp[Start][Pos + 1] = '^';
			Pos++;
		}
		if (temp[Start][Pos + 3] == "*" || temp[Start][Pos + 2] == "*")
		{
			ch = 's';
		}
	}
	else
	{
	}
}
//Specified for outer box as explained by level one
void Opponent(string str[][70], int& Start, int& Pos, string temp[][70], int start, int pos, int level, bool& o_left, bool& o_right, bool& o_down, bool& o_up)
{
	static char ch = 'd';
	static int level1 = level;
	//Just eleminating the static glitch coming thanks to menu driving
	if (level - level1 != 0)
	{
		ch = 'd';
		level1 = level;
	}
	if (start == 1 && pos == 31 && Start == 1 && Pos == 39)
	{
		ch = 'd';
	}
	for (int i = 0; i < 25; i++)
	{
		for (int j = 0; j < 70; j++)
		{
			temp[i][j] = str[i][j];
		}
	}
	//move it down
	if (ch == 's')
	{
		//condition to move it to left side at space region based on proximity of player taking right turn
		if ((o_left) && level >= 2 && (Start > 10 && Start < 15))
		{
			DSwitch(temp, pos, Pos, Start);
			if (level != 4)
			{
				o_left = false;
			}
		}
		//Simple movement of down
		else
		{
			Start++;
			temp[Start][Pos] = '^';
			temp[Start][Pos + 1] = '^';
		}
		if (temp[Start + 1][Pos] == "*")
		{
			ch = 'a';
		}
	}
	//move it left
	else if (ch == 'a')
	{
		//condition to move it to up at space region based on proximity of player moving up
		if ((o_up) && level >= 1 && (Pos > 30 && Pos < 40))
		{
			LSwitch(temp, start, Pos, Start);
			if (level != 4)
			{
				o_up = false;
			}
		}
		//Simple movement of left
		else
		{
			temp[Start][Pos] = '^';
			temp[Start][Pos - 1] = '^';
			Pos--;
		}
		if (temp[Start][Pos - 2] == "*")
		{
			ch = 'w';
		}
	}
	//move it up
	else if (ch == 'w')
	{
		//condition to move it right at space region based on proximity of player moving left
		if (o_right && level >= 2 && (Start > 10 && Start < 15))
		{
			USwitch(temp, pos, Pos, Start);
			if (level != 4)
			{
				o_right = false;
			}
		}
		//Simple movement of up
		else
		{
			Start--;
			temp[Start][Pos] = '^';
			temp[Start][Pos + 1] = '^';
		}
		if (temp[Start - 1][Pos] == "*" || Start == 1)
		{
			ch = 'd';
		}
	}
	//move it left
	else if (ch == 'd')
	{
		//condition to move it down  to  at space region based on proximity of player moving down
		if (o_down && level >= 1 && (Pos > 30 && Pos < 40))
		{
			RSwitch(temp, start, Pos, Start);
			if (level != 4)
			{
				o_down = false;
			}
		}
		//Simple movement of up right
		else
		{
			temp[Start][Pos] = '^';
			temp[Start][Pos + 1] = '^';
			Pos++;
		}
		if (temp[Start][Pos + 3] == "*" || temp[Start][Pos + 2] == "*")
		{
			ch = 's';
		}
	}
	else
	{
	}
}
//Calls of function defined at end
void gotoxy(int x, int y);
void read(int arr[]);
void showArray(int arr[]);
void help()
{
	//Guidelines
	int delay = 20000;
	char chioce = ' ';
	system("cls");
	gotoxy(40, 8);
	cout << "---------Help---------" << endl;
	cout << endl << endl;
	cout << "1.Car will be controlled by a, w,s,d." << endl;
	cout << "2.a for left, w for up, d for right, s for down" << endl;
	cout << "3.At junctions if you wish to stop the car and move to other road way, do the following:\n";
	cout << "      i.Press x \n";
	cout << "     ii.Press direction keys constantly as long as you reach the right roadway\n";
	cout << "    iii.Press x and double press the desired direction key.\n";
	cout << "4.At each corner, you are required to press the desired direction key for confirmation.\n";
	cout << "5.If you want to pause press P, and then press the number of your required operation.\n";
	cout << "6.You will have three lives and will be given full of rewards arena at each loss.\n";
	cout << "7.Game will be over at the end of level 4 or loss of 4 lives.\n";
	cout << "8.You won at the end of level 4.\n";
	cout << "9. Opponent car can move at top and bottom at level one and in level 2 it can move in every direction. Same is for above two levels.\n";
	cout << "Enjoy the Game and pardon us for any type of glitches you encountered." << endl;
	cout << "Press i to go to menu" << endl;
	Sleep(1000);
	if (_kbhit())
	{
		chioce = _getch();
		if (chioce == 'i')
		{
			delay = 0;
		}
	}
	Sleep(delay);
}
void pause(bool& exit, bool& exit1, bool& exit2)
{
	char chioce = ' ';
	int arr[100], delay = 20000;
	system("cls");
	gotoxy(56, 10);
	cout << "1.Start a new game" << endl;
	gotoxy(55, 11);
	cout << "2.See highest scores" << endl;
	gotoxy(61, 12);
	cout << "3.Help" << endl;
	gotoxy(61, 13);
	cout << "4.Exit" << endl;
	gotoxy(60, 14);
	cout << "5.Continue" << endl;
	Sleep(1000);
	//Return to menu
	if (_kbhit())
	{
		delay = 0;
	}
	Sleep(delay);
	if (_kbhit())
	{
		chioce = _getch();
		switch (chioce)
		{
		case '1':
		{
			//new game
			system("cls");
			exit = true;
			break;
		}
		case '2':
		{
			//scores
			read(arr);
			showArray(arr);
			pause(exit, exit1, exit2);
			break;
		}
		case '3':
		{
			//guidelines
			help();
			pause(exit, exit1, exit2);
			break;
		}
		case '4':
		{
			//exit
			exit1 = true;
			break;
		}
		case '5':
		{
			//cotinue
			system("cls");
			exit2 = true;
			break;
		}
		default:
		{
			break;
		}
		}
	}
}
//Function to move left
void left(string str[][70], int& start, int& pos, char& stop, int& score, int& Start, int& Pos, int& lives, int level, int& count, int& Scount, bool& o_left, bool& o_right, bool& o_down, bool& o_up, bool& exit, bool& exit1, bool& exit2, int& Ostart, int& Opos)
{
	static string temp[25][70];
	int	turn1 = pos;
	char ch = ' ', Stop = ' ';
	char chioce = ' ';
	// loop is moving the car left by changing column
	for (int i = turn1; i > 1; i--)
	{
		// border condition
		if (str[start][i - 1] == "*")
		{
			break;
		}
		//For score
		if ((str[start][i - 1] == "-") && (str[start][i - 2] == "-"))
		{
			score++;
		}
		//Stop the car at space
		if (i == 38)
		{
			Sleep(100);
			Stop = _getch();
			stop = Stop;
			if (Stop == 'x')
			{
				break;
			}
		}
		//movement of car
		car(str, start, i, pos);
		//opponent cars
		Opponent(str, Start, Pos, temp, start, pos, level, o_left, o_right, o_down, o_up);
		if (level == 4)
		{
			Opponent1(str, Ostart, Opos, temp, start, pos, level, o_left, o_right, o_down, o_up);
		}
		//lives loss
		if ((Start == start) && ((Pos == i) || (Pos == i + 1)))
		{
			lives--;
		}
		if (((Ostart == start) && ((Opos == i) || (Opos == i + 1))) && level == 4)
		{
			lives--;
		}
		if (!(lives))
		{
			break;
		}
		//Outputting in real-time
		show(str);
		//to smooth out the end of columns
		if (i == 1)
		{
			str[start][i + 2] = ' ';
			str[start][i + 3] = ' ';
		}
		pos = i;
		cout << setw(32) << "Lives: " << setw(1) << lives;
		cout << setw(62) << "Score: " << setw(2) << score << endl;
		cout << setw(63) << "Level: " << setw(2) << level << endl;
		//A function that modify the cursor
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
		show(temp);
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
		//Scoring condition
		if (score % 100 == 99)
		{
			Scount = 0;
		}
		if (score % 100 == 0 && score != 0 && Scount == 0)
		{
			break;
		}
		//reward refill
		if (lives == 2 && count == 0)
		{
			display(str);
			count++;
		}
		if (lives == 1 && count == 1)
		{
			display(str);
			count++;
		}
		//pause
		if (_kbhit())
		{
			chioce = _getch();
			if (chioce == 'P')
			{
				pause(exit, exit1, exit2);
				if (exit || exit1)
				{
					system("cls");
					break;
				}
				if (exit2)
				{
					system("cls");
					continue;
				}
			}
		}
	}
}
//To move the car right
void right(string str[][70], int& start, int& pos, char& stop, int& score, int& Start, int& Pos, int& lives, int level, int& count, int& Scount, bool& o_left, bool& o_right, bool& o_down, bool& o_up, bool& exit, bool& exit1, bool& exit2, int& Ostart, int& Opos)
{
	static string temp[25][70];
	int	turn1 = pos;
	char ch = ' ', Stop = ' ';
	char chioce = ' ';
	//loop to go through the column in right direction
	for (int i = turn1; i < 67; i++)
	{
		//border condition
		if (str[start][i + 2] == "*")
		{
			break;
		}
		//For score
		if ((str[start][i + 2] == "-") && (str[start][i + 1] == "-"))
		{
			score++;
		}
		//To stop the car at space region
		if (i == 31)
		{
			Sleep(100);
			Stop = _getch();
			stop = Stop;
			if (Stop == 'x')
			{
				break;
			}
		}
		str[start][i] = '^';
		str[start][i + 1] = '^';
		//For border
		if (i != pos)
		{
			str[start][i - 1] = ' ';
			str[start][i - 2] = ' ';
		}
		//Opponent cars
		Opponent(str, Start, Pos, temp, start, pos, level, o_left, o_right, o_down, o_up);
		if (level == 4)
		{
			Opponent1(str, Ostart, Opos, temp, start, pos, level, o_left, o_right, o_down, o_up);
		}
		//Lives loss
		if ((Start == start) && ((Pos == i) || (Pos == i + 1)))
		{
			lives--;
		}
		if (((Ostart == start) && ((Opos == i) || (Opos == i + 1))) && level == 4)
		{
			lives--;
		}
		if (!(lives))
		{
			break;
		}
		show(str);
		//to smooth out the corner
		if (i == 69)
		{
			str[1][i] = ' ';
			str[1][i - 1] = ' ';
		}
		pos = i;
		cout << setw(32) << "Lives: " << setw(1) << lives;
		cout << setw(62) << "Score: " << setw(2) << score << endl;
		cout << setw(63) << "Level: " << setw(2) << level << endl;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
		show(temp);
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
		//Scoring condition
		if (score % 100 == 99)
		{
			Scount = 0;
		}
		if (score % 100 == 0 && score != 0 && Scount == 0)
		{
			break;
		}
		//reward refill
		if (lives == 2 && count == 0)
		{
			display(str);
			count++;
		}
		if (lives == 1 && count == 1)
		{
			display(str);
			count++;
		}
		//pause
		if (_kbhit())
		{
			chioce = _getch();
			if (chioce == 'P')
			{
				pause(exit, exit1, exit2);
				if (exit || exit1)
				{
					system("cls");
					break;
				}
				if (exit2)
				{
					system("cls");
					continue;
				}
			}
		}
	}
}
//To move the car downwards
void down(string str[][70], int& start, int& pos, char& stop, int& score, int& Start, int& Pos, int& lives, int level, int& count, int& Scount, bool& o_left, bool& o_right, bool& o_down, bool& o_up, bool& exit, bool& exit1, bool& exit2, int& Ostart, int& Opos)
{
	int	turn = start;
	static string temp[25][70];
	char ch = ' ', Stop = ' ';
	char chioce = ' ';
	//loop to transverse rows
	for (int i = turn; i < 24; i++)
	{
		//border
		if (str[i][pos] == "*" || str[i][pos + 1] == "*")
		{
			break;
		}
		//score
		if (str[i][pos] == "-" || str[i][pos + 1] == "-")
		{
			score++;
		}
		//to stop the car at space for decision
		if (i == 11)
		{
			Sleep(100);
			Stop = _getch();
			stop = Stop;
			if (Stop == 'x')
			{
				break;
			}
		}
		str[i][pos] = '^';
		str[i][pos + 1] = '^';
		if (i != start)
		{

			str[i - 1][pos] = ' ';
			str[i - 1][pos + 1] = ' ';
		}
		//For 1st opponent car 
		Opponent(str, Start, Pos, temp, start, pos, level, o_left, o_right, o_down, o_up);
		//For 2nd one
		if (level == 4)
		{
			Opponent1(str, Ostart, Opos, temp, start, pos, level, o_left, o_right, o_down, o_up);
		}
		//lives loss for both of the cars
		if ((abs(Start - start == 0)) && ((Pos == pos) || (Pos == pos + 1)))
		{
			lives--;
		}
		if ((abs(Ostart - start == 0)) && level == 4)
		{
			lives--;
		}
		//breaking at 0 lives
		if (!(lives))
		{
			break;
		}
		show(str);
		//to smooth out the corner
		if (i == 10 && pos == 2)
		{
			str[i - 1][pos] = ' ';
			str[i - 1][pos + 1] = ' ';
		}
		start = i;
		cout << setw(32) << "Lives: " << setw(1) << lives;
		cout << setw(62) << "Score: " << setw(2) << score << endl;
		cout << setw(63) << "Level: " << setw(2) << level << endl;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
		show(temp);
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
		// Scoring condition as explained in up function
		if (score % 100 == 99)
		{
			Scount = 0;
		}
		if (score % 100 == 0 && score != 0 && Scount == 0)
		{
			break;
		}
		//Rewards refill
		if (lives == 2 && count == 0)
		{
			display(str);
			count++;
		}
		if (lives == 1 && count == 1)
		{
			display(str);
			count++;
		}
		//Pause
		if (_kbhit())
		{
			chioce = _getch();
			if (chioce == 'P')
			{
				pause(exit, exit1, exit2);
				if (exit || exit1)
				{
					system("cls");
					break;
				}
				if (exit2)
				{
					system("cls");
					continue;
				}
			}
		}
	}
}
//to move the car upwards
void up(string str[][70], int& start, int& pos, char& stop, int& score, int& Start, int& Pos, int& lives, int level, int& count, int& Scount, bool& o_left, bool& o_right, bool& o_down, bool& o_up, bool& exit, bool& exit1, bool& exit2, int& Ostart, int& Opos)
{
	int	turn = start;
	static string temp[25][70];
	char ch = ' ', Stop = ' ';
	char chioce = ' ';
	//loop to transverse through rows
	for (int i = turn; i > 0; i--)
	{
		//border
		if (str[i][pos] == "*" || str[i][pos + 1] == "*")
		{
			break;
		}
		//score
		if (str[i][pos] == "-" || str[i][pos + 1] == "-")
		{
			score++;
		}
		//To stop the car at space region
		if (i == 13)
		{
			Sleep(100);
			Stop = _getch();
			stop = Stop;
			if (Stop == 'x')
			{
				break;
			}
		}
		str[i][pos] = '^';
		str[i][pos + 1] = '^';
		if (i != start)
		{
			str[i + 1][pos] = ' ';
			str[i + 1][pos + 1] = ' ';
		}
		//First opponent car
		Opponent(str, Start, Pos, temp, start, pos, level, o_left, o_right, o_down, o_up);
		//Second Opponent car
		if (level == 4)
		{
			Opponent1(str, Ostart, Opos, temp, start, pos, level, o_left, o_right, o_down, o_up);
		}
		//Removing lives for 1st car
		if ((abs(Start - start == 0)) && ((Pos == pos) || (Pos == pos + 1)))
		{
			lives--;
		}
		//Removing lives for 2nd car in level 4
		if ((abs(Ostart - start == 0)) && level == 4)
		{
			lives--;
		}
		//breaking at loss of lives
		if (!(lives))
		{
			break;
		}
		show(str);
		//boundary condition  
		if (i == 1)
		{
			str[i + 1][pos] = ' ';
			str[i + 1][pos + 1] = ' ';
		}
		start = i;
		cout << setw(32) << "Lives: " << setw(1) << lives;
		cout << setw(62) << "Score: " << setw(2) << score << endl;
		cout << setw(63) << "Level: " << setw(2) << level << endl;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
		show(temp);
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
		//Concerning for score break
		if (score % 100 == 99)
		{
			Scount = 0;
		}
		if (score % 100 == 0 && score != 0 && Scount == 0)
		{
			break;
		}
		//loss of life rewards refilling
		if (lives == 2 && count == 0)
		{
			display(str);
			count++;
		}
		if (lives == 1 && count == 1)
		{
			display(str);
			count++;
		}
		//Pausing condition
		if (_kbhit())
		{
			chioce = _getch();
			if (chioce == 'P')
			{
				pause(exit, exit1, exit2);
				if (exit || exit1)
				{
					system("cls");
					break;
				}
				if (exit2)
				{
					system("cls");
					continue;
				}
			}
		}
	}

}
void sub_decision(string str[][70], int& start, int& pos, bool& o_left, bool& o_right, bool& o_down, bool& o_up);
void decision(string str[][70], int& start, int& pos, int& Start, int& Pos, int& lives, int& score, int level, int& Scount, bool& exit, bool& exit1, bool& exit2, int& Ostart, int& Opos)
{
	static int count = 0;
	char ch = ' ', Stop = ' ';
	static bool o_left = false, o_right = false, o_up = false, o_down = false;
	//To get the will of user for directions
	if (_kbhit())
	{
		ch = _getch();
		switch (ch)
		{
			//for left; to move it leftwards
		case 'a':
		{
			left(str, start, pos, Stop, score, Start, Pos, lives, level, count, Scount, o_left, o_right, o_up, o_down, exit, exit1, exit2, Ostart, Opos);
			if (Stop == 'x')
			{
				sub_decision(str, start, pos, o_left, o_right, o_up, o_down);
			}
			break;
		}
		//for down; to move it downwards
		case 's':
		{
			down(str, start, pos, Stop, score, Start, Pos, lives, level, count, Scount, o_left, o_right, o_up, o_down, exit, exit1, exit2, Ostart, Opos);
			if (Stop == 'x')
			{
				sub_decision(str, start, pos, o_left, o_right, o_up, o_down);
			}
			break;
		}
		//For right, to move it rightwards
		case 'd':
		{
			right(str, start, pos, Stop, score, Start, Pos, lives, level, count, Scount, o_left, o_right, o_up, o_down, exit, exit1, exit2, Ostart, Opos);
			if (Stop == 'x')
			{
				sub_decision(str, start, pos, o_left, o_right, o_up, o_down);
			}
			break;
		}
		//for up; to move the car in upward direction
		case 'w':
		{
			up(str, start, pos, Stop, score, Start, Pos, lives, level, count, Scount, o_left, o_right, o_up, o_down, exit, exit1, exit2, Ostart, Opos);
			if (Stop == 'x')
			{
				sub_decision(str, start, pos, o_left, o_right, o_up, o_down);
			}
			break;
		}
		default:
		{
			break;
		}
		}
	}
}
void sub_decision(string str[][70], int& start, int& pos, bool& o_left, bool& o_right, bool& o_down, bool& o_up)
{
	int i = 1;
	char ch = ' ', CH = ' ';
	// to take subdecision at space region
	// x is to stop the car and to break this loop
	while ((ch != 'x') && (i < 67) && i > 0)
	{
		// a for left, d for right, w for up, s for down.
		Sleep(1500);
		if (_kbhit())
		{
			ch = _getch();
			switch (ch)
			{
			case 'd':
			{
				CH = ch;
				o_left = true;
				// move car on command
				str[start][pos + i] = '^';
				str[start][pos + i + 1] = '^';
				str[start][pos + i - 1] = ' ';
				str[start][pos + i - 2] = ' ';
				show(str);
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
				break;
			}
			case 's':
			{
				CH = ch;
				o_down = true;
				str[start + i][pos] = '^';
				str[start + i][pos + 1] = '^';
				str[start + i - 1][pos] = ' ';
				str[start + i - 1][pos + 1] = ' ';
				show(str);
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
				break;
			}
			case 'a':
			{
				CH = ch;
				o_right = true;
				str[start][pos - i] = '^';
				str[start][pos - i - 1] = '^';
				str[start][pos - i + 1] = ' ';
				str[start][pos - i + 2] = ' ';
				show(str);
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
				break;
			}
			case 'w':
			{
				CH = ch;
				o_up = true;
				str[start - i][pos] = '^';
				str[start - i][pos + 1] = '^';
				str[start - i + 1][pos] = ' ';
				str[start - i + 1][pos + 1] = ' ';
				show(str);
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
				break;
			}
			default:
			{
				break;
			}
			}
		}
		i++;
	}
	// A switch that determines a, w, s,d what to return for next procedure
	switch (CH)
	{
	case 'd':
	{
		pos = pos + i - 2;
		break;
	}
	case 'w':
	{
		start -= i - 2;
		break;
	}
	case 'a':
	{
		pos = pos - i + 1;
		break;
	}
	case 's':
	{
		start += i - 2;
		break;
	}
	default:
	{
		break;
	}
	}
}
//to sum up the things
void gameplay(int& score, int level, int& Scount, bool& exit, bool& exit1, bool& exit2, int& lives)
{
	int count = 0;
	//initial varaibles of position of cars
	int start = 1, pos = 31, Start = 1, Pos = 39, Ostart = 23, Opos = 30;
	static string str[25][70];
	//infinte loop 
	while (1 && lives)
	{
		if (count == 0)
		{
			display(str);
			count += 1;
		}
		Sleep(100);
		//Making decision of direction
		decision(str, start, pos, Start, Pos, lives, score, level, Scount, exit, exit1, exit2, Ostart, Opos);
		//Score of 100 break
		if (score % 100 == 0 && score != 0 && Scount == 0)
		{
			break;
		}
		//Menu break;
		if (exit || exit1)
		{
			break;
		}
		//Continue of pausing menu
		if (exit2)
		{
			continue;
		}
		//outputing the array
		show(str);
		//A function that moves the cursor to start and make the things overwrite
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
	}
	system("CLS");
}
void write(int score)
{
	//Writing the file
	ofstream fout;
	fout.open("Highscore.txt", ios::app);
	if (fout.is_open())
	{
		fout << score << endl;
	}
	fout.close();
}
void read(int arr[])
{
	//reading
	ifstream fin;
	int count = 0, largeindex = 0, temp, temp1 = 0;
	fin.open("Highscore.txt");
	if (fin.is_open())
	{
		while (!(fin.eof()) && count < 100)
		{
			fin >> arr[count];
			count++;
		}
	}
	fin.close();
	//Sorting the array
	for (int i = 0; i < count - 1; i++)
	{
		largeindex = i;
		for (int location = i + 1; location < count; location++)
		{
			if (arr[largeindex] < arr[location])
			{
				largeindex = location;
			}
		}
		temp = arr[largeindex];
		arr[largeindex] = arr[i];
		arr[i] = temp;
	}
}
void showArray(int arr[])
{
	//Highest score array
	int delay = 20000;
	char chioce = ' ';
	system("cls");
	for (int i = 0; i < 10; i++)
	{
		cout << i << ". " << arr[i] << endl;
	}
	cout << "Press i to go to menu" << endl;
	Sleep(1000);
	//To close it early and go back to menu
	if (_kbhit())
	{
		delay = 0;
	}
	Sleep(delay);
}
void gotoxy(int x, int y)
{
	// To move the cursor
	//A function that allows to specify the coordinates of output screen
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void Menu(int score, int level, int arr[], int Scount, bool exit, bool exit1, bool exit2, int lives)
{
	char chioce = ' ';
	bool checker = false;
	int delay = 20000;
	gotoxy(56, 10);
	cout << "1.Start a new game" << endl;
	gotoxy(55, 11);
	cout << "2.See highest scores" << endl;
	gotoxy(61, 12);
	cout << "3.Help" << endl;
	gotoxy(61, 13);
	cout << "4.Exit" << endl;
	Sleep(1000);
	if (_kbhit())
	{
		delay = 0;
	}
	Sleep(delay);
	if (_kbhit())
	{
		chioce = _getch();
		switch (chioce)
		{
		case '1':
		{
			//First option of menu
			system("cls");
			do
			{
				gameplay(score, level, Scount, exit, exit1, exit2, lives);
				checker = false;
				level++;
				Scount++;
				write(score);
				if (exit)
				{
					//To make it start a new game after pausing
					exit = false;
					score = 0;
					Scount = 0;
					level = 1;
					checker = true;
					continue;
				}
				if (exit1)
				{
					//Exiting in pausing manue
					break;
				}
			} while ((score >= 100 && level <= 4 && lives != 0) || (exit || checker));
			read(arr);
			if (lives == 0)
			{
				//loss of life show off
				gotoxy(55, 10);
				cout << "GAME OVER!" << endl;
				gotoxy(30, 11);
				cout << "Highest Score : " << arr[0];
				gotoxy(70, 11);
				cout << "Level Reached : " << level - 1 << endl;
				cout << endl << endl;
			}
			if (level > 4 && lives != 0)
			{
				//Winning condition
				gotoxy(55, 10);
				cout << "YOU WON!" << endl;
				gotoxy(30, 11);
				cout << "Highest Score : " << arr[0];
				gotoxy(70, 11);
				cout << "Level Reached : " << level - 1 << endl;
				cout << endl << endl;
			}
			break;
		}
		case '2':
		{
			//Scores
			read(arr);
			showArray(arr);
			system("cls");
			Menu(score, level, arr, Scount, exit, exit1, exit2, lives);
			break;
		}
		case '3':
		{
			//Showing guidlines
			help();
			system("cls");
			Menu(score, level, arr, Scount, exit, exit1, exit2, lives);
			break;
		}
		case '4':
		{
			//Exit at start
			system("cls");
			gotoxy(55, 10);
			cout << "You Exit the game." << endl;
			break;
		}
		default:
		{
			break;
		}
		}
	}
}
int main()
{
	//Starting variables and positions
	int score = 0, level = 1, arr[100], Scount = 0, lives = 5;
	// For making it menu driven
	bool exit = false, exit1 = false, exit2 = false;
	//Call of function
	Menu(score, level, arr, Scount, exit, exit1, exit2, lives);
	system("pause");
}