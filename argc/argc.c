#include<stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[]){
int mul=0;
if(argc>1){
for(int i=1;i<argc;i++)
{
if(*argv[i]>47 && *argv[i]<58){
mul+=atoi(argv[i]);
}else{
printf("Error!\n");
return 0;
}}
printf("%d\n",mul);
}else{
printf("%d",argc);
}
return 0;
}
