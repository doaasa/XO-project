#include<iostream>
#include<string>
using namespace std;
void players(char player[], int size)
{
	cout << endl << endl;
	cout << "			Tic Tac Toe" << endl;
	cout << endl;
	cout << "Player 1 (X) -Player 2 (O)" << endl;
	cout << endl << endl;
	cout << "       |       |       " << endl;
	cout << "   " << player[1] << "   |   " << player[2] << "   |   " << player[3] << "   " << endl;
	cout << "_|__|__" << endl;
	cout << "       |       |       " << endl;
	cout << "   " << player[4] << "   |   " << player[5] << "   |   " << player[6] << "   " << endl;
	cout << "_|__|__" << endl;
	cout << "       |       |       " << endl;
	cout << "   " << player[7] << "   |   " << player[8] << "   |   " << player[9] << "   " << endl;
	cout << "       |       |       " << endl;

}
int main()
{
	int count = 0;
	int p1, p2;
	char player[10] = { '0', '1','2','3','4','5','6','7','8','9' };
	for (int i = 0; i < 6; i++)
	{
	let:
		players(player, 10);
		cout << "player 1,enter a number: ";
		cin >> p1;
		if (p1 >= 1 && p1 <= 9)
		{
			if (count != 6)
			{
				if (player[p1] != 'X' && player[p1] != 'O')
				{
					count++;
					player[p1] = 'X';
					if (player[1] == 'X' && (player[1] == player[5] && player[5] == player[9]) || player[3] == 'X' && (player[3] == player[5] && player[5] == player[7]) || player[1] == 'X' && (player[1] == player[2] && player[2] == player[3]) || player[4] == 'X' && (player[4] == player[5] && player[5] == player[6]) || player[7] == 'X' && (player[7] == player[8] && player[8] == player[9]) || player[1] == 'X' && (player[1] == player[4] && player[4] == player[7]) || player[2] == 'X' && (player[2] == player[5] && player[5] == player[8]) || player[3] == 'X' && (player[3] == player[6] && player[6] == player[9]))
					{
						system("cls");
						players(player, 10);
						cout << "==>Player 1 Win" << endl;
						system("pause");
						break;


					}
				lets:

					system("cls");

					players(player, 10);
					cout << "player 2,enter a number: ";

					cin >> p2;
					if (player[p2] != 'X' && player[p2] != 'O')
					{
						count++;
						player[p2] = 'O';
						if (player[1] == 'O' && (player[1] == player[5] && player[5] == player[9]) || player[3] == 'O' && (player[3] == player[5] && player[5] == player[7]) || player[1] == 'O' && (player[1] == player[2] && player[2] == player[3]) || player[4] == 'O' && (player[4] == player[5] && player[5] == player[6]) || player[7] == 'O' && (player[7] == player[8] && player[8] == player[9]) || player[1] == 'O' && (player[1] == player[4] && player[4] == player[7]) || player[2] == 'O' && (player[2] == player[5] && player[5] == player[8]) || player[3] == 'O' && (player[3] == player[6] && player[6] == player[9]))
						{
							system("cls");
							players(player, 10);
							cout << "==>Player 2 Win" << endl;
							system("pause");
							break;
						}
						system("cls");
						goto let;
					}
					else
					{
						cout << "invalid move" << endl;
						system("pause");
						goto lets;
					}
				}

			}
			else if (count == 6)
			{
				system("cls");
				players(player, 10);
				cout << "No One Win" << endl;
				system("pause");
				break;
			}

		}

		else
		{
			cout << "invalid move" << endl;
			system("pause");
			system("cls");
			goto let;
		}
	}
	system("pause");
	return 0;
}