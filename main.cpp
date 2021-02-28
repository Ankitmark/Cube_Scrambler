#include <iostream>
#include <string>
#include <vector>
#include <list>

#include "toupper.h"
#include "solve.h"


int main() {


    //std::vector<std::string> cube={  "ABCCED","SPVLLK","OZDETD","BACRTD","NUIBEM"};
    //std::string nw="BAT";

    std::vector<std::string> cube;
    std::string nw;

    upper up;
    int f = 1;

    while(f)
    {
        std::cout <<
                     "\nEnter any of these command:\n"
                     "r - Problem reset.\n"
                     "c - Enter new cube.\n"
                     "a - Show all cubes.\n"
                     "w - Enter new word.\n"
                     "s - Solve problem.\n"
                     "q - Quit.\n"
        << std::endl;
        char c;
        std::cin >> c;


        switch(c) {
            case 'r'  : {
                cube.clear();
                nw.clear();
                std::cout << "Cube scrambler has been reset" << std::endl;
                break;
            }

            case 'c'  :
                std::cout <<"Enter 6 consecutive letters for each side of cube. Example: AbcdeF "<< std::endl;

                if (cube.size() < 5){
                    std::string nc;
                    std::cin >> nc;
                    if (nc.size() == 6) {

                        cube.push_back(up.toUpperCase(nc));
                        std::cout << "Recorded cube-"<<cube.size()<<": "<<cube[cube.size()-1]<< std::endl;
                    }
                    else
                        std::cout <<"You entered: "<<nc.size()<<" letters, please enter exactly 6 consecutive letters for each sides of cube. Example: AbcdeF "<< std::endl;

                }
                else
                    std::cout << "Cube Scrambler can only contain 5 cubes"<< std::endl;

                break;


            case 'a'  :
                for(int i =0 ; cube.size() > i; i++) {
                    std::cout <<"Cube- "<< i+1<<": "<< cube[i] << std::endl;
                }
                break;

            case 'w'  : {
                std::cout << "Enter a new word to be solved by cube scrambler." << std::endl;
                std::cin >> nw;
                std::cout << "New word is: " <<nw<< std::endl;
                nw=up.toUpperCase(nw);


                break;
            }

            case 's'  :
                if (nw.size() <= 5)
                {

                    solver s;
                    std::vector<std::string> alcombi;
                    alcombi = s.solve(cube , nw);

//All combination
//                    for (auto & j : alcombi) {
//                        std::cout << "Letter-cube-side " <<j<< std::endl;
//                    }

                    std::vector<std::string> rcombi;


                    for(int i =0;alcombi[i][0]==nw[0];++i){
                        rcombi.push_back(alcombi[i]);
                        for (auto & j : alcombi) {
                            if (rcombi[rcombi.size()-1][0] != j[0] && rcombi[rcombi.size()-1][1] != j[1])
                                rcombi.push_back(j);
                        }
                    }

                    int q=0;
                        for (auto & j : rcombi) {
                            if ( nw.size() == q) {
                                q =0;
                                std::cout << "" << std::endl;
                            }
                            std::cout << j[0]<<"@Cube-"<< j[1]<<"("<<j[2]<<")"<<", ";
                            ++q;
                        }

                }

                else
                    std::cout << "No possible cube combination." << std::endl;

                    break;

            case 'q'  :
                std::cout << "Quitting from command loop" << std::endl;
                f = 0;
                break;

            default :
                std::cout << "Command loop does not recognize "<< c << std::endl;
                break;

        }


    }

    return 0;
}


