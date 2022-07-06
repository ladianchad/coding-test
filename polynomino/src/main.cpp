#include <iostream>
#include <string>
using namespace std;

void replaceAll(string &str, string target, string replace)
{
  while(str.find(target) != string::npos)
  {
    str.replace(str.find(target), replace.length(), replace);
  }
}

int main(int argc, char const *argv[])
{
  string board;
  getline(cin, board);
  replaceAll(board, "XXXX", "AAAA");
  replaceAll(board, "XX", "BB");
  cout<< ((board.find('X') == string::npos)? board : "-1");
  return 0;
}
