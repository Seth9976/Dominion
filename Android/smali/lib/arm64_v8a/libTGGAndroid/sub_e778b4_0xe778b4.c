// 函数: sub_e778b4
// 地址: 0xe778b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = *arg4
int64_t* x0_1

if (x0 != 0)
    *(arg2 + 0x18) = x0
    operator delete(x0)
    x0_1 = *arg3
    *arg3 = 0
    
    if (x0_1 != 0)
    label_e77930:
        (*(*x0_1 + 8))()
        sub_1101e04(arg1)
        noreturn
else
    x0_1 = *arg3
    *arg3 = 0
    
    if (x0_1 != 0)
        goto label_e77930
sub_1101e04(arg1)
noreturn
