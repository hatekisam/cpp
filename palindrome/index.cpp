#include<iostream>

bool isPalandrome(std::string word){
    for(int i = 0; i < word.size()/2; i++){
        if(word[i]!= word[word.size()-1-i]){
            return false;
        }
    }
    return true;
}


int main(){
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Enter a word to check if it is a palandrome." << std::endl;
    std::string word;
    std::cin >> word;
    std::cout << word << " is a palandrome? " << isPalandrome(word) << std::endl;
    return 0;
}