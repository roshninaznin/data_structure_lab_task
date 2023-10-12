#include <iostream>
#include <string>

using namespace std;

// Function to encode a string
    string encode(string s, int j) {
    string encoded = s;
    for (int i = j; i < encoded.length(); i++) {
        if ((encoded[i] >= 'A' && encoded[i] <= 'Z') || (encoded[i] >= 'a' && encoded[i] <= 'z')) {
    encoded[i] += 3;  // Increase the ASCII value by 3
}
    }
    return encoded;
}

// Function to decode an encoded string
    string decode(string encoded, int j) {
    string decoded = encoded;
    for (int i = j; i < decoded.length(); i++) {

            if ((decoded[i] >= 'A' && decoded[i] <= 'Z') || (decoded[i] >= 'a' && decoded[i] <= 'z')) {
   decoded[i] -= 3;  // Increase the ASCII value by 3
}
        }

    return decoded;
}

int main() {
    string input;
    int j;

    // Input string
    cout << "Enter a string: ";
    getline(cin, input);

    // Input value for 'j'
    cout << "Enter an integer 'j': ";
    cin >> j;

    // Encode the string
    string encoded = encode(input, j);
    cout << "Encoded String: " << encoded << endl;

    // Decode the encoded string
   string decoded = decode(encoded, j);
   cout << "Decoded String: " << decoded <<endl;

    return 0;
}
