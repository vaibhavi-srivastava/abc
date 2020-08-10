#include <bits/stdc++.h> 
using namespace std; 
  
// function to print circle pattern 
void printPattern(int radius) { 
  
  // dist represents distance to the center 
  float dist; 
  
  // for horizontal movement 
  for (int i = 0; i <= 2 * radius; i++) { 
  
    // for vertical movement 
    for (int j = 0; j <= 2 * radius; j++) { 
      dist = sqrt((i - radius) * (i - radius) +  
                  (j - radius) * (j - radius)); 
  
      // dist should be in the range (radius - 0.5) 
      // and (radius + 0.5) to print stars(*) 
      if (dist > radius - 0.5 && dist < radius + 0.5)  
        cout << "*"; 
      else 
        cout << " ";       
    } 
  
    cout << "\n"; 
  } 
} 
  
// Driver Code 
int main() { 
  int radius; 
  cin>>radius;
  printPattern(radius); 
  return 0; 
} 

