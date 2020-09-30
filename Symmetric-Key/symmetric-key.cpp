#include <bits/stdc++.h>
using namespace std;

string encrypt_message(string message, int key)
{
    string cipher_text = "";
    int i;
    for (i = 0; i < message.size(); i++)
    {
        cipher_text += (message[i] - 'a' + key) % 26;
        cipher_text[i] += 'a';
    }
    return cipher_text;
}

string decrypt_message(string cipher_text, int key)
{
    string output_text = "";
    int i;
    for (i = 0; i < cipher_text.size(); i++)
    {
        output_text += (cipher_text[i] - 'a' - key) % 26;
        output_text[i] += 'a';
    }
    return output_text;
}

int main()
{
    string plain_text, cipher_text, output_text;
    int key;

    cout << "Enter key: " << endl;
    cin >> key;
    cout << "Enter plain text: " << endl;
    cin >> plain_text;

    cipher_text = encrypt_message(plain_text, key);
    cout << cipher_text << endl;
    output_text = decrypt_message(cipher_text, key);
    cout << output_text << endl;

    return 0;
}