#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char name1[] = "Ishtiaq Mahmood";
    char name2[30];
    char a[10] = "Ronnie";
    char b[10] = " Dio";

    int len = strlen(name1); // length of string
    cout << "Length of string : " << len <<endl;

    strcpy(name2,name1); // copy string one to another variable
    cout << "Name2 : " << name2 << endl;

    strcat(a,b); // Concatanation
    cout << "Concatenation : " << a << endl;

    int x = strcmp(a,b);
    if(x == 0){
        cout << "equal";
    }
    else{
        cout << "not equal";
    }




}
