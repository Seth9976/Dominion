// 函数: sub_d47e00
// 地址: 0xd47e00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = *arg3
int64_t* x0_1

if (x0 == 0)
    x0_1 = *(arg2 + 8)
    *(arg2 + 8) = 0
    
    if (x0_1 == 0)
        sub_1101e04(arg1)
        noreturn
else
    *(arg2 + 0x20) = x0
    operator delete(x0)
    x0_1 = *(arg2 + 8)
    *(arg2 + 8) = 0
    
    if (x0_1 == 0)
        sub_1101e04(arg1)
        noreturn

(*(*x0_1 + 0x10))()
sub_1101e04(arg1)
noreturn
