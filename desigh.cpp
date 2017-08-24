
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char s[100];
    scanf("%s",s);
    int c = 0;

   while (s[c] != '\0') {
      if (s[c] >= 'a' && s[c] <= 'z') {
         s[c] = s[c] - 32;
      }
      c++;
   }

   printf("%s",s);
}

