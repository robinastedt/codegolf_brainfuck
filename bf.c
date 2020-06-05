
/*
i = program index
n = argc
a = argv
p = pointer
c = program counter
A = array
s = stack
q = stack pointer
b = bracket counter
I = instruction
S = skip function

White space removed (242 bytes):
p;q;b;I;char*c;S(){b=1;while(b){*++c==91?++b:*c==93?--b:0;}}main(n,a)char**a;{p=q=0;int A[99]={0};int*s[9];c=a[1];while(*c)I=*c,I==46?putchar(A[p]):I<91?*(I&16?&p:A+p)+=(I&2)-1:I==93?c=s[--q]:A[p]?s[q++]=c:S(),I^93?c++:0;n>2?main(n-1,a+1):0;}
*/

p;q;b;I;
char*c;
S(){
    b=1;
    while(b){
        *++c==91?++b:*c==93?--b:0;
    }
}
main(n,a)char**a;{
    p=q=0;
    int A[99]={0};
    int*s[9];
    c=a[1];
    while(*c)
        I=*c,
        I==46?putchar(A[p]):
        I<91?*(I&16?&p:A+p)+=(I&2)-1:
        I==93?c=s[--q]:
        A[p]?s[q++]=c:
        S(),
        I^93?c++:0;
    n>2?main(n-1,a+1):0;
}