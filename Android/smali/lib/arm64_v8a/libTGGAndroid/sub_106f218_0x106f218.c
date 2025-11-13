// 函数: sub_106f218
// 地址: 0x106f218
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = *(arg2 + 0x80)
void* x0_1

if (x0 == 0)
    x0_1 = *(arg2 + 0x60)
    
    if (x0_1 != 0)
        goto label_106f24c
    
    goto label_106f230

operator delete[](x0)
x0_1 = *(arg2 + 0x60)
void* x0_3

if (x0_1 == 0)
label_106f230:
    x0_3 = *(arg2 + 0x40)
    
    if (x0_3 == 0)
        sub_1101e04(arg1)
        noreturn
else
label_106f24c:
    operator delete[](x0_1)
    x0_3 = *(arg2 + 0x40)
    
    if (x0_3 == 0)
        sub_1101e04(arg1)
        noreturn

operator delete[](x0_3)
sub_1101e04(arg1)
noreturn
