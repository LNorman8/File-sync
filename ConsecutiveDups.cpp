/*
Luke Norman
CSC160-40
Project: ConsecutiveDups
Description:Write a C++ program that uses a loop to read such a sequence of non-negative integers, terminated by
a negative number. When the code exits the loop it should print the number of consecutive duplicates encountered.
4/8/2020
 */
// Start Main Function And Include Input And Output
#include <iostream>
#include <string>
int main() {
    int count = 0;
    std::string all,current,last;
    std::cout << "Input Number Sequence:";
    std::cin >> all;
    for (int i = 1; i <= all.length(); i++) {
        current = all[i];
        last = all[i-1];
        if (current == "-"){
            break;
        }
        if (current == last){
            count++;

        }
    }
    std::cout << count;
}
