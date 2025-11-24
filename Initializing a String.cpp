#include<stdio.h>

int main()
{
char str1[] = "Mwansa";

char str2[7] = "Mwansa";

char str3[7] = {'M','w','a','n','s','a','\0'};

char str4[] = {'M','w','a','n','s','a','\0'};
printf("%s\n",str1);  
printf("%s\n",str2);  
printf("%s\n",str3);  
printf("%s\n",str4);
return 0;
}

