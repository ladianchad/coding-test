#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int checkDecimal(int num)
{
  if(num <= 1){
    return 0;
  }
  for(int i=2; i<num; i++){
    if(num % i ==0){
      return 0;
    }
  }
  return 1;
}


int main(int argc, char const *argv[])
{
  int num;
  cin >> num;
  int answer = 0;
  int n;
  while (num--)
  {
    cin >> n;
    answer += checkDecimal(n);
  }
  cout << answer;
  return 0;
}
