#include <iostream>

class Solution {
public:
    std::string numreverse(std::string str){
        str = std::string(str.rbegin(), str.rend());
        return str;
    }
    bool isPalindrome(int x) {
               

        // convert int to string
        int break_num = x;
        std::string num_to_string = std::to_string(break_num);

        // if size of x == 0 or 1, return true
        if(num_to_string.length() == 0 || num_to_string.length() == 1){
            return true;
        }
        // if size of x == 2 and index[0] != index[1], return false
        if((num_to_string.length() == 2) && (num_to_string[0] != num_to_string[1])){
            return false;
        }

        // if x[0] == '-', return false
        if(num_to_string[0] == '-'){
            return false;
        }

        // reverse string
        std::string back_num;
        back_num = numreverse(num_to_string);

        for(int i = 0; i < num_to_string.length(); i++){
            if(num_to_string[i] != back_num[i]){
                return false;
            }
        }

        return true;
    }
};