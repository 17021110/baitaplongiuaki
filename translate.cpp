#include <iostream>
#include <ctime>
#include <windows.h>
#include <cstdlib>
#include <conio.h>
#include"console.h"
using namespace std;

string translate(int n)
{
    if(n == 0)
        return "zero";
    else if(n == 1)
        return "one";
    else if(n == 2)
        return "two";
        else if(n == 3)
        return "three";
        else if(n == 4)
        return "four";
        else if(n == 5)
        return "five";
        else if(n == 6)
        return "six";
        else if(n == 7)
        return "seven";
        else if(n == 8)
        return "eight";
        else if(n == 9)
        return "nine";
        else if(n == 10)
        return "ten";
        else if(n == 11)
        return "eleven";
        else if(n == 12)
        return "twelve";
        else if(n == 13)
        return "thirteen";
        else if(n == 14)
        return "fourteen";
        else if(n == 15)
        return "fifteen";
        else if(n == 16)
        return "sixteen";
        else if(n == 17)
        return "seventeen";
        else if(n == 18)
        return "eighteen";
        else if(n == 19)
        return "nineteen";
        else if(n == 20)
        return "twenty";
        else if(n / 10 == 2)
            return "twenty " + translate(n % 10);
        else if(n == 30)
            return "thirty";
        else if(n / 30)
            return "thirty " + translate(n%10);
        else
            return "forty";
}
