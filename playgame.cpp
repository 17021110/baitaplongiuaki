#include "playgame.h"
#include"phrase.h"
string calculated()
{
    phrase instructionTIme("Thoi gian con lai: ", 51, 3);
    string answer;
    char copyAnswer[100];
    int l = 0, time = 100, xAnswer = 18, yAnswer = 2;
	while(time != 0)
	{
	    instructionTIme.print();
	    cout << time / 5 << " ";
		if(kbhit())
		{
		    char key = getch();
		    if(key == 13)
            {
                answer = string(l, ' ');
                for(int i = 0;i < l;i ++)
                    answer[i] = copyAnswer[i];
                    gotoXY(xAnswer, yAnswer);
                    cout << answer;
                return answer;
            }
                else if(key == 8
                && l != 0)
                {
                    l --;
                    copyAnswer[l] = 0;
                    gotoXY(xAnswer, yAnswer);
                    cout << copyAnswer << " ";
                }
            else
            {
                copyAnswer[l ++] = key;
                copyAnswer[l] = 0;
                gotoXY(xAnswer, yAnswer);
                cout << copyAnswer;
            }
		}
        time --;
		Sleep(200);
	}
	return "";
}

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
