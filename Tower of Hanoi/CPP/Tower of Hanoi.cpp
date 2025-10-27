#include <iostream>

using namespace std;

void Hanoi_Normal(int n, int i, int j , int& step)
{
	
	if (n > 0)
	{
		Hanoi_Normal(n - 1, i, 6 - (i + j),step);
		step++;
		cout <<"\x1b[33mstep:\x1b[0m"<< step << "\n" << i << "\x1b[1;35m-->\x1b[0m" << j << "\n\n";
		Hanoi_Normal(n - 1, 6 - (i + j), j,step);

	}
}
void Hanoi_No_direct_transfer(int n, int i, int j, int& step)
{
	if (n > 0)
	{
		Hanoi_No_direct_transfer(n - 1, i, j, step);
		step++;
		cout << "\x1b[33mstep:\x1b[0m" << step << "\n" << i << "\x1b[1;35m-->\x1b[0m" << 6-(i+j) << "\n\n";
		Hanoi_No_direct_transfer(n - 1, j, i, step);
		step++;
		cout << "\x1b[33mstep:\x1b[0m" << step << "\n" << 6-(i+j) << "\x1b[1;35m-->\x1b[0m" << j << "\n\n";
		Hanoi_No_direct_transfer(n - 1, i, j , step);

	}
}


int main()
{
	int D_num;
	int step = 0;
	int choice;
	cout << "\033[1;3;31mPlease enter the number of your disks: \033[0m";
	cin >> D_num;
	cout << "\n\033[1;3;34mPlease select your issue type:\033[0m\n\033[3;33m1)\033[0m \033[3mNormal\033[0m \n\033[3;33m2)\033[0m \033[3mNo direct disk transfer from i to j\033[0m \n\033[3;33mOther keys)\033[0m \033[3mExit the program\033[0m \n\033[1;3;32mYour choice:\033[0m ";
	cin >> choice;
	if (choice == 1)
	{
		cout << "\033c";
		cout << "\033[5;4;3;1;33m*******(Normal Hanoi)*******\033[0m\n";
		Hanoi_Normal(D_num, 1, 3, step);
	}
	else if (choice == 2)
	{
		cout << "\033c";
		cout << "\033[5;4;3;1;33m*******(Hanoi No direct transfer)*******\033[0m\n";
		Hanoi_No_direct_transfer(D_num, 1, 3, step);
	}
	else
	{
		return 0;
	}
}