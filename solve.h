//
// Created by Ankit on 11/18/2020.
//

#ifndef PROJECT3_SOLVE_H
#define PROJECT3_SOLVE_H

#endif //PROJECT3_SOLVE_H
#include <vector>
#include <iostream>
#include <list>
#include <algorithm>

class solver {
    std::vector<std::string> found;
    std::string fc;
public:
    std::vector<std::string> solve(std::vector<std::string> c, std::string a) {


        while (!a.empty()) {


            std::list<int> list;
            for (int i = 0; i < c.size(); ++i) {
                if (std::find(list.begin(), list.end(), i) != list.end())
                    continue;
                else
                    for (int j = 0; j < 6; ++j) {
                        if (a[0] == c[i][j]) {
                            auto it = std::find(c.begin(), c.end(), c[i]);
                            int p = std::distance(c.begin(), it);
                            fc = a[0] + std::to_string(p + 1) + std::to_string(j + 1);
                            found.push_back(fc);
                            list.push_back(p);

                        }

                    }
            }
            a.erase(a.begin());
            solve(c, a);   //Recursive search
            break;

        }

        return found; //Return list of letter-cube-side for all letters.
    }
};