#ifndef _STRINGLINE_H
#define _STRINGLINE_H

string[] toks(char *p,char c=' ',int *n)
{
string result[100];
int i=0; char *begin,*end;
do
{
begin=p;
while(*p!=c && *p)
 p++;
end=p;
result[i]=string(begin,end);
i++;
}while(*p++);
*n=i;
return results;
}

void password(char *p)
{
char c;
c=_getch();
while(ch!=13)
{
*p=ch;
p++;
cout<<'*';
ch=_getch();
}
}

#endif