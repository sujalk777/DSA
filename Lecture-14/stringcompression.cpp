#include <iostream>
#include <string>

std::string compressString(const std::string& s) {
    std::string compressed = "";
    int count = 1;

    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            compressed += s[i - 1] + std::to_string(count);
            count = 1;
        }
    }

    compressed += s.back() + std::to_string(count);

    return compressed;
}

int main() {
    std::string inputString;
    std::cin >> inputString;

    std::string compressedResult = compressString(inputString);
    std::cout << compressedResult << std::endl;

    return 0;
}
