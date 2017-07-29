#ifndef _SORT_H
#define _SORT_H

int i,j,temp=0;

void bubble_sort(int *a,int n1)
{
for(i=0;i<n1;i++)
{
for(j=i+1;j<n1;j++)
{
 if(a[i]>a[j])
 {
 temp=a[i];
a[i]=a[j];
a[j]=temp;
 }
 }
}
}




void merge(int *arr,int min,int mid,int max)
{
int tmp[30];
int i,j,k,m;
j=min;
m=mid+1;
for(i=min; j<=mid && m<=max ; i++)
{
if(arr[j]<=arr[m])
{
tmp[i]=arr[j];
j++;
}
else
{
tmp[i]=arr[m];
m++;
}
}
if(j>mid)
{
for(k=m; k<=max; k++)
{
tmp[i]=arr[k];
i++;
}
}
else
{
for(k=j; k<=mid; k++)
{
tmp[i]=arr[k];
i++;
}
}
for(k=min; k<=max; k++)
arr[k]=tmp[k];
}

void part(int *arr,int min,int max)
{
int mid;
if(min<max)
{
mid=(min+max)/2;
part(arr,min,mid);
part(arr,mid+1,max);
merge(arr,min,mid,max);
}
}

void merge_sort(int *a,int n1)
{
part(a,0,n1-1);
}





void quick(int *x,int first,int last)
{
int pivot;
if(first<last)
{
pivot=first;
i=first;
j=last;
while(i<j)
{
while(x[i]<=x[pivot]&&i<last)
i++;
			
while(x[j]>x[pivot])
j--;
if(i<j)	
{
temp=x[i];
x[i]=x[j];
x[j]=temp;
}
}
temp=x[pivot];
x[pivot]=x[j];
x[j]=temp;
quick(x,first,j-1);
quick(x,j+1,last);
}
}

void quick_sort(int *a,int n1)
{
quick(a,0,n1-1);
}





void shell_sort(int *a,int n1)
{
int gap;
for(gap=n1/2;gap>0;gap=gap/2)
{
for(i=gap;i<n1;++i)
{
 temp=a[i];
for(j=i;j>=gap&&temp<a[j-gap];j=j-gap)
{
a[j]=a[j-gap];
}
a[j]=temp;
}
}
}





void insertion_sort(int *a,int n1)
{
int key;
for(i=1;i<n1;i++)
{
key=a[i];
j=i-1;
while(j>=0&&a[j]>key)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=key;
}
}




void selection_sort(int *a,int n1)
{
int min=i;
for(i=0;i<n1;i++)
{
min=i;
for(j=i+1;j<n1;j++)
{
if(a[j]<a[min])
{
min=j;
}
}
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
}





int getmax(int *a,int n)
{
int max=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
return max;
}
void countsort( int *a,int n,int exp)
{
int output[100];
int count[10]={0};
for(i=0;i<n;i++)
count[(a[i]/exp)%10]++;
for(i=1;i<10;i++)
count[i]=count[i]+count[i-1];
for(i=n-1;i>=0;i--)
{
output[count[(a[i]/exp)%10]-1]=a[i];
count[(a[i]/exp)%10]--;
}
for(i=0;i<n;i++)
a[i]=output[i];
}



void radix_sort(int *a,int n)
{
int exp;
int m=getmax(a,n);
for(exp=1;(m/exp)>0;exp=exp*10)
countsort(a,n,exp);
}




void sort(int *a,int n1)
{
quick_sort(a,n1);
}


int binary_search(int *a,int m,int n)
{
int l=0,u=n-1,mid;
while(l<=u){
mid=(l+u)/2;
if(m==a[mid])
 return mid;
else if(m<a[mid])
 u=mid-1;
else
 l=mid+1;
}
return -1;
}


int linear_search(int *a,int b, int n)
{
int i;
for(i=0;i<n;i++)
 if(a[i]==b)
  return i;
return -1;
}

#endif
