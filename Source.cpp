include <iostream>

using namespace std;
class TicTacToe{
public:
	TicTacToe(){
		print();
	}
	~TicTacToe(){}
	int Over();
	int move(int, int, int);
	void print();
	void reset();
private:
	int Over(int square[], int size)
	{

		if (square[1] == square[2] && square[2] == square[3])

			return 1;
		else if (square[4] == square[5] && square[5] == square[6])

			return 1;
		else if (square[7] == square[8] && square[8] == square[9])

			return 1;
		else if (square[1] == square[4] && square[4] == square[7])

			return 1;
		else if (square[2] == square[5] && square[5] == square[8])

			return 1;
		else if (square[3] == square[6] && square[6] == square[9])

			return 1;
		else if (square[1] == square[5] && square[5] == square[9])

			return 1;
		else if (square[3] == square[5] && square[5] == square[7])

			return 1;
		else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
			&& square[4] != '4' && square[5] != '5' && square[6] != '6'
			&& square[7] != '7' && square[8] != '8' && square[9] != '9')

			return 0;
		else
			return -1;
	}

	int move(int column, int row, int player){

		char mark;
		player = (player % 2) ? 1 : 2;
		cout << "Player " << player << ", column and row respectively  ";
		cin >> column >> row;
		mark = (player == 1) ? 'X' : 'O';

		if (column == 1 && row == 1 && square[1] == '1')

			square[1] = mark;
		return 1;
		else if (column == 2 && row == 1 && square[2] == '2')

			square[2] = mark;
		return 1;
		else if (column == 3 && row == 1 && square[3] == '3')

			square[3] = mark;
		return 1;
		else if (column == 1 && row == 2 && square[4] == '4')

			square[4] = mark;
		return 1;
		else if (column == 2 && row == 2 && square[5] == '5')

			square[5] = mark;
		return 1;
		else if (column == 3 && row == 2 && square[6] == '6')

			square[6] = mark;
		return 1;
		else if (column == 1 && row == 3 && square[7] == '7')

			square[7] = mark;
		return 1;
		else if (column == 2 && ro0w == 3 && square[8] == '8')

			square[8] = mark;
		return 1;
		else if (column == 3 && row == 3 && square[9] == '9')

			square[9] = mark;
		return 1;
		else{

			cout << "Invalid move ";
			player--;
			cin.ignore();
			cin.get();
			return 0;
		}
	}

	void print()
	{
		system("cls");
		cout << "\n\n\tTic Tac Toe\n\n";

		cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
		cout << endl;

		cout << "     |     |     " << endl;
		cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

		cout << "_____|_____|_____" << endl;
		cout << "     |     |     " << endl;

		cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

		cout << "_____|_____|_____" << endl;
		cout << "     |     |     " << endl;

		cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

		cout << "     |     |     " << endl << endl;
	}

	void reset()
	{
		system("cls");
		cout << "\n\n\tTic Tac Toe\n\n";

		cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
		cout << endl;

		cout << "     |     |     " << endl;
		cout << "  " << "1" << "  |  " << "2" << "  |  " << "3" << endl;

		cout << "_____|_____|_____" << endl;
		cout << "     |     |     " << endl;

		cout << "  " << "4" << "  |  " << "5" << "  |  " << "6" << endl;

		cout << "_____|_____|_____" << endl;
		cout << "     |     |     " << endl;

		cout << "  " << "7" << "  |  " << "8" << "  |  " << "9" << endl;

		cout << "     |     |     " << endl << endl;
	}

}
int Over(int square[], int size)
{

	if (square[1] == square[2] && square[2] == square[3])

		return 1;
	else if (square[4] == square[5] && square[5] == square[6])

		return 1;
	else if (square[7] == square[8] && square[8] == square[9])

		return 1;
	else if (square[1] == square[4] && square[4] == square[7])

		return 1;
	else if (square[2] == square[5] && square[5] == square[8])

		return 1;
	else if (square[3] == square[6] && square[6] == square[9])

		return 1;
	else if (square[1] == square[5] && square[5] == square[9])

		return 1;
	else if (square[3] == square[5] && square[5] == square[7])

		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
		&& square[4] != '4' && square[5] != '5' && square[6] != '6'
		&& square[7] != '7' && square[8] != '8' && square[9] != '9')

		return 0;
	else
		return -1;
}

int main(){
	int player = 1;
	int i, column, row;

	do
	{
		TicTacToe bam;
		print();
		move(column, row, player);

		i = Over(square[], 9);

		player++;
	} while (i == -1);
	if (i == 1)

		cout << "==>\aPlayer " << --player << " win ";
	else
		cout << "==>\aGame draw";

	cin.ignore();
	cin.get();
	return 0
}