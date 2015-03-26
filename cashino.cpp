#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

long bal;

void disp()
{
  clrscr();
  cout<<"\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
  cout<<"\n\nYour present balance is "<<bal;
  cout<<"\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
}

void main()
{
  bal = 0;
  char name[30];
  clrscr();
  cout<<"\n\nWELCOME TO GAME OF CASHINO\n";
  cout<<"\n\nEnter yor name : ";
  gets(name);
  randomize();
  do{

    cout<<"\n\nEnter the investment ammount: ";
    cin>>bal;
  }while(bal <= 0);
  char c = 'y';
  do
  {
    disp();
    int amt = 0;
    do{
      cout<<"\nEnter the amount to bet";
      cin>>amt;
      if(amt < 0)
        cout<<"\nInvalid amount.\nEnter again";
      else if(amt > bal)
        cout<<"\nInsufficient amount to bet.\nEnter again";
      else
        break;
    }while(1);
    int b = 0;
    do
    {
      cout<<"\n\nEnter a number between 1 and 12 ";
      cin>>b;
      if(b>=1&&b<=12)
        break;
      else
        cout<<"\nInvalid number.\nEnter again";
    }while(1);
    int n = 1 + random(12);
    if(n == b)
    {
      cout<<"\n\nYou WON!!!\n\nYou Get twice the inveseted money\n";
      bal += 2*amt;
    }
    else
    {
      cout<<"\n\nYou LOSE.\n\n\nThe correct number is: "<<n;
      bal -= amt;
    }

    cout<<"\n\n\nDo you want to continue??\nEnter y if yes else any other letter";
    c = getche();
  }while(c == 'y' | c == 'Y');
  clrscr();
  cout<<"\n\nGAME OVER\n\nYour final balance is: "<<bal;
  getch();
}



