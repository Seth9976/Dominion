// 函数: _Z21RenderDefaultSortFuncii
// 地址: 0xc9b240
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10_1 = *(gDraw3DData + 0x590 + muls.dp.d(arg1, 0x1a0) + 0x15c)
int32_t x9_1 = *(gDraw3DData + 0x590 + muls.dp.d(arg2, 0x1a0) + 0x15c)

if (x10_1 s>= x9_1)
    if (x10_1 s> x9_1)
        return 0
    
    int64_t x10_2 = sx.q(arg1)
    int64_t x9_2 = sx.q(arg2)
    int32_t x11_2 = *(gDraw3DData + 0x590 + x10_2 * 0x1a0 + 0x160)
    int32_t x12_2 = *(gDraw3DData + 0x590 + x9_2 * 0x1a0 + 0x160)
    float v0
    float v1
    
    if (x11_2 != 2)
        if (x12_2 == 2)
            return 0
        
        if (x11_2 == 3 || x11_2 != 5)
        label_c9b348:
            v0 = *(gDraw3DData + 0x590 + x10_2 * 0x1a0 + 0x164)
            v1 = *(gDraw3DData + 0x590 + x9_2 * 0x1a0 + 0x164)
            v0 - v1
            
            if (v0 < v1)
                return 0
            
            if (not(v0 > v1))
            label_c9b36c:
                int32_t x9_3 = *(gDraw3DData + 0x590 + x10_2 * 0x1a0 + 0x168)
                int32_t x8_3 = *(gDraw3DData + 0x590 + x9_2 * 0x1a0 + 0x168)
                
                if (x9_3 s<= x8_3)
                    return zx.q(arg1 s< arg2 ? 1 : 0) | zx.q(x9_3 s< x8_3 ? 1 : 0)
                
                return 0
        else
            int64_t x12_7 = *(gDraw3DData + 0x590 + x10_2 * 0x1a0 + 0x58)
            int64_t x11_7 = *(gDraw3DData + 0x590 + x9_2 * 0x1a0 + 0x58)
            
            if (x12_7 u>= x11_7)
                if (x12_7 u> x11_7)
                    return 0
                
                goto label_c9b348
    else if (x12_2 == 2)
        int64_t x12_4 = *(gDraw3DData + 0x590 + x10_2 * 0x1a0 + 0x170)
        int64_t x11_4 = *(gDraw3DData + 0x590 + x9_2 * 0x1a0 + 0x170)
        
        if (x12_4 u>= x11_4)
            if (x12_4 u> x11_4)
                return 0
            
            v0 = *(gDraw3DData + 0x590 + x10_2 * 0x1a0 + 0x164)
            v1 = *(gDraw3DData + 0x590 + x9_2 * 0x1a0 + 0x164)
            v0 - v1
            
            if (not(v0 < v1))
                if (v0 <= v1)
                    goto label_c9b36c
                
                return 0

return 1
