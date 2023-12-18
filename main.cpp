#include <vector>
#include <string>
#include <unordered_set>
#include <set>
#include <iostream>
#include <map>
#include "FSM.h"



int main(){
    std::unordered_set<int> states({0,1});
    int start_state = 0;
    std::unordered_set<int> final_states({0});
    std::pair<int, int> a{1,1};
    std::pair<int, int> b{2,2};
    std::set<std::pair<int, int>> alphabet({a, b});
    std::map<std::pair<std::pair<int, int>, int>, int> transitions;
    transitions.emplace(std::pair<std::pair<int, int>, int>(a, 0), 1);
    transitions.emplace(std::pair<std::pair<int, int>, int>(a, 0), 3);
    transitions.emplace(std::pair<std::pair<int, int>, int>(b, 1), 0);
    transitions.emplace(std::pair<std::pair<int, int>, int>(b, 1), 3);
    FSM<std::pair<int, int>> fsm(states, start_state, final_states, alphabet, transitions);
    std::vector<std::pair<int, int>> _str{a, b, a};
    if (fsm.run(_str)){
        std::cout << "YEEEEE\n";
    }
    else{
        std::cout << "no\n";
    }
}