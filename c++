#include<iostream>
#include<math.h>
using namespace std;
int main ()

{int x,s=0;
cin>>x;
s=x/500+x%500/200+x%500%200/100+x%500%200%100/50+x%500%200%100%50/20+x%500%200%100%50%20/10+x%500%200%100%50%20%10;
if (10>x||x%10>0)
{
cout<<-1;}
else {

cout<<s;}
return 0;
}
