#include <iostream>
#include <ctime>
#include <windows.h>
#include <cstdlib>
#include <conio.h>
#include"console.h"
#include"translate.h"
#include<fstream>
#include "calculated.h"
#include"introduce.h"
void inLim()
{
	for(int i = 0;i < 25; i ++)
	{
		gotoXY(50, i);
		cout << "|";
	}
}
void playgame(int &diem, int &cau)
{

	
    srand(time(NULL));
    inLim();
    while(1)
    {
        system("cls");
        inLim();
        gotoXY(51,1);
        cout<<"diem cua ban "<<diem;
        Sleep(300);
        gotoXY(0,0);
            
		int n1 = rand() % 20;
		int n2 = rand() % 20;
        string num1 = translate(n1), num2 = translate(n2), add = translate(n1 + n2);
        TextColor (12);
        cout<<"                cau "<< cau<<endl;
        TextColor (15);
        cout << num1 << " + " << num2 << " = ?" << endl;
         
        cout<< "Dap an cua ban: ";
        string anwser = calculated();
        
        if(add != anwser)
        {
            cout << add << endl;;
            cout << "Game Over";
            break;
        }
        else
        {diem =diem +10;
         cau=cau+1;
		}
    }
        ifstream file("diemcao.txt");
        int diemcao;
        file >> diemcao;
        if(diemcao < diem)
        {
            ofstream file("diemcao.txt");
            file << diem;
            diemcao = diem;
        }
    file.close();
    system("cls");
    gotoXY(25,5);
    cout<<"diem cua ban la: "<<diem<<endl;
    gotoXY(25,6);
    cout<<"diem cao nhat: "<<diemcao;
    gotoXY(30,8);
    cout<<"game over!";
    while(1)
    {
    	if(kbhit())
    	break;
	}
}
