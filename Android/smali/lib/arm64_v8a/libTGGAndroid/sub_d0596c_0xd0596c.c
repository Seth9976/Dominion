// 函数: sub_d0596c
// 地址: 0xd0596c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = arg2[2]
*arg2 = arg4 + 0x10
arg2[2] = 0
int64_t* x0_1

if (x0 != 0)
    (*(*x0 + 0x10))()
    x0_1 = *arg3
    *arg3 = 0
    
    if (x0_1 != 0)
    label_d059c4:
        (*(*x0_1 + 0x10))()
        operator delete(arg2)
        sub_1101e04(arg1)
        noreturn
else
    x0_1 = *arg3
    *arg3 = 0
    
    if (x0_1 != 0)
        goto label_d059c4
operator delete(arg2)
sub_1101e04(arg1)
noreturn
