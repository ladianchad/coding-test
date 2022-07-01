#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string findPattern(string prev, int num)
{
  if(prev.length() > num){
    return "";
  }
  if(prev.length() == num){
    return prev;
  }
  string result;
  result = findPattern(prev + "AAAA", num);
  if(result == ""){
    result = findPattern(prev + "BB", num);
  }
  return result;
}

int main(int argc, char const *argv[])
{
  string board;
  getline(cin, board);
  string result = "";
  char prev;
  int cnt = 0;
  for(int i=0; i<board.length(); i++){
    if(board[i] == 'X'){
      cnt++;
    } else if (prev == 'X'){
      string pattern = findPattern("", cnt);
      if(pattern == ""){
        cout<< -1;
        return 0; 
      }
      result += pattern + '.';
      cnt = 0;
    } else {
      result += '.';
    }
    prev = board[i];
  }
  if(cnt){
    string pattern = findPattern("", cnt);
      if(pattern == ""){
        cout<< -1;
        return 0;
      }
      result += pattern;
  }
  cout<<result;
  return 0;
}
