// Vigenere_Cipher - it works with capital letters only
// It is and encryption technique and is more reliable than caeser, see the code to understand it.
// here we add a character or string to the plain text, thus the key is the character or the string.
#include<iostream>
using namespace std;


// the below code is for characters only: 

// int main(){
//     char plainText='J';
//     char cipherText;
//     char key='B';
//     cipherText=(plainText+key)%26 + 65;    //for encryption
//     // cipherText=((plainText-key)+26)%26 + 65;     //for decryption
//     cout<<cipherText;
//     return 0;
// }

int main(){
    string plainText;
    string cipherText;
    string decodedText;
    string key;

    cout<<"Enter the plain text here : ";
    cin>>plainText;
    cout<<"Enter the key here : ";
    cin>>key;

    string newKey=key;
    while (plainText.length()>=newKey.length())
    {
        newKey+=key;
    }
    
    // // encryption
    // for (int i = 0; i < plainText.length(); i++)
    // {
    //     cipherText+=(plainText[i]+newKey[i])%26 + 65;
    // }
    // cout<<"Cipher Text is: "<<cipherText;

    // decryption
    for (int i = 0; i < plainText.length(); i++)
    {
        decodedText+=(plainText[i]-newKey[i] + 26)%26 + 65;
    }
    cout<<"Decoded Text is: "<<decodedText;

    return 0;
}