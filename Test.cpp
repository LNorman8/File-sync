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
//#include <string>
int main() {
    int count = 0;
    std::string all,current,last,temp;
    std::cout << "Input Number Sequence (max 99 per number):";
    std::cin >> all;
    for (int i = 0; i <= all.length(); i++) {
        temp = all[i];
        if (temp == "-"){
            break;
        }
        if (temp != " ")
            current = temp;
            temp = all[i+1];
            if (temp != " ")
                current.append(temp);
            std::cout << temp << std::endl;
        if (current == last){
            count++;

        }
    }
    std::cout << count;
}
