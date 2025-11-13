// 函数: sub_e45218
// 地址: 0xe45218
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x23

if (arg4 != 0)
    void* arg_10 = arg4
    operator delete(arg4)
    x23 = *arg3
    
    if (x23 == 0)
        sub_1101e04(arg1)
        noreturn
else
    x23 = *arg3
    
    if (x23 == 0)
        sub_1101e04(arg1)
        noreturn

int64_t* x22 = *(arg2 + 0x10)
void* x0_2 = x23

if (x22 != x23)
    do
        x22 = &x22[-0x11]
        (*(*x22 + 0x10))(x22)
    while (x23 != x22)
    
    x0_2 = *arg3

*(arg2 + 0x10) = x23
operator delete(x0_2)
sub_1101e04(arg1)
noreturn
