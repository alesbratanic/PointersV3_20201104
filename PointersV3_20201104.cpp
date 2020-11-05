// PointersV3_20201104.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <string.h>

int main()
{
    //pointers and arrays are different types that are used in simmilar manner.
    char C1[6] = "Hello";
    char* C2 = C1;
    printf("%s\n", C2); //Hello
    printf("%c \n", C2[1]); //e
    C2[0] = 'M';
    printf("%s\n", C2); //Mello
    //C2[i] is equal to *(C2+i)
    //C1[i] is equal to *(C1+i) //similarity

    //differences
    //C1 = C2; wrong use pointers and arrays are different types that are used in simmilar manner.
    //C1 = C1 + 1; wrong use
    //We need to understand when we have an array and when we have a pointer and what we can do with each one
    C2++; //is ok because we are using pointer, we increment the address of pointer by 1 byte, pointer show to the next byte in the C1 variable.
    printf("%c \n", C2[1]); //l
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
