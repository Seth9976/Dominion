// 函数: sub_e45208
// 地址: 0xe45208
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x23 = *arg3

if (x23 == 0)
    sub_1101e04(arg1)
    noreturn

int64_t* x22 = *(arg2 + 0x10)
void* x0_1 = x23

if (x22 != x23)
    do
        x22 = &x22[-0x11]
        (*(*x22 + 0x10))(x22)
    while (x23 != x22)
    
    x0_1 = *arg3

*(arg2 + 0x10) = x23
operator delete(x0_1)
sub_1101e04(arg1)
noreturn
