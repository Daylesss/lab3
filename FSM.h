#pragma once
#include <unordered_set>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <iostream>

template<typename T>
class FSM{
    public:
    std::unordered_set<int> states;
    int start_state;
    int cur_state;
    std::unordered_set<int> final_states;
    std::set<T> alphabet;
    std::map<std::pair<T, int>, int> transitions;

    FSM(std::unordered_set<int> _states,
        int _start_state,
        std::unordered_set<int> _final_states,
        std::set<T> _alphabet,
        std::map<std::pair<T, int>, int> _transitions){

            states = _states;
            start_state = _start_state;
            final_states = _final_states;
            alphabet = _alphabet;
            transitions = _transitions;
        };

    bool run(std::vector<T> str){
    cur_state = start_state;
    for (int i=0; i<str.size(); i++){
        if (alphabet.count(str[i])==0){
            // std::cout << "Alphabet"<<std::to_string(alphabet.count(str[i])) << "\n";
            return false;
        }
        std::pair<T, int> state_and_symbol{str[i], cur_state};
        // std::cout << "Pair "<<std::to_string(state_and_symbol.first)<<std::to_string(state_and_symbol.second) << "\n";
        auto n = transitions.find(state_and_symbol);
        // std::cout << "N "<<std::to_string(n->second) << "\n";
        if (n!= transitions.end()){
            std::cout<< n->second;
            cur_state = n->second;
        }
        else{
            std::cout<< "END??\n";
            return false;
        }

    }
    std::cout<< "STATE"<<cur_state<< "\n";
    if (final_states.count(cur_state)==0){
        std::cout<< "NO FINAL STATE\n";
        return false;
    }
    std::cout<< "OK\n";
    return true;
    };
    // return true;

    // bool run(std::vector<T> str);
    // bool test(T);
    // bool test(T str){
    // std::cout << str;
    // return true;
    // };
    // };
};