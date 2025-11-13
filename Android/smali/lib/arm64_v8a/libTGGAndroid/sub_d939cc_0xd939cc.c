// 函数: sub_d939cc
// 地址: 0xd939cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg2[1] = arg3
int64_t* x0 = arg4
arg4 = nullptr
void* x21

if (x0 != 0)
    (*(*x0 + 8))()
    x21 = *arg2
    
    if (x21 == 0)
        sub_1101e04(arg1)
        noreturn
else
    x21 = *arg2
    
    if (x21 == 0)
        sub_1101e04(arg1)
        noreturn

char* x8_3 = arg2[1]
void* x0_2 = x21

if (x8_3 != x21)
    char* x22 = x8_3
    
    do
        x22 = &x22[-0x18]
        
        if ((zx.d(*x22) & 1) != 0)
            operator delete(*(x8_3 - 8))
        
        x8_3 = x22
    while (x21 != x22)
    
    x0_2 = *arg2

arg2[1] = x21
operator delete(x0_2)
sub_1101e04(arg1)
noreturn
