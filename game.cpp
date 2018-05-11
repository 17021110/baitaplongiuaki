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
#include"playgame.h"
using namespace std;



int main()
{  
    int diem;
	diem=0;
	int cau;
	cau=1;
    introduce();
    playgame(diem, cau);

}
