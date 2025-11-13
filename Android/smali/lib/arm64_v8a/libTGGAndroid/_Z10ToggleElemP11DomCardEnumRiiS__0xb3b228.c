// 函数: _Z10ToggleElemP11DomCardEnumRiiS_
// 地址: 0xb3b228
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 s< 1)
label_b3b250:
    int32_t x8_2 = *arg2
    
    if (x8_2 != arg3)
        *arg2 = x8_2 + 1
        *(arg1 + (sx.q(x8_2) << 2)) = arg4
    
    return 

uint64_t x9_1 = zx.q(arg3)
DomCardEnum* x8_1 = arg1

while (*x8_1 != arg4)
    uint64_t temp0_1 = x9_1
    x9_1 -= 1
    x8_1 += 4
    
    if (temp0_1 == 1)
        goto label_b3b250

int64_t x9_4 = sx.q(*arg2) - 1
*arg2 = x9_4.d
*x8_1 = *(arg1 + (x9_4 << 2))
*(arg1 + (sx.q(*arg2) << 2)) = 0
