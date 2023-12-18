#include <map>
#include <iostream>
#include <string>


class B{
    int a;
    int b;
    public:
    B(int _a, int _b){
        a = _a;
        b = _b;
    }
    bool operator==(B b2){
        if (a == b2.a) return true;
        return false;
    }
};


int main(){
    // Testgg<char> t('a');
    // t.pr('b');
    // std::cout << __cplusplus;
    B x{1, 2};
    B y{2, 3};
    std::cout << std::to_string(x==y);
    return 0;
}