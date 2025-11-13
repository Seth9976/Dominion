// 函数: sub_d65820
// 地址: 0xd65820
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21

if ((zx.d(arg3) & 1) != 0)
    operator delete(arg4)
    x21 = *arg2
    
    if (x21 == 0)
        sub_1101e04(arg1)
        noreturn
else
    x21 = *arg2
    
    if (x21 == 0)
        sub_1101e04(arg1)
        noreturn

char* x8 = arg2[1]
void* x0_2 = x21

if (x8 != x21)
    char* x22_1 = x8
    
    do
        x22_1 = &x22_1[-0x18]
        
        if ((zx.d(*x22_1) & 1) != 0)
            operator delete(*(x8 - 8))
        
        x8 = x22_1
    while (x21 != x22_1)
    
    x0_2 = *arg2

arg2[1] = x21
operator delete(x0_2)
sub_1101e04(arg1)
noreturn
