// 函数: sub_e778b8
// 地址: 0xe778b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg5) & 1) != 0)
    operator delete(arg6)

if ((zx.d(arg7) & 1) != 0)
    operator delete(arg8)

void* x0_2 = *arg3
int64_t* x0_3

if (x0_2 != 0)
    *(arg2 + 0x18) = x0_2
    operator delete(x0_2)
    x0_3 = *arg4
    *arg4 = 0
    
    if (x0_3 != 0)
    label_e77930:
        (*(*x0_3 + 8))()
        sub_1101e04(arg1)
        noreturn
else
    x0_3 = *arg4
    *arg4 = 0
    
    if (x0_3 != 0)
        goto label_e77930
sub_1101e04(arg1)
noreturn
