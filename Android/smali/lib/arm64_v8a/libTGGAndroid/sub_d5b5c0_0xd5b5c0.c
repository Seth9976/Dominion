// 函数: sub_d5b5c0
// 地址: 0xd5b5c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg2) & 1) != 0)
    operator delete(arg3)
    
    if ((zx.d(arg4) & 1) == 0)
        goto label_d5b84c
    
    goto label_d5bb58

char* x22

if ((zx.d(arg4) & 1) == 0)
label_d5b84c:
    x22 = arg8
    
    if (x22 != 0)
        goto label_d5bb64
    
    goto label_d5b858

label_d5bb58:
operator delete(arg5)
x22 = arg8

if (x22 != 0)
label_d5bb64:
    char* x8_5 = arg9
    char* x0_2 = x22
    
    if (x8_5 != x22)
        char* x23_1 = x8_5
        
        do
            x23_1 = &x23_1[-0x18]
            
            if ((zx.d(*x23_1) & 1) != 0)
                operator delete(*(x8_5 - 8))
            
            x8_5 = x23_1
        while (x22 != x23_1)
        
        x0_2 = arg8
    
    arg9 = x22
    operator delete(x0_2)
    
    if ((zx.d(arg6) & 1) == 0)
        goto label_d5b860
    
    goto label_d5bbb4

label_d5b858:

if ((zx.d(arg6) & 1) != 0)
label_d5bbb4:
    operator delete(arg7)
    
    if ((zx.d(arg10) & 1) != 0)
        operator delete(arg11)
else
label_d5b860:
    
    if ((zx.d(arg10) & 1) != 0)
        operator delete(arg11)

void arg_30
void* x21_1 = &arg_30
bool cond:1_1

do
    void* x23_2 = *(x21_1 - 0x18)
    
    if (x23_2 != 0)
        char* x8_8 = *(x21_1 - 0x10)
        void* x0_7
        
        if (x8_8 == x23_2)
            x0_7 = x23_2
        else
            char* x24_1 = x8_8
            
            do
                x24_1 = &x24_1[-0x18]
                
                if ((zx.d(*x24_1) & 1) != 0)
                    operator delete(*(x8_8 - 8))
                
                x8_8 = x24_1
            while (x23_2 != x24_1)
            
            x0_7 = *(x21_1 - 0x18)
        
        *(x21_1 - 0x10) = x23_2
        operator delete(x0_7)
    
    if ((zx.d(*(x21_1 - 0x30)) & 1) != 0)
        operator delete(*(x21_1 - 0x20))
    
    void arg_0
    cond:1_1 = x21_1 - 0x30 == &arg_0
    x21_1 -= 0x30
while (not(cond:1_1))
sub_1101e04(arg1)
noreturn
