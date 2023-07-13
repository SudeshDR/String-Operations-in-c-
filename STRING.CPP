#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main(){
    clrscr();
    char str1[100];
    char str2[100];
    cout<<"Enter String 1:";
    gets(str1);
    cout<<"Enter String 2:";
    gets(str2);

    int length1=strlen(str1);
    int length2=strlen(str2);
    cout<<"Length of String 1:"<<length1<<endl;
    cout<<"Length of String 2:"<<length2<<endl;

    strcat(str1,str2);
    cout<<"Concatenated String:"<<str1<<endl;

    int compareresult=strcmp(str1, str2);
    if(compareresult==0)
	cout<<"Strings are equal:"<<endl;
    else if(compareresult>0)
	cout<<"String 1 is greater than string 2:"<<endl;
    else
	cout<<"String 2 is greater than String 1:"<<endl;

    strcpy(str1,str2);
    cout<<"Copied string:"<<str1<<endl;
    getch();
}