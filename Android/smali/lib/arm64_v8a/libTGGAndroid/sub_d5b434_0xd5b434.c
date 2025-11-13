// 函数: sub_d5b434
// 地址: 0xd5b434
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* arg_3b0 = arg2

if (arg5 != 0)
    char* x0 = arg5
    
    if (arg5 != arg2)
        char* x22_1 = arg2
        
        do
            x22_1 = &x22_1[-0x18]
            
            if ((zx.d(*x22_1) & 1) != 0)
                operator delete(*(arg2 - 8))
            
            arg2 = x22_1
        while (arg5 != x22_1)
        
        x0 = arg5
    
    arg_3b0 = arg5
    operator delete(x0)

if ((zx.d(arg3) & 1) != 0)
    operator delete(arg4)
    
    if ((zx.d(arg6) & 1) == 0)
        goto label_d5b81c
    
    goto label_d5ba80

char* x22_2

if ((zx.d(arg6) & 1) == 0)
label_d5b81c:
    x22_2 = arg10
    
    if (x22_2 != 0)
        goto label_d5ba8c
    
    goto label_d5b828

label_d5ba80:
operator delete(arg7)
x22_2 = arg10

if (x22_2 != 0)
label_d5ba8c:
    char* x8_11 = arg11
    char* x0_4 = x22_2
    
    if (x8_11 != x22_2)
        char* x23_1 = x8_11
        
        do
            x23_1 = &x23_1[-0x18]
            
            if ((zx.d(*x23_1) & 1) != 0)
                operator delete(*(x8_11 - 8))
            
            x8_11 = x23_1
        while (x22_2 != x23_1)
        
        x0_4 = arg10
    
    arg11 = x22_2
    operator delete(x0_4)
    
    if ((zx.d(arg8) & 1) == 0)
        goto label_d5b830
    
    goto label_d5badc

label_d5b828:

if ((zx.d(arg8) & 1) == 0)
label_d5b830:
    
    if ((zx.d(arg12) & 1) != 0)
        goto label_d5baec
    
    goto label_d5b834

label_d5badc:
operator delete(arg9)
char* x22_3

if ((zx.d(arg12) & 1) != 0)
label_d5baec:
    operator delete(arg13)
    x22_3 = arg16
    
    if (x22_3 == 0)
        goto label_d5b840
    
    goto label_d5baf8

label_d5b834:
x22_3 = arg16

if (x22_3 != 0)
label_d5baf8:
    char* x8_14 = arg17
    char* x0_8 = x22_3
    
    if (x8_14 != x22_3)
        char* x23_2 = x8_14
        
        do
            x23_2 = &x23_2[-0x18]
            
            if ((zx.d(*x23_2) & 1) != 0)
                operator delete(*(x8_14 - 8))
            
            x8_14 = x23_2
        while (x22_3 != x23_2)
        
        x0_8 = arg16
    
    arg17 = x22_3
    operator delete(x0_8)
    
    if ((zx.d(arg14) & 1) == 0)
        goto label_d5b848
    
    goto label_d5bb48

label_d5b840:

if ((zx.d(arg14) & 1) == 0)
label_d5b848:
    
    if ((zx.d(arg18) & 1) != 0)
        goto label_d5bb58
    
    goto label_d5b84c

label_d5bb48:
operator delete(arg15)
char* x22_4

if ((zx.d(arg18) & 1) != 0)
label_d5bb58:
    operator delete(arg19)
    x22_4 = arg22
    
    if (x22_4 == 0)
        goto label_d5b858
    
    goto label_d5bb64

label_d5b84c:
x22_4 = arg22

if (x22_4 != 0)
label_d5bb64:
    char* x8_17 = arg23
    char* x0_12 = x22_4
    
    if (x8_17 != x22_4)
        char* x23_3 = x8_17
        
        do
            x23_3 = &x23_3[-0x18]
            
            if ((zx.d(*x23_3) & 1) != 0)
                operator delete(*(x8_17 - 8))
            
            x8_17 = x23_3
        while (x22_4 != x23_3)
        
        x0_12 = arg22
    
    arg23 = x22_4
    operator delete(x0_12)
    
    if ((zx.d(arg20) & 1) == 0)
        goto label_d5b860
    
    goto label_d5bbb4

label_d5b858:

if ((zx.d(arg20) & 1) != 0)
label_d5bbb4:
    operator delete(arg21)
    
    if ((zx.d(arg24) & 1) != 0)
        operator delete(arg25)
else
label_d5b860:
    
    if ((zx.d(arg24) & 1) != 0)
        operator delete(arg25)

void arg_90
void* x21 = &arg_90
bool cond:5_1

do
    void* x23_4 = *(x21 - 0x18)
    
    if (x23_4 != 0)
        char* x8_20 = *(x21 - 0x10)
        void* x0_17
        
        if (x8_20 == x23_4)
            x0_17 = x23_4
        else
            char* x24_1 = x8_20
            
            do
                x24_1 = &x24_1[-0x18]
                
                if ((zx.d(*x24_1) & 1) != 0)
                    operator delete(*(x8_20 - 8))
                
                x8_20 = x24_1
            while (x23_4 != x24_1)
            
            x0_17 = *(x21 - 0x18)
        
        *(x21 - 0x10) = x23_4
        operator delete(x0_17)
    
    if ((zx.d(*(x21 - 0x30)) & 1) != 0)
        operator delete(*(x21 - 0x20))
    
    void arg_0
    cond:5_1 = x21 - 0x30 == &arg_0
    x21 -= 0x30
while (not(cond:5_1))
sub_1101e04(arg1)
noreturn
