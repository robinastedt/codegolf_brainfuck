
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

White space removed (273 bytes):
i;p;q;b;I;char*c;S(){b=1;while(b){*++c=='['?++b:*c==']'?--b:0;}}main(int n,char**a){for(i=1;i<n;i++){p=q=0;int A[99]={0};int*s[9];c=a[i];while(*c){I=*c;I=='>'?p++:I=='<'?p--:I=='+'?A[p]++:I=='-'?A[p]--:I=='.'?putchar(A[p]):I==']'?c=s[--q]:A[p]?s[q++]=c:S();I!=']'?c++:0;}}}
*/

i;p;q;b;I;
char*c;

S(){
    b=1;
    while(b){
        *++c=='['?++b:*c==']'?--b:0;
    }
}

main(int n,char**a){
    for (i=1;i<n;i++) {
        p=q=0;
        int A[99]={0};
        int*s[9];
        c=a[i];
        while(*c){
            I=*c;
            I=='>'?
            p++:
            I=='<'?
            p--:
            I=='+'?
            A[p]++:
            I=='-'?
            A[p]--:
            I=='.'?
            putchar(A[p]):
            I==']'?
            c=s[--q]:
            A[p]?
            s[q++]=c:
            S();
            I!=']'?c++:0;
        }
    }
}