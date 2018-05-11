#include <iostream>
#include <ctime>
#include <iostream>
#include <conio.h>
#include"console.h"
#include <windows.h>

using namespace std;





void introduce()
{
  while(1)
	{
		gotoXY(40,9);
		TextColor (10);
		cout<<"LAM TOAN"<<endl;
		gotoXY(30,11);
		TextColor (9);
		cout<<"nhan phim bat ki de bat dau";
		Sleep(500);
		if(kbhit())
		{	getch();
		
			break;
			
		}
	}
	
	system("cls");
	while(1)
	{
		gotoXY(10,7);
		TextColor (15);
		cout<<"Thuc hien phep toan tinh ra ket qua roi dien dap an tra loi";
		gotoXY(10,8);
		cout<<"tra loi xong an enter de tra loi. Moi cau duoc 10 diem.";
		gotoXY(10,9);
		cout<<"Thoi gian tra loi 1 cau la 10 giay";
		Sleep(500);
		if(kbhit())
		{
			getch();
			break;
		}
	}
}
