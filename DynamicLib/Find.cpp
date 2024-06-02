#include <string> 

extern "C" __declspec (dllexport) bool Find(std::string a, std::string b) {
    size_t found = b.find(a);
    if (found != std::string::npos) {

        return true;
        
    }
    else {
        return false;
    }
}