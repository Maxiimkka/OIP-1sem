#include <iostream>

using namespace std;

void main(){
    setlocale(LC_CTYPE, "Russian");
    char str[5];
    char strl[5];
    int i, j;
    cout << "������� ������ 1\n";
    cin >> str;
    cout << "������� ������ 2\n";
    cin >> strl;

    for (i = 0; i < 5; i++) 
        for (j = 0; j < 5; j++) 

            if (str[i] == strl[j]) 
                cout << str[i];
               
            
        

    
}