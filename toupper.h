//
// Created by Ankit on 11/18/2020.
//

#ifndef PROJECT3_TOUPPER_H
#define PROJECT3_TOUPPER_H

#endif //PROJECT3_TOUPPER_H

#include <iostream>

class upper {
    const int x = 32;

// Converts a string to uppercase
public:
    std::string toUpperCase(std::string a) {
        for (int i = 0; a[i] != '\0'; i++)
            a[i] = a[i] & ~x;

        return a;
    }
};