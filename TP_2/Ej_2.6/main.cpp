#include <iostream>
#include <string.h>

using namespace std;


void invertir (char *);

int main()
{
  char x[50];
  cin>>x;
  invertir(x) ;
  cout<<x;
}


void invertir (char *p){
int n=strlen(p);
char aux;
for (int i=0;i<n;i++){
     aux=*(p+i);
    *(p+i)=*(p+n-i-1);
    *(p+n-i-1)=aux;
 }
}

