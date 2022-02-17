#include <iostream>
#include <vector>

using namespace std;

int main() 
{
  vector<string> ANS = {"i luv u", "ok \ni still luv u", "well ok \nu don't know \nbut i still luv u"};
  
  vector<string> QUS = {"how u feel:\n", "bad", "ok"};
  int x;
  cout << QUS[0];
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
  }else{
    cout << ANS[2];
  }
    
  
  
}
