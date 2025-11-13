// 函数: sub_d76858
// 地址: 0xd76858
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0

if ((zx.d(arg4) & 1) == 0)
    x0 = arg2[4]
    *arg2 = arg3 + 0x10
    
    if (x0 != 0)
        goto label_d76898
    
    goto label_d76874

operator delete(arg5)
x0 = arg2[4]
*arg2 = arg3 + 0x10
void* x0_2

if (x0 == 0)
label_d76874:
    x0_2 = arg2[1]
    
    if (x0_2 != 0)
    label_d768a8:
        int64_t x8_2 = arg2[3]
        arg2[2] = x0_2
        Botan::deallocate_memory(x0_2, x8_2 - x0_2, 1)
else
label_d76898:
    arg2[5] = x0
    operator delete(x0)
    x0_2 = arg2[1]
    
    if (x0_2 != 0)
        goto label_d768a8
sub_1101e04(arg1)
noreturn
