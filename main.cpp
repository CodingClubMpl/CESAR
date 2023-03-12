#include <iostream>
#include <string>
#include <vector>

std::string cesarEncrypt(std::string text, int key) {
    std::string result = "";

    for (char c : text) {
        if (c >= 'a' && c <= 'z') {
            c = (c - 'a' + key) % 26 + 'a';
        } else if (c >= 'A' && c <= 'Z') {
            c = (c - 'A' + key) % 26 + 'A';
        }
        result += c;
    }
    return result;
}

std::vector<std::string> cesarDecrypt(std::string text) {
    std::vector<std::string> result;
    for (int i = 0; i < 26; i++) {
        result.push_back(cesarEncrypt(text, i));
    }
    return result;
}

std::string keyEncrypt(std::string text, std::string key) {
    std::string result = "";
    int keyIndex = 0;
    for (char c : text) {
        if (c >= 'a' && c <= 'z') {
            c = (c - 'a' + key[keyIndex] - 'a') % 26 + 'a';
            keyIndex = (keyIndex + 1) % key.length();
        } else if (c >= 'A' && c <= 'Z') {
            c = (c - 'A' + key[keyIndex] - 'A') % 26 + 'A';
            keyIndex = (keyIndex + 1) % key.length();
        }
        result += c;
    }
    return result;
}

int main() {
    std::cout << keyEncrypt("Hello World!", "abc") << std::endl;
    return 0;
}