#include <stdio.h>
#include <stdlib.h>
const int n=6;
//*************************************************************
//*************************************************************
int t75 (int a[],int n,int x, int l, int r)
{
int m=(l+r)/2;
    if (l<=r)
    {
    if (a[m]==x)
        return m;
    else if (a[m]>x) return t75(a, n, x, l, m-1);
        else return t75(a, n, x, m+1, r);
    }
        else return -1;
}
//*************************************************************
//*************************************************************
int main()
{
    int jobnumb, k, a[n], i, c[n], j, s=0;
    printf("Task 7\nSelect job number (3 or 5)\n");
scanf("%d", &jobnumb);
while (jobnumb)
{
//*************************************************************
//*************************************************************

    if (jobnumb==3)
    {
        printf(" Enter an array of %d elements\n", n);
for (i=0; i<n; i++)
scanf("%d", &a[i]);
for (i=0; i<n; i++) c[i]=a[i];
for (i=0; i<n-1; i++)
{
    j=i+1;
    for (k=j; k<n; k++)
        if (a[k]==a[i]) c[k]=0;
}
for (i=0; i<n; i++)
{
    if (c[i]!=0)
    {
        a[s]=c[i];
        s++;
    }
}
for (j=s; j<n; j++)
    a[j]=0;
for (i=0; i<n; i++) printf("%d ", a[i]);
    }
    s=0;
//*************************************************************
//*************************************************************
    if (jobnumb==5)
    {
        printf("enter an ordered array of %d elements\n", n);
          int  x;
    for ( i=0; i<n; i++) scanf ("%d",&a[i]);
    printf("enter the element you are looking for\n");
    scanf ("%d",&x);
    k=t75(a, n, x, 0, n-1);
    if (k==-1) printf ("\nitem not found");
    else printf ("\nitem found (its number in the array is %d)", k);
    }
    printf("\nTask 7\nSelect job number (3 or 5)\n");
        scanf("%d", &jobnumb);

}
    return 0;
}
