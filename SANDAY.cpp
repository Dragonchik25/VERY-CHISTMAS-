// SANDAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<ctime>
#include<cstdlib>
#include<conio.h>
using namespace std;
/*const int SIZE = 3;
char arr[SIZE][SIZE];

void sothdae();
void vivodit();
bool uyy();
bool gfgf();
void GAMer();
void GAMir();
void GAMur();
void Thaconchil(int& x, int& y);
void Thacon(int& x, int& y);

void sothdae(){
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			arr[i][j] = '*';
		}
	}
}
void vivodit() {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cout << arr[i][j] << ' ';
		}
   cout << endl;
	}
	
}
bool uyy() {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (arr[i][j] == '*')
				return false;
		}
	}
}
bool gfgf() {
	for (int i = 0; i < 3; i++) {
		if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2] && arr[i][0] != '*')
			return true;
		if (arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i] && arr[0][i] != '*')
			return true;
		if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] && arr[0][0] != '*')
			return true;
		if (arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0] && arr[0][2] != '*')
			return true;
		return false;
	}
}
void GAMer() {
	int x, y;
	Thacon(x, y);
	arr[x][y] = '-';
	vivodit();
	if (gfgf()) {
		cout << "Negative Kanthak has won!" << endl;
		return;
	}
	if (uyy()) {
		cout << "Draw." << endl;
		return;
	}
	GAMur();
}
void GAMir() {
	int x;
	int y;
	Thacon(x, y);
		arr[x][y] = '+';
		vivodit();
	if (gfgf()) {
		cout << "Positive Kanthak wins!" << endl;
		return;
	}
	if (uyy()) {
		cout << "Draw." << endl;
		return;
	}
	GAMer();
}
void Thacon(int& x, int& y) {
	cout << "Write cordinate" << endl;
	cin >> x >> y;
	if (x < 1 || x>3 || y < 1 || y>3) {
		cout << " " << endl;
		Thacon( x, y);
		return;
	}
	y--; x--;
	if (arr[x][y] != '*') {
		cout << "Please make sure your code is correct." << endl;
		Thacon(x, y);
		return;
	}
}
void GAMur() {
	int x;
	int y;
	Thaconchil(x, y);
	vivodit();
	if (gfgf()) {
		cout << "Positive Kanthak wins!" << endl;
		return;
	}
	if (uyy()) {
		cout << "Draw." << endl;
		return;
	}
	GAMer();
}
void Thaconchil (int& x, int& y) {
	x = rand() % 4;
	y = rand() % 4;
	if (x < 1 || x>3 || y < 1 || y>3) {
		return;
	}
	y--; x--;
	if (arr[x][y] != '*') {
		return;
	}
}
void tobetoti(int& x, int& y) {
	for (int i = 0; i < SIZE; j++) {
		for (int j = 0; j < SIZE; j++) {
			if(arr[i][j]=='*')
		}
	}
}
int main()
{
	sothdae();
	vivodit();
	uyy();
	gfgf();
	GAMer();
}
*/  
//Игра физику
int main() {
	setlocale(LC_ALL,"Russian");
	while (true)
	{
		if (_kbhit())
		{
			system("cls");
			int a = _getch();
			if (a == 'a')
			cout <<"\033[5;35;47m Cчастливого Воскреснья!" << endl;
			if (a == 'b')
			cout << "\033[5;32;44m И наконец, воспрянем ото сна! " << endl;
			if (a == 'c')
				cout << "\033[5;36;43m И на восьмой день он отправился в путь." << endl;
			if (a == 'd')
				cout << "\033[5;32;47m На первый день дана Истина," << endl;
			if (a == 'e')
				cout << "\033[5;32;43m На второй день даны Законы,";
			if (a == 'f')
				cout << "\033[5;35;46m На третий день дан Язык,";
			if (a == 'g')
				cout << "\033[5;31;44m На четвертый день дана Ценность,";
			if (a == 'h')
				cout << "\033[5;35;40m На пятый день даны Правила,";
			if (a == 'i')
				cout << "\033[5;37;46m На шестой день дан Смысл,";
			if (a == 'v')
				cout << "\033[5;33;41m И на седьмой день дано Достоинство...Узрите <<В начале было дело>>!";
			if (a == 'k')
				cout << "\033[5;37;43m С новым годом!";
			if (a == 'l')
				cout << "\033[5;31;40m ХЕППИ НЬЮ ЕР!";
			if (a == 'm')
				cout << "\033[5;35;47m С НГ!";
			if (a == 'n')
				cout << "\033[5;31;45m Зимние каникулы в IT ШАГ!";
			if (a == 'o')
				cout << "\033[5;30;47m Denn an Wintertagen bleibt es nicht so lange hell!";
			if (a == 'p')
				cout << "\033[5;31;43m Jingle Bells, Jingle Bells, Pony laufe schnell!";
			if (a == 'q')
				cout << "\033[5;34;40m Durch den weißen Winterwald, übern zugefrornen See, hey!";
			if (a == 'r')
				cout << "\033[5;32;47m Jingle Bells, Jingle Bells, Schlittenfahrt im Schnee!";
			if (a == 's')
				cout << "\033[5;36;42m ХО-ХО-ХО VERY CHISTMAS!";
			if (a == 'x')
				cout << "\033[5;37;43m СБУДЕТСЯ, ЧТО СНИТСЯ!";
			if (a == 'z')
				cout << "\033[5;36;40m СКОРО ВСЁ СЛУЧИТСЯ!";
			if (a == 'u')
				cout << "\033[5;30;43m НОВЫЙ ГОД К НАМ МЧИТСЯ!";
			if (a == 'j')
				cout << "\033[5;36;43m YANGI YIL MUBORAK!";
			if (a == 'w')
				break;
		}
	}
}
