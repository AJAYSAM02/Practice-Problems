#include<stdio.h>
#include<string.h>
int main(){
int tc,found,inner,len;
char str1[100005],str2[100005],strset[27];
scanf("%d",&tc);
while(tc-- >0){
found=0;
for(inner=0;inner<27;inner++){
strset[inner]=0;
}
scanf("%s",str1);
scanf("%s",str2);
len=strlen(str1);
for(inner=0;inner<len;inner++){
strset[str1[inner]-97]=strset[str1[inner]-97]+1;
}
len=strlen(str2);
for(inner=0;inner<len;inner++){
if(strset[str2[inner]-97] != 0){
found++;
strset[str2[inner]-97]=strset[str2[inner]-97]-1;
}
}
if(found>=2)
printf("Yes\n");
else
printf("No\n");
}
return 0;
}
