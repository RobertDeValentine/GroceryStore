//Author: Robert DeValentine
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector <string> list; //vector of strings
  string item; //string of item to be put in array
  int numItems = 0;
  char input;

  do
  {
     cout<<"\n==GROCERY LIST MANAGER==";
     cout<<"\nEnter your choice: ";
     cout<<"\n (A)dd an item";
     cout<<"\n (Q)uit";
     cout<<"\nYour choice (A/Q): ";
     cin>>input;
     
     // captures string and puts in array
     if (input=='a'||input=='A')
     { 
        cout<<"What is the item?\n";
        cin>>item;
        list.push_back(item);
        numItems++;
     }

  }while( !(input=='q'||input=='Q') );
  
  cout<<"==ITEMS TO BUY==\n";
  
  if (list.size() >= 1)
  {
    for(int index = 0; index<list.size() ; index++)
    {
        cout<<index + 1<<" "<<list[index]<<endl;
    }
  }
  else
  {
    cout<<"No items to buy!\n";
  }
  return 0;
}
