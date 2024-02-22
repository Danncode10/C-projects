#include <iostream>
#include <string>
#include <iomanip>
#include <openssl/sha.h>

using namespace std;

string generateHash(const string& input, const string& secretKey) {
    string dataWithSecret = input + secretKey;
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, dataWithSecret.c_str(), dataWithSecret.length());
    SHA256_Final(hash, &sha256);

    stringstream ss;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        ss << hex << setw(2) << setfill('0') << (int)hash[i];
    }
    return ss.str();
}

string generatePassword(const string& hash) {
    const string SPECIAL_CHARACTERS = "!@#$%^&*";
    const int PASSWORD_LENGTH = 12;

    string password = "";

    for (char c : hash) {
        if (isalnum(c)) {
            password += c;
            if (password.length() >= PASSWORD_LENGTH)
                break;
        }
    }

    for (int i = 0; i < 2; ++i) {
        password += SPECIAL_CHARACTERS[i % SPECIAL_CHARACTERS.length()];
    }

    while (password.length() < PASSWORD_LENGTH) {
        char randomChar = hash[password.length() % hash.length()];
        password += randomChar;
    }

    return password;
}

int main() {
    string inputString;
    string secretKey = "mysecretkey";
    cout << "Enter a string to generate a password: ";
    getline(cin, inputString);

    string hash = generateHash(inputString, secretKey);
    string password = generatePassword(hash);

    cout << "Generated Password: " << password << endl;

    return 0;
}
