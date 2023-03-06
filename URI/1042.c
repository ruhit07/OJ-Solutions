#include<stdio.h>

int main(){

  int x,y,z,p,q,r,t;
    scanf("%d%d%d",&x,&y,&z);
    p = x;
    q = y;
    r = z;
    if (p>q)
    {
        t = p;
        p = q;
        q = t;
    }
    if (q>r)
    {
        t = q;
        q = r;
        r = t;
    }
    if (p>q)
    {
        t = p;
        p = q;
        q = t;
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",p,q,r,x,y,z);

return 0;
}
