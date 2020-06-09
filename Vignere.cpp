#include<iostream>
#include<string.h>
using namespace std;



char array[27][27];


string Generate(char *PT, char *key)
{
	int msgLen = strlen(PT);
	int keyLen = strlen(key);
	char newkey[msgLen];
	int i,j,a;
	a=strlen(PT);
	for(i=0, j=0; i<a;++i,++j)
	{
		if(j==keyLen)
		 j=0;
		newkey[i] = key[j];
	}
	return newkey;	
}

void Cipher(char *PT, char *key)
{
	int msgLen = strlen(PT);
	char cipher[msgLen];
	for (int i=0; i<msgLen;i++)
	{
		cipher[i] = (PT[i] + key[i]) % 26 +'A';
		
	}
	
	cout<<"Required Cipher is:  "<<cipher;
	
}

void deCipher(char *CT, char *key2)
{
	int msgLen = strlen(CT);
	char dcipher[msgLen];
	for (int i=0; i<msgLen;i++)
	{
	
	
	
		dcipher[i] =  (CT[i] - key2[i] + 26) % 26 +'A';
		
	}
	
	cout<<"Required deCiphered code is:  "<<dcipher;
	
}
void vigenere()
{
	array[0][0]=0;
	char P=65;
	for(int i=1;i<27;i++)
	{
		
		array[0][i]= P;
		P++;
		
	}
	
	P=65;
	for(int j=1;j<27;j++)
	{
		
		array[j][0]=P;
		P++;
	}
	
	char d=65;
	char x;
	for(int b=1; b<27; b++)
	{ x=d;
		for(int c=1; c<27; c++)
		{
			if (x==91)
			 x=65;
			array[b][c]=x%91;
			x++;
		}
	d=d+1;	
	}
}

int main()
{
	int x;
	cout<<"Press 1 For Encryption"<<endl;
	cout<<endl;
	cout<<"Press 2 For Decryption"<<endl;
	
	cin>>x;
	
if(x==1){
char PT[] = "PRANAV";
int PtLen=strlen(PT);
	char key[] = "HUG" ;
	string CT;
	
	string k = Generate(PT, key);
	
	char charKey[PtLen+1];
		
		strcpy(charKey,k.c_str());
	
//	cout<<charKey;
	
	Cipher(PT, charKey);
	 
	}
	else if(x==2)
{
	
char cipher[]= "WLGUUB";
int CtLen=strlen(cipher);
char key2[]="HUG";


	string k2 = Generate(cipher, key2);
	
	char charKey2[CtLen+1];
		
		strcpy(charKey2,k2.c_str());
 deCipher(cipher,charKey2);		
}
else{
	
	cout<<"Run Again and Enter valid input" ;
}
	 return 0;
}

		




