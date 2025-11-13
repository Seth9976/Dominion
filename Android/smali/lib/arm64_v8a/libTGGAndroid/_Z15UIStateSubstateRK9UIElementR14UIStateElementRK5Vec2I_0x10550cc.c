// 函数: _Z15UIStateSubstateRK9UIElementR14UIStateElementRK5Vec2I
// 地址: 0x10550cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_2

if (*(arg2 + 0x148) s<= *arg2)
    x8_2 = *(arg1 + 0xb0)
else
    XString::operator char const*()
    x8_2 = (*(arg2 + 0x154)).d

void* x22_1 = arg2 + (sx.q(*arg3 + *(arg3 + 4) * x8_2) << 2) + 0xc8
uint32_t x0_1 = *x22_1

if (x0_1 == 0)
    XAsset* x0_4 = *(arg1 + 0xc8)
    
    if (x0_4 != 0)
        int32_t x0_5 = UIStateLoad(x0_4)
        void* x8_11 = *(gUISystem + 0x28) + mulu.dp.d(x0_5 & 0xffff, 0x458)
        *(x8_11 + 0x18) = arg2
        *(x8_11 + 0x20) = *arg3
        *x22_1 = x0_5
else
    int64_t* x8_5 = *(gUISystem + 0x28) + zx.q(x0_1.w) * 0x458
    XAsset* x24_1 = *x8_5
    XAsset* x21_1
    
    if (x24_1 == 0)
        x21_1 = *(arg1 + 0xc8)
    else
        x21_1 = x24_1
    
    if (x21_1 != x8_5[1])
        UIStateDestroy(x0_1)
        
        if (x21_1 != 0)
            int32_t x0_3 = UIStateLoad(x21_1)
            int32_t x9_4 = x0_3 & 0xffff
            void* x8_8 = *(gUISystem + 0x28) + mulu.dp.d(x9_4, 0x458)
            *(x8_8 + 0x18) = arg2
            *(x8_8 + 0x20) = *arg3
            *x22_1 = x0_3
            *(*(gUISystem + 0x28) + mulu.dp.d(x9_4, 0x458)) = x24_1

return *(gUISystem + 0x28) + zx.q(*x22_1) * 0x458
