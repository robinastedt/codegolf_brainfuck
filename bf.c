
/*
n = argc
a = argv
p = pointer
c = program counter
A = array
s = stack
q = stack pointer
b = bracket counter
i = instruction
S = skip function

White space removed (217 bytes):
p;q;i;char*c;S(b){while(b)b+=*++c>90?92-*c:0;}main(n,a)int**a;{int*s[9],A[99]={0};for(p=q=0,c=*++a;*c;c+=i!=93)i=*c,i^46?i<91?*(i&16?&p:A+p)+=(i&2)-1:i>91?c=s[--q]:A[p]?s[q++]=c:S(1):putchar(A[p]);n>2&&main(n-1,a);}

+ = 43, 0010 1011
- = 45, 0010 1101
. = 46, 0010 1110
< = 60, 0011 1100
> = 62, 0011 1110
[ = 91, 0101 1011
] = 93, 0101 1101

*/

p;q;i;
char*c;
S(b){
    while(b)
        b+=*++c>90?92-*c:0;
}
main(n,a)int**a;{
    int*s[9],A[99]={0};
    for(p=q=0,c=*++a;*c;c+=i!=93)
        i=*c,
        i^46?
        i<91?*(i&16?&p:A+p)+=(i&2)-1:
        i>91?c=s[--q]:
        A[p]?s[q++]=c:
        S(1):
        putchar(A[p]);
    n>2&&main(n-1,a);
}