#include <iostream>
#include <string>
#include <sstream>
#include <vector>
int main(){
    std::string txt = "I hate programming";
    std::stringstream ss(txt);
    std::string word;
    std::vector<std::string> words;
    while( ss >> word)
    {
        words.push_back(word);
    }
    for(int i=words.size()-1; i>=0; i--)
    {
        std::cout<<words[i] <<" ";
    }
    return 0;
}