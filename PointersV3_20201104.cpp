// PointersV3_20201104.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <string.h>

int main()
{
    char Cp[5] = { 'J','O','H','N','\0' }; //comma separated list we need to do null termination explicitely
    //char Cp[] = "JOHN";   null termination is implicit
    //char Cp[20]="JOHN";
    /*x+char Cp[20];
    Cp[0] = 'J';
    Cp[1] = 'O';
    Cp[2] = 'H';
    Cp[3] = 'N';
    Cp[4] = '\0';*/
    printf("Text is %s\n", Cp); //Text is JOHN
    int len1 = strlen(Cp);
    printf("Length of the string is %d.\n", len1); //Length of the string is 4.
    //The function sees the \0 null character and returns the length of the string

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
