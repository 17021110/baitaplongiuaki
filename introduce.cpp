#include "introduce.h"

void introduce()
{
	phrase nameGame("LAM TOAN", 40, 9, 10), instruction("nhan phim bat ki de bat dau", 30, 11, 9);
	nameGame.print();
	instruction.print();

    getch();
	system("cls");

	phrase lawPlay1("Thuc hien phep toan tinh ra ket qua roi dien dap an tra loi", 10, 7, 15),
	lawPlay2("tra loi xong an enter de tra loi. Moi cau duoc 10 diem.", 10, 8, 15),
	lawPlay3("Thoi gian tra loi 1 cau la 20 giay", 10, 9, 15);
	lawPlay1.print();
	lawPlay2.print();
	lawPlay3.print();

	getch();
	return;
	
}
