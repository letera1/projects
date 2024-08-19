//
//  main.cpp
//  weightCalculator
//
//  Created by Brady on 2/8/23.
//
#include <iostream>
#include <map>
#include <string>
#include <cmath>
using namespace std;
float earthWeight;
float mass;
float newWeight;



int main(int argc, const char * argv[]) {
    map<string, float>gravitationalAcceleration;
    gravitationalAcceleration.insert(pair<string, float>("Sun", 274 ));
    gravitationalAcceleration.insert(pair<string, float>("Mercury", 3.7 ));
    gravitationalAcceleration.insert(pair<string, float>("Venus", 8.9));
    gravitationalAcceleration.insert(pair<string, float>("Earth", 9.8 ));
    gravitationalAcceleration.insert(pair<string, float>("Earth's Moon", 1.6 ));
    gravitationalAcceleration.insert(pair<string, float>("Mars", 3.7 ));
    gravitationalAcceleration.insert(pair<string, float>("Jupiter", 24.8 ));
    gravitationalAcceleration.insert(pair<string, float>("Europa", 1.3 ));
    gravitationalAcceleration.insert(pair<string, float>("Saturn", 10.4 ));
    gravitationalAcceleration.insert(pair<string, float>("Titan", 1.4 ));
    gravitationalAcceleration.insert(pair<string, float>("Urnaus",8.9 ));
    gravitationalAcceleration.insert(pair<string, float>("Neptune", 11.2 ));
    gravitationalAcceleration.insert(pair<string, float>("Neutron Star", 9.8 * pow(10, 9)));
    
    
    cout << "*    .  *       .             * \n";
    cout << "                        * \n";
    cout <<" *   .        *       .       .       *\n";
    cout << ".     * \n";
    cout << "           .     .  *        *\n";
    cout << "       .                .        .\n";
    cout << ".  *           *                     *\n";
    cout << "                             .\n";
    cout <<"         *          .   * \n";
    cout << "Please enter your weight in pounds (lbs) to see what you'd way on various astronomical objects: ";
    cin >> earthWeight;
    mass = earthWeight / 9.8;
    for(auto pair: gravitationalAcceleration){
        newWeight = mass * pair.second;
        cout << pair.first << " : " << newWeight<< " lbs" << endl;
    }
    
    
    
    return 0;
}