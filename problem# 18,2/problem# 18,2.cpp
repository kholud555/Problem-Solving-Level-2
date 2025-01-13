

#include <iostream>
#include <string>
using namespace std;
string Read_text()
{
	string text;
	cout << "Please , enter the text :" << endl;
	getline(cin, text);
	return text;
}
string Encrption_text( string text , const short Encryption_key)
{
	
	for (int i = 0; i <= text.length(); i++)
	{
		text[i] = char((int)text[i] + Encryption_key);
	}
	 
	return text;
}
string Decryption_text(string text, const short Encryption_key)
{
	for (int i = 0; i <= text.length(); i++)
	{
		text[i] = char((int)text[i] - Encryption_key);
	}
	return text;
}

int main()
{
	const short Encryption_key = 2;
	string text = Read_text();
	string Encryption = Encrption_text(text, Encryption_key);
	string Decryption = Decryption_text( Encryption, Encryption_key);

	cout << "Text before encryption :" << text << endl;
	cout << "Text after ecnryption : " << Encryption << endl;
	cout << "Text after decryption : " << Decryption << endl;

   
}

