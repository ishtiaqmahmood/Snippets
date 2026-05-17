#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> ageMap;
    ageMap["Alice"] = 25;
    ageMap["Bob"] = 30;
    for (auto const& [name, age] : ageMap) {
        std::cout << name << ": " << age << std::endl;
    }
    return 0;
}
