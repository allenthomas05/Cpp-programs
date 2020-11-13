#include<iostream>
 
using namespace std;
 
int main()
{
	char message[100], ch;
	int i, key;
	char customCaesarCipher(char message[],int key);
	char customCaesarCipherDecryption(char message[],int key);
	cout << "Enter a message to encrypt: ";
	cin.getline(message, 100);
	cout << "Enter key: ";
	cin >> key;
	
	customCaesarCipher(message,key);
	
	cout << "Encrypted message: " << message<<endl;

	customCaesarCipherDecryption(message,key);

	 cout <<endl<<"The decrypted message is "<<message;
	
	return 0;
}
char customCaesarCipher(char message [],int key)
{
     int i;
     char ch;
    for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			message[i] = ch;
		}
		
   }
}
char customCaesarCipherDecryption(char message[],int key)
{
		int i;
		char ch;
		for(int i=0;message[i]!='\0';i++)
		{
			ch=message[i];
			if(ch>='a'&& ch<='z')
			{
				ch=ch-key;
			
			  if(ch>'z')
			     {
			     	ch=ch + 'z' -'a'+1;
			   }
			 message[i]=ch;
		   }
			else if(ch >= 'A' && ch <= 'Z')
			{
				ch=ch-key;
				if(ch > 'Z')
				{
					ch=ch + 'Z' - 'A' +1;
				}
				message[i]=ch;
			}
		
	}
}
//	for(i=0;message[i]!='\0';++i)
//	{
//	    cout<< message;
//	}
	
	
	
 
/*

  Encryption
#include<iostream>
 
using namespace std;
 
int main()
{
	char message[100], ch;
	int i, key;
	
	cout << "Enter a message to encrypt: ";
	cin.getline(message, 100);
	cout << "Enter key: ";
	cin >> key;
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			message[i] = ch;
		}
	}
	
	cout << "Encrypted message: " << message;
	
	return 0;
}
Output

Enter a message to encrypt: asd zf
Enter key: 3
Encrypted message: dvg ci

Decryption

#include<iostream>
 
using namespace std;
 
int main()
{
	char message[100], ch;
	int i, key;
	
	cout << "Enter a message to decrypt: ";
	cin.getline(message, 100);
	cout << "Enter key: ";
	cin >> key;
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
			
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
			
			if(ch > 'a'){
				ch = ch + 'Z' - 'A' + 1;
			}
			
			message[i] = ch;
		}
	}
	
	cout << "Decrypted message: " << message;
	
	return 0;
}
Output

Enter a message to decrypt: az GjK
Enter key: 2
Decrypted message: yx EhI
*/
