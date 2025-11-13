// 函数: sub_d5b4d0
// 地址: 0xd5b4d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* arg_3f8 = arg2

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
    
    arg_3f8 = arg5
    operator delete(x0)

if ((zx.d(arg3) & 1) != 0)
    operator delete(arg4)
    
    if ((zx.d(arg6) & 1) == 0)
        goto label_d5b834
    
    goto label_d5baec

char* x22_2

if ((zx.d(arg6) & 1) == 0)
label_d5b834:
    x22_2 = arg10
    
    if (x22_2 != 0)
        goto label_d5baf8
    
    goto label_d5b840

label_d5baec:
operator delete(arg7)
x22_2 = arg10

if (x22_2 != 0)
label_d5baf8:
    char* x8_9 = arg11
    char* x0_4 = x22_2
    
    if (x8_9 != x22_2)
        char* x23_1 = x8_9
        
        do
            x23_1 = &x23_1[-0x18]
            
            if ((zx.d(*x23_1) & 1) != 0)
                operator delete(*(x8_9 - 8))
            
            x8_9 = x23_1
        while (x22_2 != x23_1)
        
        x0_4 = arg10
    
    arg11 = x22_2
    operator delete(x0_4)
    
    if ((zx.d(arg8) & 1) == 0)
        goto label_d5b848
    
    goto label_d5bb48

label_d5b840:

if ((zx.d(arg8) & 1) == 0)
label_d5b848:
    
    if ((zx.d(arg12) & 1) != 0)
        goto label_d5bb58
    
    goto label_d5b84c

label_d5bb48:
operator delete(arg9)
char* x22_3

if ((zx.d(arg12) & 1) != 0)
label_d5bb58:
    operator delete(arg13)
    x22_3 = arg16
    
    if (x22_3 == 0)
        goto label_d5b858
    
    goto label_d5bb64

label_d5b84c:
x22_3 = arg16

if (x22_3 != 0)
label_d5bb64:
    char* x8_12 = arg17
    char* x0_8 = x22_3
    
    if (x8_12 != x22_3)
        char* x23_2 = x8_12
        
        do
            x23_2 = &x23_2[-0x18]
            
            if ((zx.d(*x23_2) & 1) != 0)
                operator delete(*(x8_12 - 8))
            
            x8_12 = x23_2
        while (x22_3 != x23_2)
        
        x0_8 = arg16
    
    arg17 = x22_3
    operator delete(x0_8)
    
    if ((zx.d(arg14) & 1) == 0)
        goto label_d5b860
    
    goto label_d5bbb4

label_d5b858:

if ((zx.d(arg14) & 1) != 0)
label_d5bbb4:
    operator delete(arg15)
    
    if ((zx.d(arg18) & 1) != 0)
        operator delete(arg19)
else
label_d5b860:
    
    if ((zx.d(arg18) & 1) != 0)
        operator delete(arg19)

void arg_60
void* x21 = &arg_60
bool cond:4_1

do
    void* x23_3 = *(x21 - 0x18)
    
    if (x23_3 != 0)
        char* x8_15 = *(x21 - 0x10)
        void* x0_13
        
        if (x8_15 == x23_3)
            x0_13 = x23_3
        else
            char* x24_1 = x8_15
            
            do
                x24_1 = &x24_1[-0x18]
                
                if ((zx.d(*x24_1) & 1) != 0)
                    operator delete(*(x8_15 - 8))
                
                x8_15 = x24_1
            while (x23_3 != x24_1)
            
            x0_13 = *(x21 - 0x18)
        
        *(x21 - 0x10) = x23_3
        operator delete(x0_13)
    
    if ((zx.d(*(x21 - 0x30)) & 1) != 0)
        operator delete(*(x21 - 0x20))
    
    void arg_0
    cond:4_1 = x21 - 0x30 == &arg_0
    x21 -= 0x30
while (not(cond:4_1))
sub_1101e04(arg1)
noreturn
