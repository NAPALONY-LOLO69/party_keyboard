//#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

void nl()
     {
      keybd_event( VK_NUMLOCK,
                      0x45,
                      KEYEVENTF_EXTENDEDKEY | 0,
                      0 );
      keybd_event( VK_NUMLOCK,
                      0x45,
                      KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
                      0);
      }
void cl()
     {
      keybd_event( VK_CAPITAL,
                      0x45,
                      KEYEVENTF_EXTENDEDKEY | 0,
                      0 );
      keybd_event( VK_CAPITAL,
                      0x45,
                      KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
                      0);
      }
void sl()
     {
      keybd_event( VK_SCROLL,
                      0x45,
                      KEYEVENTF_EXTENDEDKEY | 0,
                      0 );
      keybd_event( VK_SCROLL,
                      0x45,
                      KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP,
                      0);
      }
   int main()
   {
      FreeConsole();
      srand(time( NULL ));
      unsigned short a, czas;
      mm:
               czas = ((rand() % 49) + 11);
               a = ((rand() % 3) + 1);
               switch(a)
               {
               case 1:
                    nl();
                    break;  
               case 2:
                    cl();
                    break; 
               case 3:
                    sl();
                    break; 
               default:
                    break;        
               }
      Sleep(czas);
      goto mm;
      return 0;  
   }
