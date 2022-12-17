#include <stdio.h>
#include <iostream>
#include <fstream>
#include<sstream>
#include <vector>
using namespace std;

int main(){
    int n = 1;
    int menu = 0;
    ifstream eval;
    string line;
    eval.open("courseinfo.txt");
    std::vector< string > course;
    std::vector< vector<string> > courseList;
    cout << "Welcome to the course planner.";
    while (n == 1){
        cout << "\n\n1. Load Data Structure." << "\n2. Print Course List.\n3. Print Course\n9. Exit\n\n"; /* Menu command */
        cin >> menu;

        switch (menu){                           /* Switch usage for menu input from user */
            case 1:
                while(getline(eval,line)){
                        int req = 0;
                        std::stringstream   linestream(line);
                        std::string         value;
                        while(getline(linestream,value,',')){
                                std::cout << "Value(" << value << ")\n";
                                course.push_back(value);
                                req++;

                        }
                        courseList.push_back(course);
                        std::cout << "Line Finished" << int(courseList.size()) << std::endl;
                }
                break;
            case 2:
                cout << "Option 2 selected.";
                break;
            case 3:
                cout << "What course do you want to know about?";
                string userInput;
                cin >> userInput;
                courseList[]
                break;
            case 9:
                cout << "Thank you for using the course planner!";
                eval.close();
                break;
            default:
                cout << menu << " is not a valid option.";
                break;
                }
    }
    }
