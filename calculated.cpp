#include <iostream>
#include <ctime>
#include <windows.h>
#include <cstdlib>
#include <conio.h>
#include"console.h"
using namespace std;



string calculated()
{
     string t;
	int time = 10;
	while(time != 0)
	{
		gotoXY(51, 3);
		cout << "                         ";
		gotoXY(51, 3);
		cout << "Thoi gian con lai: " << time;
		Sleep(1000);
		time --;
		if(kbhit())
		{	
			gotoXY(18,2);
			getline(cin,t );
			return t;
		}
		
	}
	return t;
	
}
