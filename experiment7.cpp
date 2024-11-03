/*Write a program in C++ to use map associative container. The keys will be the names of states 
and the values will be the populations of the states. When the program runs, the user is 
prompted to type the name of a state. The program then looks in the map, using the state 
name as an index and returns the population of the state.*/

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> statePopulations;

    statePopulations["Maharashtra"] = 123144223;
    statePopulations["Uttar Pradesh"] = 231502578;
    statePopulations["Bihar"] = 124799926;
    statePopulations["Chhattisgarh"] = 29436231;
    statePopulations["Madhya Pradesh"] = 85358965;

    string stateName;
    cout << "Enter the name of an Indian state: ";
    getline(cin, stateName);

    auto it = statePopulations.find(stateName);

    if(it != statePopulations.end()) {
        cout << "The population of " << stateName << " is: " << it->second << endl;   
    } else {
        cout << "State not found in the map." << endl;
    }
}