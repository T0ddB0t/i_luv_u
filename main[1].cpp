#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;

int main() 
{
  vector<string> ANS = {/*0*/"i luv u",/*1*/ "ok \n", /*2*/"i still luv u", /*3*/"well ok \n",/*4*/"u don't know \n",/*5*/"but i still luv u"};
  
  vector<string> QUS = {"how u feel:\n", "bad", "ok"};
  int x;
  cout << QUS[0];
  sleep(2);  
  for(int i = 1; i < 3; i++)
    {
      cout << i << ": " << QUS[i] << endl;
    }
  cin >> x;
  if(x == 1)
  {
    cout << ANS[0];
  }else if(x == 2){
    cout << ANS[1]; 
    sleep(1.5);
    cout << ANS[2];
    sleep(1.5);
  }else{
    
    cout << ANS[3];
    sleep(1.5);
    cout << ANS[4];
    sleep(1.5);
    cout << ANS[5];
    sleep(1.5);
  }
  
  
}
