#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int count(int num , int target){
  int cnt = 0;
  while(!(num % target))
  {
    cnt++;
    num /= target;
  }
  return cnt;
}

int main(int argc, char const *argv[])
{
  int two_div = 0;
  int five_div = 0;
  int num;
  cin >> num;
  for(int i=1; i<= num; i++){
    if(i % 2 == 0){
      two_div += count(i, 2);
    }
    if(i % 5 == 0){
      five_div += count(i, 5);
    }
  }
  cout << min(two_div, five_div);
  return 0;
}
