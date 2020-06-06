
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

White space removed (219 bytes):
p;q;I;char*c;S(b){while(b)b+=*++c>90?92-*c:0;}main(n,a)char**a;{int*s[9],A[99]={0};for(p=q=0,c=a[1];*c;c+=I!=93)I=*c,I==46?putchar(A[p]):I<91?*(I&16?&p:A+p)+=(I&2)-1:I>91?c=s[--q]:A[p]?s[q++]=c:S(1);n>2&&main(n-1,a+1);}

+ = 43, 0010 1011
- = 45, 0010 1101
. = 46, 0010 1110
< = 60, 0011 1100
> = 62, 0011 1110
[ = 91, 0101 1011
] = 93, 0101 1101

*/

p;q;I;
char*c;
S(b){
    while(b)
        b+=*++c>90?92-*c:0;
}
main(n,a)char**a;{
    int*s[9],A[99]={0};
    for(p=q=0,c=a[1];*c;c+=I!=93)
        I=*c,
        I==46?putchar(A[p]):
        I<91?*(I&16?&p:A+p)+=(I&2)-1:
        I>91?c=s[--q]:
        A[p]?s[q++]=c:
        S(1);
    n>2&&main(n-1,a+1);
}