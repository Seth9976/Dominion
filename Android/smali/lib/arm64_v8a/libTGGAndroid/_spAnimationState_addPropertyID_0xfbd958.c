// 函数: _spAnimationState_addPropertyID
// 地址: 0xfbd958
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t i_2 = zx.q(*(arg1 + 0x58))

if (i_2.d s>= 1)
    int32_t* x9_1 = *(arg1 + 0x50)
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        if (*x9_1 == arg2)
            return 0
        
        i = i_1
        i_1 -= 1
        x9_1 = &x9_1[1]
    while (i != 1)

int64_t x21

if (*(arg1 + 0x5c) s<= i_2.d)
    int32_t x22_1 = (i_2.d << 1) + 2
    int64_t x0_2 =
        _spCalloc(sx.q(x22_1), 4, "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0x387)
    x21 = x0_2
    memcpy(x0_2, *(arg1 + 0x50), sx.q(*(arg1 + 0x58)) << 2)
    _spFree(*(arg1 + 0x50))
    i_2 = zx.q(*(arg1 + 0x58))
    *(arg1 + 0x50) = x21
    *(arg1 + 0x5c) = x22_1
else
    x21 = *(arg1 + 0x50)

*(x21 + (sx.q(i_2.d) << 2)) = arg2
*(arg1 + 0x58) += 1
return 1
