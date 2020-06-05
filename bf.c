
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

White space removed (294 bytes):
i;p;q;b;I;char*c;S(){b=0;do{*c=='['?++b:*c==']'?--b:0;++c;}while(b);c--;}main(int n,char** a){for (i=1;i<n;i++) {p=0;int A[99]={0};int*s[9];q=0;c=a[i];while(*c){I=*c;I=='>'?p++:I=='<'?p--:I=='+'?A[p]++:I=='-'?A[p]--:I=='.'?putchar(A[p]):I==']'?c = s[--q]:A[p]?s[q++]=c:S();if(I==']')c--;++c;}}}
*/

i;p;q;b;I;
char*c;

S(){
    b=0;
    do{
        *c=='['?++b:*c==']'?--b:0;
        ++c;
    }while(b);
    c--;
}


main(int n,char** a){
    for (i=1;i<n;i++) {
        p=0;
        int A[99]={0};
        int*s[9];
        q=0;
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
            c = s[--q]:
            A[p]?
            s[q++]=c:
            S();
            if(I==']')c--;
            ++c;
        }
    }
}