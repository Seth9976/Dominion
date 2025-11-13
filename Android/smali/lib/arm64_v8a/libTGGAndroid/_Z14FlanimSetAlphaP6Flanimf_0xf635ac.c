// 函数: _Z14FlanimSetAlphaP6Flanimf
// 地址: 0xf635ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char x20

if (not(arg2 <= float.s(0x3f7fbe77)))
    x20 = -1
else if (arg2 >= float.s(0x3a83126f))
    x20 = vcvts_s32_f32(arg2 * float.s(0x437f0000) + fconvert.s(0.5f))
else
    x20 = 0

void* result = FlanimGetDef(*arg1)

if (*(result + 0x28) s>= 1)
    int64_t i = 0
    int64_t x9_1 = 0x67
    
    do
        i += 1
        (*(arg1 + 0x70))[x9_1] = x20
        x9_1 += 0x70
    while (i s< sx.q(*(result + 0x28)))

return result
