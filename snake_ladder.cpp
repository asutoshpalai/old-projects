#include <iostream.h>
#include <conio.h>
#include <stdlib.h>


int p1,p2;
void disp()
{
  clrscr();
  cout<<"\n\tFrom 98 to 28 \n\tFrom 95 to 24\n\tFrom 92 to 51\n\tFrom 83 to 19\n\tFrom 73 to 1\n\tFrom 69 to 33\n\tFrom 64 to 36\n\tFrom 59 to 17\n\tFrom 55 to 7\n\tFrom 52 to 11\n\tFrom 48 to 9\n\tFrom 46 to 5\n\tFrom 44 to 22\n\n";
  for(int i = 1; i<=50;i++)
    cout<<'-';
  cout<<"\n\t\t LADDER AT POSITION\n";
  for(i = 1; i<=50;i++)
    cout<<'-';
  cout<<"\n\tFrom 8 to 26\n\tFrom 21 to 82\n\tFrom 43 to 77\n\tFrom 50 to 91\n\tFrom 62 to 96\n\tFrom 66 to 87\n\tFrom 80 to 100\n";
  for(i = 1; i<=50;i++)
    cout<<'-';
  cout<<endl;
  cout<<"\n\nCurrent position of Player 1 is: "<<p1;
  cout<<"\nCurrent position of Player 2 is: "<<p2;
}
void main()
{
  clrscr();
  p1=p2=0;
  int p = 0;
  int *pl = NULL;
  char t = 'a';
  do
  {
    if(p!=1)
    {
      p=1;
      pl = &p1;
    }
    else
    {
      p=2;
      pl = &p2;
    }
    disp();
    cout<<"\n\nPlayer "<<p<<" Your turn\nPress any key";
    getch();
    int n = 1 + random(6);
    cout<<"\nYou got: "<<n;
    *pl += n;
    cout<<"\nYour present position is"<<*pl;
    n = *pl;
    switch(*pl)
    {
      case 44: *pl = 22;
               break;
      case 46: *pl = 5;
               break;
      case 48: *pl = 9;
               break;
      case 52: *pl = 11;
               break;
      case 55: *pl = 7;
               break;
      case 59: *pl = 17;
               break;
      case 64: *pl = 36;
               break;
      case 69: *pl = 33;
               break;
      case 73: *pl = 1;
               break;
      case 83: *pl = 19;
               break;
      case 92: *pl = 51;
               break;
      case 95: *pl = 24;
               break;
      case 98: *pl = 28;
               break;
      case 8: *pl = 26;
              break;
      case 21: *pl = 82;
               break;
      case 43: *pl = 77;
               break;
      case 50: *pl = 91;
               break;
      case 62: *pl = 96;
               break;
      case 66: *pl = 87;
               break;
      case 80: *pl = 99;
               break;

    }
    if(*pl < n)
      cout<<"\nOpps! You are swalowed by snake.\nYour new position is: "<<*pl;
    else if(*pl >n)
      cout<<"\nCongrats! You climbed a ladder.\nYour new position is: "<<*pl;
    cout<<"\n\nPress any key";
    t = getch();
  }while((p1<=100 && p2 <= 100)&& t != 'b');
  if(p1 > 100)
    cout<<"\nWinner is Player 1";
  else
    cout<<"\nWinner is Player 2";
  getch();
}

