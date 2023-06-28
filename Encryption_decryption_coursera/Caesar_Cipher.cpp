// Caeser Cipher is and encryption technique but it is less reliable than vigenere, see the code to understand it.
// here we add a number to the plain text, thus the key is the number here.

#include<iostream>
using namespace std;

int main(){
    char plainText='A';
    char cipher;
    cipher=plainText+2;
    cout<<"This is the cipher: "<<cipher<<", this is the encrypted text.";
    return 0;
}