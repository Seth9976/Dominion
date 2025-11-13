// 函数: sub_d5b4a0
// 地址: 0xd5b4a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg2) & 1) != 0)
    operator delete(arg3)

if (arg6 != 0)
    char* x8_6 = arg7
    char* x0_1 = arg6
    
    if (x8_6 != arg6)
        char* x23_1 = x8_6
        
        do
            x23_1 = &x23_1[-0x18]
            
            if ((zx.d(*x23_1) & 1) != 0)
                operator delete(*(x8_6 - 8))
            
            x8_6 = x23_1
        while (arg6 != x23_1)
        
        x0_1 = arg6
    
    arg7 = arg6
    operator delete(x0_1)
    
    if ((zx.d(arg4) & 1) == 0)
        goto label_d5b830
    
    goto label_d5badc

if ((zx.d(arg4) & 1) == 0)
label_d5b830:
    
    if ((zx.d(arg8) & 1) != 0)
        goto label_d5baec
    
    goto label_d5b834

label_d5badc:
operator delete(arg5)
char* x22_1

if ((zx.d(arg8) & 1) != 0)
label_d5baec:
    operator delete(arg9)
    x22_1 = arg12
    
    if (x22_1 == 0)
        goto label_d5b840
    
    goto label_d5baf8

label_d5b834:
x22_1 = arg12

if (x22_1 != 0)
label_d5baf8:
    char* x8_9 = arg13
    char* x0_5 = x22_1
    
    if (x8_9 != x22_1)
        char* x23_2 = x8_9
        
        do
            x23_2 = &x23_2[-0x18]
            
            if ((zx.d(*x23_2) & 1) != 0)
                operator delete(*(x8_9 - 8))
            
            x8_9 = x23_2
        while (x22_1 != x23_2)
        
        x0_5 = arg12
    
    arg13 = x22_1
    operator delete(x0_5)
    
    if ((zx.d(arg10) & 1) == 0)
        goto label_d5b848
    
    goto label_d5bb48

label_d5b840:

if ((zx.d(arg10) & 1) == 0)
label_d5b848:
    
    if ((zx.d(arg14) & 1) != 0)
        goto label_d5bb58
    
    goto label_d5b84c

label_d5bb48:
operator delete(arg11)
char* x22_2

if ((zx.d(arg14) & 1) != 0)
label_d5bb58:
    operator delete(arg15)
    x22_2 = arg18
    
    if (x22_2 == 0)
        goto label_d5b858
    
    goto label_d5bb64

label_d5b84c:
x22_2 = arg18

if (x22_2 != 0)
label_d5bb64:
    char* x8_12 = arg19
    char* x0_9 = x22_2
    
    if (x8_12 != x22_2)
        char* x23_3 = x8_12
        
        do
            x23_3 = &x23_3[-0x18]
            
            if ((zx.d(*x23_3) & 1) != 0)
                operator delete(*(x8_12 - 8))
            
            x8_12 = x23_3
        while (x22_2 != x23_3)
        
        x0_9 = arg18
    
    arg19 = x22_2
    operator delete(x0_9)
    
    if ((zx.d(arg16) & 1) == 0)
        goto label_d5b860
    
    goto label_d5bbb4

label_d5b858:

if ((zx.d(arg16) & 1) != 0)
label_d5bbb4:
    operator delete(arg17)
    
    if ((zx.d(arg20) & 1) != 0)
        operator delete(arg21)
else
label_d5b860:
    
    if ((zx.d(arg20) & 1) != 0)
        operator delete(arg21)

char* x21_1 = &arg2
bool cond:3_1

do
    void* x23_4 = *(x21_1 - 0x18)
    
    if (x23_4 != 0)
        char* x8_15 = *(x21_1 - 0x10)
        void* x0_14
        
        if (x8_15 == x23_4)
            x0_14 = x23_4
        else
            char* x24_1 = x8_15
            
            do
                x24_1 = &x24_1[-0x18]
                
                if ((zx.d(*x24_1) & 1) != 0)
                    operator delete(*(x8_15 - 8))
                
                x8_15 = x24_1
            while (x23_4 != x24_1)
            
            x0_14 = *(x21_1 - 0x18)
        
        *(x21_1 - 0x10) = x23_4
        operator delete(x0_14)
    
    if ((zx.d(*(x21_1 - 0x30)) & 1) != 0)
        operator delete(*(x21_1 - 0x20))
    
    void arg_0
    cond:3_1 = x21_1 - 0x30 == &arg_0
    x21_1 -= 0x30
while (not(cond:3_1))
sub_1101e04(arg1)
noreturn
