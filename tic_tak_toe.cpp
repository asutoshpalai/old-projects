#include <iostream.h>
#include <ctype.h>
#include <conio.h>

char b[3][3];
int p1,p2;

void choice(int p)
{
  char a = (p==1)?'X':'O';
  if(p==1)
    cout<<"\nPlayer 1";
  else

    cout<<"\nPlayer 2";
  int x = 1;
  do{
    cout<<"\n\nEnter Your CHoice: ";
    int n;
    cin>>n;
    n--;
    int i ,j;
    i = n/3;
    j= n%3;
    if(n >=0 && n <=8 && isdigit(b[i][j]))
    {
      b[i][j] = a;
      x = 0;
    }
    else
      cout <<"Invalid Choice.\nEnter Again";
  }while(x);

}

void disp()
{
  clrscr();
  for(int i = 0; i<3;i++)
  {
    for(int j = 0; j<3;j++)
      cout<<b[i][j]<<"     |";
    cout<<"\n---------------------------\n";
  }
}

int check(int p)
{
  char a = (p==1)?'X':'O';
  int w = 1;
  for(int i = 0; i<3; i++)  //row check
  {
    w = 1;
    for(int j = 0; j<3;j++)
      if(b[i][j] != a)
        w = 0;
    if(w == 1)
      return 1;
  }
  for(i = 0; i<3; i++)      //column check
  {
    w = 1;
    for(int j = 0; j<3;j++)
      if(b[j][i] != a)
        w = 0;
    if(w == 1)
      return 1;
  }
  w = 1;
  for(i = 0; i<3; i++)      //principal diagonal check
    if(b[i][i] != a)
      w = 0;
  if(w == 1)
    return 1;
  w = 1;
  for(i = 0; i<3; i++)      //other diagonal check
    if(b[i][2-i] != a)
      w = 0;
  if(w == 1)
    return 1;
  w = 1;
  for(i = 0; i<3;i++)
  {
    for(int j = 0; j<3;j++)
      if(b[i][j]!='X' && b[i][j]!='O')
        w = 0;

  }
  if(w==1)
    return 2;

  return 0;
}

void main()
{
  clrscr();
  p1=p2=0;
  int p =1;
  for(int i = 0; i<3;i++)
  {
    for(int j = 0; j<3;j++)
      b[i][j] = '1' + i*3 + j;

  }
  do{

    disp();
    choice(p);
    int c = check(p);
    if(c != 0)
    {
      if(c==1)
      {
        if(p==1)
          p1 = 1;
        else
          p2 = 1;
      }
      else
        p1=p2=1;
    }
    if(p==1)
      p = 2;
    else
      p = 1;

  }while((!p1)&&(!p2));
  disp();
  cout<<"\n\n\n---------------------------\n";
  cout<<"\n---------------------------\n";

  if(!(p1&&p2))
  { if(p1)
    cout<<"WINNER IS Player 1";
    else
      cout<<"WINNER IS Player 2";
  }
  else
    cout<<"GAME DRAW";
  cout<<"\n---------------------------\n";
  cout<<"\n---------------------------\n";
  getch();
}


