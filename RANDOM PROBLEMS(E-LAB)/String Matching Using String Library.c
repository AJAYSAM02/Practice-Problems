#include <stdio.h>
#include <string.h>
int main()
{
char str1[5], str2[5];
int result,i,j;
scanf("%s",str1);
scanf("%s",str2);
// comparing strings str1 and str2
result = strcmp(str1, str2);
// printf("strcmp(str1, str2) = %d\n", result);
if(result!=0){
printf("Entered strings are not equal");
}else{
printf("Entered strings are equal");
}
return 0;
}
