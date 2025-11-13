// 函数: sub_e777f0
// 地址: 0xe777f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(arg5) & 1) != 0)
    operator delete(arg6)

if ((zx.d(arg7) & 1) != 0)
    operator delete(arg8)

if (arg9 != 0)
    (*(*arg9 + 0x10))()

void* x0_3 = *arg4
int64_t* x0_4

if (x0_3 != 0)
    *(arg2 + 0x18) = x0_3
    operator delete(x0_3)
    x0_4 = *arg3
    *arg3 = 0
    
    if (x0_4 != 0)
    label_e77930:
        (*(*x0_4 + 8))()
        sub_1101e04(arg1)
        noreturn
else
    x0_4 = *arg3
    *arg3 = 0
    
    if (x0_4 != 0)
        goto label_e77930
sub_1101e04(arg1)
noreturn
