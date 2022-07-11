#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int compare(string &src, string &target, int start_index){
  int cnt = 0;
  for(int i = 0; i < src.size(); i++){
    if(src[i] != target[i + start_index]){
      cnt++;
    }
  }
  return cnt;
}

int solve(string src, string target)
{
  int result = target.length();
  for(int i = 0; i <= target.length() - src.length(); i++){
    result = min(compare(src, target, i), result);
  }
  return result;
}

int main(int argc, char const *argv[])
{
  string input1, input2;
  cin>>input1>>input2;
  cout<<solve(input1, input2);
  return 0;
}
