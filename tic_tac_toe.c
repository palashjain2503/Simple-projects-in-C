#include<stdio.h>
void printboard();
int checkwin();
void system();
char board[10]={'0','1','2','3','4','5','6','7','8','9'};
void main()
{
  int used[9]={};
  printboard();
  int player=1,c=1,ch;
  while(checkwin(player)!=1 && c<=9)
  {
    if(c%2==0)
    {
       player=2;
    }
    else if(c%2==1)
    player=1;
    else
    {
      printf("wrong input try again\n");
      return;
    }
    printf("player %d please enter your choice: ",player);
    scanf("%d",&ch);
    if(ch<1 || ch>9)
    {
      printf("WRONG CHOICE ENTERED BY USER AS %d DOES OT EXIST ON THE BOARD",ch);
      return;
    }
    for(int j=0;j<=8;j++)
    {
      if(used[j]==ch)
      {
      printf("\nWRONG CHOICE ENTERED BY USER AS THE BLOCK %d WAS ALREADY IN USE\n",ch);
      return;
      }
      else 
      continue;
    }
    if(player==1)
    {
       board[ch]='X';
       printboard();
       used[c-1]=ch;
    }
   
    else if(player==2)
    {
      board[ch]='O';
      printboard();
      used[c-1]=ch;
    }
    c++;
    }
    if(c==10)
    printf("\n\n\e[1mMATCH WAS A DRAW \e[m");
}

void printboard()
{
    system("cls");
    printf("\n\n\e[1m TIC TAC TOE\n\n\e[m");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",board[1],board[2],board[3]);
    printf("___|___|___\n");
    printf("   |   |   \n");
     printf(" %c | %c | %c \n",board[4],board[5],board[6]);
    printf("___|___|___\n");
    printf("   |   |   \n");
     printf(" %c | %c | %c \n",board[7],board[8],board[9]);
    printf("   |   |   \n");
  
}
int checkwin(int m)
{
  if(board[1]==board[2] && board[3]==board[2])
  {
    printf("\n\nTHE WINNER IS PLAYER %d",m);
    return 1;
  }
   if(board[1]==board[4] && board[4]==board[7])
  {
    printf("\n\nTHE WINNER IS PLAYER %d",m);
    return 1;
  }
   if(board[7]==board[8] && board[8]==board[9])
  {
    printf("\n\nTHE WINNER IS PLAYER %d",m);
    return 1;
  }
   if(board[4]==board[5] && board[5]==board[6])
  {
    printf("\n\nTHE WINNER IS PLAYER %d",m);
    return 1;
  }
   if(board[2]==board[5] && board[5]==board[8])
  {
    printf("\n\nTHE WINNER IS PLAYER %d",m);
    return 1;
  }
   if(board[3]==board[6] && board[3]==board[9])
  {
    printf("\n\nTHE WINNER IS PLAYER %d",m);
    return 1;
  }
   if(board[7]==board[5] && board[3]==board[5])
  {
    printf("\n\nTHE WINNER IS PLAYER %d",m);
    return 1;
  }
   if(board[1]==board[5] && board[5]==board[9])
  {
    printf("\n\nTHE WINNER IS PLAYER %d",m);
    return 1;
  }

  return 0;
}