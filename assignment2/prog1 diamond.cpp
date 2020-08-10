#include <iostream> 
using namespace std; 
void printPattern(int); 
int main() 
{ 
    int n ; 
    cin>>n;
  
    printPattern(n); 
} 
void printPattern(int n) 
{ 
    int i, j, space, k = 0; 
  
    // Print upper triangle 
    for (i = 1; i <= n; i++) { 
        // Print spaces 
        for (j = 1; j <= n - i; j++) { 
            cout << " "; 
        } 
        // Print # 
        while (k != (2 * i - 1)) { 
            if (k == 0 or k == 2 * i - 2) 
                cout << "*"; 
            else
                cout << " "; 
            k++; 
        } 
        k = 0; 
        // move to next row 
        cout << endl; 
    } 
    n--; 
    // Print lower triangle 
    for (i = n; i >= 1; i--) { 
        // Print spaces 
        for (j = 0; j <= n - i; j++) { 
            cout << " "; 
        } 
        // Print # 
        k = 0; 
        while (k != (2 * i - 1)) { 
            if (k == 0 or k == 2 * i - 2) 
                cout << "*"; 
            else
                cout << " "; 
            k++; 
        } 
        cout << endl; 
    } 
} 

