#include <string>
#include <iostream>

using namespace std; 

int main(int argc, char const *argv[])
{
  int num;
  cin >> num;
  int target = 665;
  while(num){
    if( to_string(target++).find("666") != std::string::npos){
      num--;
    }
  }
  cout<< target - 1;
  return 0;
}
