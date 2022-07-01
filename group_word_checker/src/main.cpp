#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

int check(std::string &str){
    using namespace std;
    map<char,bool> str_map;
    char prev = str[0];
    str_map[prev] = true;
    for(int i = 1; i< str.length(); i++){
        if(prev == str[i]){
            continue;
        } else if(str_map[str[i]]) {
            return 0;
        }
        str_map[str[i]] = true;
        prev = str[i];
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    using namespace std;
    int num;
    cin >> num;
    cin.get();
    int answer = 0;
    while (num--)
    {
        string str;
        getline(cin, str);
        answer += check(str);
    }    
    cout<< answer;
    return 0;
}
