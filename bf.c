
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

White space removed (230 bytes):
p;q;I;char*c;S(b){while(b)*++c==91?++b:*c==93?--b:0;}main(n,a)char**a;{int*s[9],A[99]={0};for(p=q=0,c=a[1];*c;)I=*c,I==46?putchar(A[p]):I<91?*(I&16?&p:A+p)+=(I&2)-1:I>91?c=s[--q]:A[p]?s[q++]=c:S(1),I^93?c++:0;n>2?main(n-1,a+1):0;}
*/

p;q;I;
char*c;
S(b){
    while(b)
        *++c==91?++b:*c==93?--b:0;
}
main(n,a)char**a;{
    int*s[9],A[99]={0};
    for(p=q=0,c=a[1];*c;)
        I=*c,
        I==46?putchar(A[p]):
        I<91?*(I&16?&p:A+p)+=(I&2)-1:
        I>91?c=s[--q]:
        A[p]?s[q++]=c:
        S(1),
        I^93?c++:0;
    n>2?main(n-1,a+1):0;
}