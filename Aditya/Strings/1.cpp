#include <iostream>
using namespace std;

int isPlaindrome(string S){
    int i = 0;
    int j = S.size()-1;
    bool hasEncounteredDifferentChar = false;
    while(i<j) {
        if(S.at(i)==S.at(j)) {
            //do nothing
        } else {
            hasEncounteredDifferentChar = true;
            break;
        }
        i++;
        j--;
    }
    
    if(hasEncounteredDifferentChar) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    
}