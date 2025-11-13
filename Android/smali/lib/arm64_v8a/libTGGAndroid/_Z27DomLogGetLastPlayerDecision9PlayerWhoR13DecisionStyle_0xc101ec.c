// 函数: _Z27DomLogGetLastPlayerDecision9PlayerWhoR13DecisionStyle
// 地址: 0xc101ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x10 = sx.q(*(gLog + 0x20))
int64_t x9 = *(gLog + 0x18)

if (arg1 == 0xffffffff)
    if (x10.d s< 1)
        return 0xffffffff
    
    x10 = sx.q(x10.d - 1)
else
    int32_t* x11_2 = x9 + (x10 << 4) - 0x10
    int32_t x12_1
    
    do
        int64_t temp0_1 = x10
        x10 -= 1
        
        if (temp0_1 s< 1)
            return 0xffffffff
        
        x12_1 = *x11_2
        x11_2 = &x11_2[-4]
    while (x12_1 != arg1)

void* x9_1 = x9 + (x10 << 4)
int32_t x8_2

if (*(x9_1 + 0xc) s<= *(gLog + (sx.q(arg1) << 2) + 0x38))
    x8_2 = 2
else
    x8_2 = 1

*arg2 = x8_2
return zx.q(*(x9_1 + 4))
