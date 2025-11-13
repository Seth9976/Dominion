// 函数: sub_de1c88
// 地址: 0xde1c88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = arg2
arg2 = nullptr
void* x20

if (x0 != 0)
    (*(*x0 + 0x10))()
    x20 = arg3
    
    if (x20 == 0)
        sub_1101e04(arg1)
        noreturn
else
    x20 = arg3
    
    if (x20 == 0)
        sub_1101e04(arg1)
        noreturn

void* x21 = arg4
void* x0_2 = x20

if (x21 != x20)
    do
        x21 -= 8
        int64_t* x0_3 = *x21
        *x21 = 0
        
        if (x0_3 != 0)
            (*(*x0_3 + 0x10))()
    while (x20 != x21)
    
    x0_2 = arg3

arg4 = x20
operator delete(x0_2)
sub_1101e04(arg1)
noreturn
