#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  prints Name.
//  Input          :  String
//  Output         :  String
//  Descreption    :  Write a program which accept name from user and print that name.
//  Date           :  3/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



int main()
{
    char Name[30];

    printf("Please enter full name: ");

    scanf("%[^(\n)]s",&Name);

    printf("Your name is %s",Name);

    return EXIT_SUCCESS;
}

