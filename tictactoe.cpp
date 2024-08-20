#include<bits/stdc++.h>
using namespace std;  
char arr[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row,column;
bool tied=false;
char choice='X';
void makeboard()
{system("cls");
cout<<"\n X-X-X-X-X-X-X-X-X TIC TAC TOE! X-X-X-X-X-X-X-X\n\n";
cout<<"\t Player 1 ---> X \n";
cout<<"\t Player 2 ---> 0 \n\n";
cout << "\t\t     |     |     \n";
cout << "\t\t  " << arr[0][0] << "  |  "  << arr[0][1] <<  "  |  " << arr[0][2] << " \n";
cout << "\t\t_____|_____|_____\n";
cout << "\t\t     |     |     \n";
cout << "\t\t  " << arr[1][0] << "  |  "  << arr[1][1] <<  "  |  " << arr[1][2] << " \n";
cout << "\t\t_____|_____|_____\n";
cout << "\t\t     |     |     \n";
cout << "\t\t  " << arr[2][0] << "  |  "  << arr[2][1] <<  "  |  " << arr[2][2] << " \n";
cout << "\t\t     |     |     \n\n";
}


bool gameover()
{
  for(int i=0;i<3;i++)
{
		if (arr [i][0] == arr [i][1] && arr [i][0] == arr [i][2] 
			|| arr [0][i] == arr [1][i] && arr [0][i] == arr [2][i])
		return false;	
		
		if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] 
			|| arr[0][2] == arr[1][1] && arr[0][2] == arr [2][0])
		return false;

}

for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr [i][j] != 'X' && arr [i][j] != 'O')
			return true;
		}
	}
 
 
 tied=true;
 return false;
 
 
 
 
 
  }




void turn()
{

	int inputplace;
	
	if (choice== 'X')
	{
		cout << "\n\tPlayer 1 [X] Turn : ";
	}
	
	if (choice == '0')
	{
		cout << "\n\tPlayer 2 [0] Turn : ";
	}
	
	cin >> inputplace;
	
	switch (inputplace)
	{
		case 1 : { row = 0; column = 0; break; }
		case 2 : { row = 0; column = 1; break; }
		case 3 : { row = 0; column = 2; break; }
		case 4 : { row = 1; column = 0; break; }
		case 5 : { row = 1; column = 1; break; }
		case 6 : { row = 1; column = 2; break; }
		case 7 : { row = 2; column = 0; break; }
		case 8 : { row = 2; column = 1; break; }
		case 9 : { row = 2; column = 2; break; }

		default :
		{
			cout << "Invalid choice.\n";
			break;
		}
	}


if (choice == 'X' && arr [row][column] != 'X' && arr [row][column] != 'O')
	{
		arr[row][column] = 'X';
		choice = '0';
	}
		
	else if (choice == '0' && arr [row][column] != 'X' && arr [row][column] != 'O')
	{
		arr[row][column] = '0';
		choice = 'X';
	}
	
	else
	{
		cout << "\nSpot already filled!, Please try again.\n";
		turn();
	}
	
makeboard();       
}


int main() {
   while(gameover()){
   makeboard();
   turn();
   gameover(); 
}
if (choice == 'X' && tied == false)
	{
		cout << "\aCongratulations, Player 2 [O] Wins!\n";
	}
	
	else if (choice == '0' && tied== false)
	{
		cout << "\aCongratulations, Player 1 [X] Wins!\n";
	}
	
	else
	{
		cout << "GAME TIED!! \n";
	}
   
    }
