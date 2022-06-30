#include <iostream>
#include <algorithm>
#include <string>

std::string getReversedString(std::string &str, int slice_index_1, int slice_index_2){
    std::string sub1 = str.substr(0,slice_index_1);
    std::string sub2 = str.substr(slice_index_1, slice_index_2 - slice_index_1);
    std::string sub3 = str.substr(slice_index_2, str.length() - slice_index_2);

    std::reverse(sub1.begin(), sub1.end());
    std::reverse(sub2.begin(), sub2.end());
    std::reverse(sub3.begin(), sub3.end());

    return sub1 + sub2 + sub3;
}

std::string solve(std::string& target){
    std::string result = "z";
    for(int i = 1; i < target.length()- 1; i++){
        for(int j = i + 1; j < target.length(); j++){
            std::string now = getReversedString(target, i, j);
            result = (result > now) ? now : result;
        }
    }
    return result;
}


int main(int argc, char const *argv[])
{
    std::string input;
    std::getline(std::cin, input);
    std::cout<< solve(input);
    return 0;
}
