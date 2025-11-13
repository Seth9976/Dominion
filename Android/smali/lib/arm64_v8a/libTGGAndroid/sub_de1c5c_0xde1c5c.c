// 函数: sub_de1c5c
// 地址: 0xde1c5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

operator delete(arg2)

if (arg3 == 0)
    sub_1101e04(arg1)
    noreturn

void* x21 = arg4
void* x0_2 = arg3

if (x21 != arg3)
    do
        x21 -= 8
        int64_t* x0_3 = *x21
        *x21 = 0
        
        if (x0_3 != 0)
            (*(*x0_3 + 0x10))()
    while (arg3 != x21)
    
    x0_2 = arg3

arg4 = arg3
operator delete(x0_2)
sub_1101e04(arg1)
noreturn
