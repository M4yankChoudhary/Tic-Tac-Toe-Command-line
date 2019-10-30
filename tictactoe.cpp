#include <iostream>

using namespace std;

void board(char arr [10]);


int main()
{



char      arr[10] = {' ',' ',' ',' ',' ',' ',' ',' ',' ','\0'};
int   position[9] = {1,2,3,4,5,6,7,8,9};
int   player1, player2;
string player1_name, player2_name;


cout << "\t\t COMMAND LINE BASED TIC TAC TOE\n" << "\t\t  AUTHOR : Mayank Choudhary\n";
cout << "Intructions : \n 1.There are only 30 chances\n\n";
cout << "Player 1 enter your name\n";
cin  >> player1_name;
cout << "Player 2 enter your name\n";
cin  >> player2_name;


board(arr);








for(int t =0; t<=30; t++)
{
    cout << "Player 1(X) : " << endl; // Player 1 input
    cin >> player1;

    cout << "Player 2(O) : " << endl; // Player 2 input
    cin >> player2;




if  (arr[0] == ' ' && player1 == position[0])
    {

     arr[0] = 'X';

    }
    else if(arr[1] == ' ' && player1 == position[1])
    {

     arr[1] = 'X';


    }
    else if(arr[2] == ' ' && player1 == position[2])
    {

     arr[2] = 'X';

    }

    else if(arr[3] == ' ' && player1 == position[3])
    {

     arr[3] = 'X';

    }
    else if(arr[4] == ' ' && player1 == position[4])
    {

     arr[4] = 'X';

    }
    else if(arr[5] == ' ' && player1 == position[5])
    {

     arr[5] = 'X';

    }
    else if(arr[6] == ' ' && player1 == position[6])
    {

     arr[6] = 'X';

    }
    else if(arr[7] == ' ' && player1 == position[7])
    {

     arr[7] = 'X';

    }
    else if(arr[8] == ' ' && player1 == position[8])
    {

     arr[8] = 'X';

    }
    else
    {

    cout << "Enter Correct value \n";
    board(arr);

    }

// conditions for player 2


    if(arr[0] == ' ' && player2 == position[0])
    {

     arr[0] = 'O';
     board(arr);

    }
    else if(arr[1] == ' ' && player2 == position[1])
    {

     arr[1] = 'O';
     board(arr);

    }
    else if(arr[2] == ' ' && player2 == position[2])
    {

     arr[2] = 'O';
     board(arr);

    }
    else if(arr[3] == ' ' && player2 == position[3])
    {

     arr[3] = 'O';
     board(arr);

    }
    else if(arr[4] == ' ' && player2 == position[4])
    {

     arr[4] = 'O';
     board(arr);

    }
    else if(arr[5] == ' ' && player2 == position[5])
    {

     arr[5] = 'O';
     board(arr);

    }
    else if(arr[6] == ' ' && player2 == position[6])
    {

     arr[6] = 'O';
     board(arr);

    }
    else if(arr[7] == ' ' && player2 == position[7])
    {

     arr[7] = 'O';
     board(arr);

    }
    else if(arr[8] == ' ' && player2 == position[8])
    {

     arr[8] = 'O';
     board(arr);

    }
    else
    {

    cout << "Enter Correct value \n";
    board(arr);

    }


    if ((arr[0]=='X' && arr[1]=='X' && arr[2]=='X') ||
        (arr[3]=='X' && arr[4]=='X' && arr[5]=='X') ||
        (arr[6]=='X' && arr[7]=='X' && arr[8]=='X') ||
        (arr[0]=='X' && arr[3]=='X' && arr[6]=='X') ||
        (arr[1]=='X' && arr[4]=='X' && arr[7]=='X') ||
        (arr[2]=='X' && arr[5]=='X' && arr[8]=='X')  )
        /*
           [X][X][X]
           [X][X][X]
           [X][X][X]
                      */
    {
    cout << player2_name << " wins";
      return 1;
    }


    if ((arr[0]=='O' && arr[1]=='O' && arr[2]=='O') ||
        (arr[3]=='O' && arr[4]=='O' && arr[5]=='O') ||
        (arr[6]=='O' && arr[7]=='O' && arr[8]=='O') ||
        (arr[0]=='O' && arr[3]=='O' && arr[6]=='O') ||
        (arr[1]=='O' && arr[4]=='O' && arr[7]=='O') ||
        (arr[2]=='O' && arr[5]=='O' && arr[8]=='O')  )
        /*
           [O][O][O]
           [O][O][O]
           [O][O][O]
                      */
    {
    cout << player2_name << " wins";
      return 1;
    }

} // end for loop



} // end main mathod




void board(char ar[10]){


    cout << "[" << ar[0] <<"][" << ar[1] <<"][" << ar[2] <<"]\n";
    cout << "[" << ar[3] <<"][" << ar[4] <<"][" << ar[5] <<"]\n";
    cout << "[" << ar[6] <<"][" << ar[7] <<"][" << ar[8] <<"]\n";
    cout <<"\n";


   }
