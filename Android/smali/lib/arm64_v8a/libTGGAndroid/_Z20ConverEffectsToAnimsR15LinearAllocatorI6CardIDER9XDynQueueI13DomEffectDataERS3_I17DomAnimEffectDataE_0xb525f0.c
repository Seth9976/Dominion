// 函数: _Z20ConverEffectsToAnimsR15LinearAllocatorI6CardIDER9XDynQueueI13DomEffectDataERS3_I17DomAnimEffectDataE
// 地址: 0xb525f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 8) == 0)
    return 

int32_t x8_1 = *(arg2 + 0x10)
LinearAllocator<CardID>& x21_1 = arg1
int32_t* x23_1 = nullptr
int32_t i

do
    int64_t x28_1 = *arg2
    int64_t fp_1 = sx.q(x8_1)
    int32_t* x22_1 = x28_1 + muls.dp.d(x8_1, 0x38)
    int128_t v0
    int128_t v1
    int128_t v2
    
    if (x23_1 == 0 || *x22_1 != *x23_1 || *(x28_1 + fp_1 * 0x38 + 4) != x23_1[1]
            || *(x28_1 + fp_1 * 0x38 + 0xc) != x23_1[3]
            || *(x28_1 + fp_1 * 0x38 + 0x10) != x23_1[4]
            || *(x28_1 + fp_1 * 0x38 + 0x14) != x23_1[5]
            || *(x28_1 + fp_1 * 0x38 + 0x18) != x23_1[6]
            || *(x28_1 + fp_1 * 0x38 + 0x1c) != x23_1[7]
            || *(x28_1 + fp_1 * 0x38 + 0x20) != x23_1[8]
            || *(x28_1 + fp_1 * 0x38 + 0x24) != x23_1[9]
            || *(x28_1 + fp_1 * 0x38 + 0x28) != *(x23_1 + 0x28))
        int32_t x27_1 = *(arg3 + 8)
        int32_t x8_28 = *(arg3 + 0xc)
        LinearAllocator<CardID>& x23_2
        
        if (x27_1 s>= x8_28)
            int32_t x25_1
            
            if (x8_28 == 0)
                x25_1 = 0x10
            else
                x25_1 = x8_28 << 1
            
            arg1, v0, v1, v2 = XPooledCalloc(x25_1 * 0x48)
            int64_t x1_1 = *arg3
            x23_2 = arg1
            
            if (x1_1 != 0)
                memcpy(x23_2, x1_1, sx.q(x27_1 * 0x48))
                arg1, v0, v1, v2 = XPooledFree(*arg3, *(arg3 + 0xc) * 0x48)
            
            x27_1 = *(arg3 + 8)
            *(arg3 + 0xc) = x25_1
            *arg3 = x23_2
        else
            x23_2 = *arg3
        
        *(arg3 + 8) = x27_1 + 1
        v0 = *(x22_1 + 0x20)
        int64_t x8_35 = *(x22_1 + 0x30)
        v1 = *x22_1
        x23_1 = x23_2 + muls.dp.d(x27_1, 0x48)
        *(x23_1 + 0x10) = *(x22_1 + 0x10)
        *(x23_1 + 0x20) = v0
        *(x23_1 + 0x30) = x8_35
        *x23_1 = v1
        int32_t* x10_3 = *x21_1
        int64_t x11_2 = sx.q(*(x21_1 + 0x10))
        int32_t x9_14 = *(x28_1 + fp_1 * 0x38 + 8)
        *(x21_1 + 8) += 1
        *(x10_3 + x11_2) = 1
        int64_t x10_4 = *x21_1
        int32_t x8_39 = *(x21_1 + 0x10) + 4
        *(x21_1 + 0x10) = x8_39
        int32_t* x8_40 = x10_4 + sx.q(x8_39)
        *x8_40 = x9_14
        *(x21_1 + 0x10) += 4
        *(x23_1 + 0x38) = x8_40
        x23_1[0x10] = 1
    else
        x23_1[0x10]
        arg1, v0, v1, v2 = XTrace("batch %d")
        void* x9_11 = *(x23_1 + 0x38)
        int32_t x10_2 = *(x28_1 + fp_1 * 0x38 + 8)
        *(x21_1 + 8) += 1
        int64_t x8_23 = sx.q(*(x9_11 - 4))
        *(x9_11 - 4) = x8_23.d + 1
        *(x9_11 + (x8_23 << 2)) = x10_2
        *(x21_1 + 0x10) += 4
        x23_1[0x10] += 1
    i = *(arg2 + 8)
    x8_1 = *(arg2 + 0x10) + 1
    *(arg2 + 0x10) = x8_1
    
    if (x8_1 == i)
        *(arg2 + 8) = 0
        *(arg2 + 0x10) = 0
        break
while (i != 0)
