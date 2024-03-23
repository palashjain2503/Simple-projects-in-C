#include<stdio.h>
#include<string.h>
#include <time.h> 
int rand();
void srand();
void system();
void getch();
void main()
{
    int ch,c=1,cpu,player_pts=0,cpu_pts=0;
    char rock[]="ROCK",paper[]="PAPER",scissors[]="SCISSORS",ch1[8],cpu1[8];
printf("WELCOME TO THIS GAME! \n");
  printf("YOU WILL COMPETE AGAINST A CPU IN A BEST OF 3 FORMAT \n");
  printf("PRESS ANY KEY TO START THE MATCH\n");
  getch();
  srand(time(0));
  while(player_pts<3 && cpu_pts<3)
  {
     
    printf("-----------------------------------------------------------\n");
  printf("ROUND %d\n",c);
  printf("ENTER 1.ROCK  2.PAPER  3.SCISSORS \n");
  scanf("%d",&ch);
  if(ch<1 || ch>3)
  {
    printf("WRONG INPUT ENTERED BY USER!\n");
    break;
  }
  cpu=rand()%3+1;
  if(ch==1)
  strcpy(ch1,rock);
  else if(ch==2)
  strcpy(ch1,paper);
   else if(ch==3)
  strcpy(ch1,scissors);

  if(cpu==1)
  strcpy(cpu1,rock);
  else if(cpu==2)
  strcpy(cpu1,paper);
   else if(cpu==3)
  strcpy(cpu1,scissors);
  if(cpu==ch)
  {
     system("cls");
     printf("%s WAS YOUR CHOICE\n%s WAS CPU's CHOICE\n",ch1,cpu1);
    printf("THIS ROUND WAS A DRAW\n");
    c++;
    printf("YOUR SCORE=%d \nCPU SCORE:%d\n",player_pts,cpu_pts);
    continue;
  }
  else if(cpu==1 && ch==2)
  {
     system("cls");
      printf("%s WAS YOUR CHOICE\n%s WAS CPU's CHOICE\n",ch1,cpu1);
    printf("THIS ROUND WAS WON BY YOU\n");
    player_pts++;
    c++;
      printf("YOUR SCORE=%d \nCPU SCORE:%d\n",player_pts,cpu_pts);
    continue;
  }
   else if(cpu==1 && ch==3)
  {
     system("cls");
      printf("%s WAS YOUR CHOICE\n%s WAS CPU's CHOICE\n",ch1,cpu1);
    printf("THIS ROUND WAS WON BY CPU\n");
    cpu_pts++;
    c++;
      printf("YOUR SCORE=%d \nCPU SCORE:%d\n",player_pts,cpu_pts);
    continue;
  }
   else if(cpu==2 && ch==1)
  {
     system("cls");
      printf("%s WAS YOUR CHOICE\n%s WAS CPU's CHOICE\n",ch1,cpu1);
    printf("THIS ROUND WAS WON BY CPU\n");
    cpu_pts++;
    c++;
      printf("YOUR SCORE=%d \nCPU SCORE:%d\n",player_pts,cpu_pts);
    continue;
  }
   else if(cpu==2 && ch==3)
  {
     system("cls");
      printf("%s WAS YOUR CHOICE\n%s WAS CPU's CHOICE\n",ch1,cpu1);
    printf("THIS ROUND WAS WON BY YOU\n");
    player_pts++;
    c++;
      printf("YOUR SCORE=%d \nCPU SCORE:%d\n",player_pts,cpu_pts);
    continue;
  }
   else if(cpu==3 && ch==1)
  {
     system("cls");
      printf("%s WAS YOUR CHOICE\n%s WAS CPU's CHOICE\n",ch1,cpu1);
    printf("THIS ROUND WAS WON BY YOU\n");
    player_pts++;
    c++;
      printf("YOUR SCORE=%d \nCPU SCORE:%d\n",player_pts,cpu_pts);
    continue;
  }
   else if(cpu==3 && ch==2)
  {
     system("cls");
      printf("%s WAS YOUR CHOICE\n%s WAS CPU's CHOICE\n",ch1,cpu1);
    printf("THIS ROUND WAS WON BY CPU\n");
    cpu_pts++;
    c++;
      printf("YOUR SCORE=%d \nCPU SCORE:%d\n",player_pts,cpu_pts);
    continue;
  }
  }
  if(cpu_pts==3)
  printf("\e[1mCPU WON THE GAME BETTER LUCK NEXT TIME\n\e[m");
  else if(player_pts==3)
  printf("\e[1mCONGRATS YOU WON THE GAME!\e[m");
  else
  return;
 
}