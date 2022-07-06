#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
  string board;
  getline(cin, board);
  while(board.find("XXXX") != string::npos)
  {
    board.replace(board.find("XXXX"), 4, "AAAA");
  }
  while(board.find("XX") != string::npos)
  {
    board.replace(board.find("XX"), 2, "BB");
  }
  cout<< ((board.find('X') == string::npos)? board : "-1");
  return 0;
}
