#include <iostream>
#include<cstdlib>
#include<conio.h>
#include<windows.h>
using namespace std;
int i=0;
void dra(){
    system("cls");



              if(i==0){ cout<<"\n \\ | /\n -\\  -\n -   -\n / | \\\n";i++;

        }else if(i==1){ cout<<"\n \\ | /\n - | -\n -   -\n / | \\\n";i++;


        }else if(i==2){ cout<<"\n \\ | /\n -  /-\n -   -\n / | \\\n";i++;

        }else if(i==5){ cout<<"\n \\ | /\n -   -\n -/  -\n / | \\\n";i++;

        }else if(i==4){ cout<<"\n \\ | /\n -   -\n - | -\n / | \\\n";i++;

        }else if(i==3){ cout<<"\n \\ | /\n -   -\n -  \\-\n / | \\\n";i++;
            }

            if(i>5){i=0;}



}




int main()
{

for(int l=0;l<100;l++){
 dra();
 Sleep(166.66);
}
    return 0;
}
