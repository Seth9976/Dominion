// 函数: sub_d5b56c
// 地址: 0xd5b56c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* arg_440 = arg2

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
    
    arg_440 = arg5
    operator delete(x0)

if ((zx.d(arg3) & 1) != 0)
    operator delete(arg4)
    
    if ((zx.d(arg6) & 1) == 0)
        goto label_d5b84c
    
    goto label_d5bb58

char* x22_2

if ((zx.d(arg6) & 1) == 0)
label_d5b84c:
    x22_2 = arg10
    
    if (x22_2 != 0)
        goto label_d5bb64
    
    goto label_d5b858

label_d5bb58:
operator delete(arg7)
x22_2 = arg10

if (x22_2 != 0)
label_d5bb64:
    char* x8_7 = arg11
    char* x0_4 = x22_2
    
    if (x8_7 != x22_2)
        char* x23_1 = x8_7
        
        do
            x23_1 = &x23_1[-0x18]
            
            if ((zx.d(*x23_1) & 1) != 0)
                operator delete(*(x8_7 - 8))
            
            x8_7 = x23_1
        while (x22_2 != x23_1)
        
        x0_4 = arg10
    
    arg11 = x22_2
    operator delete(x0_4)
    
    if ((zx.d(arg8) & 1) == 0)
        goto label_d5b860
    
    goto label_d5bbb4

label_d5b858:

if ((zx.d(arg8) & 1) != 0)
label_d5bbb4:
    operator delete(arg9)
    
    if ((zx.d(arg12) & 1) != 0)
        operator delete(arg13)
else
label_d5b860:
    
    if ((zx.d(arg12) & 1) != 0)
        operator delete(arg13)

void arg_30
void* x21 = &arg_30
bool cond:3_1

do
    void* x23_2 = *(x21 - 0x18)
    
    if (x23_2 != 0)
        char* x8_10 = *(x21 - 0x10)
        void* x0_9
        
        if (x8_10 == x23_2)
            x0_9 = x23_2
        else
            char* x24_1 = x8_10
            
            do
                x24_1 = &x24_1[-0x18]
                
                if ((zx.d(*x24_1) & 1) != 0)
                    operator delete(*(x8_10 - 8))
                
                x8_10 = x24_1
            while (x23_2 != x24_1)
            
            x0_9 = *(x21 - 0x18)
        
        *(x21 - 0x10) = x23_2
        operator delete(x0_9)
    
    if ((zx.d(*(x21 - 0x30)) & 1) != 0)
        operator delete(*(x21 - 0x20))
    
    void arg_0
    cond:3_1 = x21 - 0x30 == &arg_0
    x21 -= 0x30
while (not(cond:3_1))
sub_1101e04(arg1)
noreturn
