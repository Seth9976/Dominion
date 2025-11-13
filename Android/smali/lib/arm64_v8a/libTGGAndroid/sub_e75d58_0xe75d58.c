// 函数: sub_e75d58
// 地址: 0xe75d58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg1[9]

if (x20 != 0)
    char* x8_1 = arg1[0xa]
    void* x0_1
    
    if (x8_1 == x20)
        x0_1 = x20
    else
        char* x21_1 = x8_1
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_1 - 8))
            
            x8_1 = x21_1
        while (x20 != x21_1)
        
        x0_1 = arg1[9]
    
    arg1[0xa] = x20
    operator delete(x0_1)

void* x20_1 = arg1[6]

if (x20_1 != 0)
    char* x8_2 = arg1[7]
    void* x0_3
    
    if (x8_2 == x20_1)
        x0_3 = x20_1
    else
        char* x21_2 = x8_2
        
        do
            x21_2 = &x21_2[-0x18]
            
            if ((zx.d(*x21_2) & 1) != 0)
                operator delete(*(x8_2 - 8))
            
            x8_2 = x21_2
        while (x20_1 != x21_2)
        
        x0_3 = arg1[6]
    
    arg1[7] = x20_1
    operator delete(x0_3)

void* x20_2 = arg1[3]

if (x20_2 != 0)
    char* x8_3 = arg1[4]
    void* x0_5
    
    if (x8_3 == x20_2)
        x0_5 = x20_2
    else
        char* x21_3 = x8_3
        
        do
            x21_3 = &x21_3[-0x18]
            
            if ((zx.d(*x21_3) & 1) != 0)
                operator delete(*(x8_3 - 8))
            
            x8_3 = x21_3
        while (x20_2 != x21_3)
        
        x0_5 = arg1[3]
    
    arg1[4] = x20_2
    operator delete(x0_5)

void* x20_3 = *arg1

if (x20_3 == 0)
    return 

char* x8_4 = arg1[1]

if (x8_4 == x20_3)
    arg1[1] = x20_3
    return operator delete(x20_3) __tailcall

char* x21_4 = x8_4

do
    x21_4 = &x21_4[-0x18]
    
    if ((zx.d(*x21_4) & 1) != 0)
        operator delete(*(x8_4 - 8))
    
    x8_4 = x21_4
while (x20_3 != x21_4)

void* x0_7 = *arg1
arg1[1] = x20_3
return operator delete(x0_7) __tailcall
