// 函数: _Z17AnimationCompleteP9Structure
// 地址: 0xc7a604
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_1 = *(arg1 + 0x38)

if (x8_1 != 0)
    int64_t* i = *(x8_1 + 8)
    
    if (i != 0)
        do
            void* x9_1 = *i
            i = i[1]
            
            if (not(*(x9_1 + 0x20) f< 0f))
                int32_t x10_1 = *(x9_1 + 0x28)
                
                if (x10_1 != 4 && x10_1 != 2)
                    if (*(x9_1 + 0x24) == 1)
                        return zx.q(*(x9_1 + 4) f== fconvert.s(1f) ? 1 : 0)
                    
                    break
        while (i != 0)

return 0
