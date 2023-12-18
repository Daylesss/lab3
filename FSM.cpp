#include "FSM.h"
#include <iostream>

// template<typename T>
// bool FSM<T>::run(std::vector<T> str){
//     cur_state = start_state;
//     for (int i=0; i<str.size(); i++){

//         if (alphabet.find(str[i])==0){
//             return false;
//         }
//         std::pair<int, T> state_and_symbol(cur_state, str[i]);
//         auto n = transitions.find(state_and_symbol);
//         if (n!= transitions.end()){
//             std::cout<< n->second;
//             cur_state = n->second;
//         }
//         else{
//             return false;
//         }
//     }
//     if (final_states.find(cur_state)==0){
//         return false;
//     }
    
//     return true;
// };

// template<typename T>
// bool FSM<T>::test(T str){
//     std::cout << str;
//     return true;
// }

template class FSM<char>;
