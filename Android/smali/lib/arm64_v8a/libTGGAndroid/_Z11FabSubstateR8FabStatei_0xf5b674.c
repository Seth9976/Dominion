// 函数: _Z11FabSubstateR8FabStatei
// 地址: 0xf5b674
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = *(arg1 + (sx.q(arg2) << 2) + 0x88)
void* result
int128_t v0
int32_t x8
uint64_t x23_1

if (x9 == 0)
    x8 = *(gFabs + 8)
    x23_1 = zx.q(*(gFabs + 0x10))
    uint64_t x8_1
    int64_t x9_1
    int32_t x10_3
    
    if (x23_1.d == x8)
    label_f5b6cc:
        x9_1 = *gFabs
        x10_3 = x8 + 1
        *(gFabs + 8) = x10_3
        x8_1 = zx.q(x8)
    else
    label_f5b6f0:
        x9_1 = *gFabs
        x10_3 = *(x9_1 + x23_1 * 0x4e8 + 0x4e0)
        x8_1 = x23_1
    
    *(gFabs + 0x10) = x10_3
    result = x9_1 + x8_1 * 0x4e8
    int128_t v1
    v0, v1 = memset(result, 0, 0x4e0)
    *(result + 0x4e0) = x23_1.d | *(gFabs + 0x18) << 0x10
    int32_t x8_5 = *(gFabs + 0x18)
    int32_t x8_6
    
    if (x8_5 == 0xffff)
        x8_6 = 1
    else
        x8_6 = x8_5 + 1
    
    *(gFabs + 0x14) += 1
    *(gFabs + 0x18) = x8_6
    *(arg1 + (sx.q(arg2) << 2) + 0x88) = *(result + 0x4e0)
else
    x8 = *(gFabs + 8)
    uint64_t x10_1 = zx.q(x9.w)
    
    if (x10_1.d u< x8)
        result = *gFabs + x10_1 * 0x4e8
    
    if (x10_1.d u>= x8 || *(result + 0x4e0) != x9)
        x23_1 = zx.q(*(gFabs + 0x10))
        
        if (x23_1.d != x8)
            goto label_f5b6f0
        
        goto label_f5b6cc
v0 = *(arg1 + 0x50)
*(result + 0x40) = *(arg1 + 0x40)
*(result + 0x50) = v0
return result
