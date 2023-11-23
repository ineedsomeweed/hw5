#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str= "hithere";
    /*printf("enter something: ");
    scanf_s("%s", &str);*/
    
    int i;
    cout << "original string:\n"<< str<<"\n\n";

    cout << "Printing string in reverse：\n";
    for (i = str.length() - 1; i >= 0; i--)
    {
        cout << str[i];
    }
    printf("\n");
    return 0;
}