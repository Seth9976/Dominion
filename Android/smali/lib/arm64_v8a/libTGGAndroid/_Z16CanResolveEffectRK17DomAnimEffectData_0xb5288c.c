// 函数: _Z16CanResolveEffectRK17DomAnimEffectData
// 地址: 0xb5288c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*arg1 == 9)
    uint64_t x8 = zx.q(*(arg1 + 0x40))
    
    if (x8.d s>= 1)
        int64_t x9 = 0
        int32_t i
        
        do
            void* x16_1 = *(gDomClient + 0x205e0)
            int32_t j
            
            do
                j = *(x16_1 + 0x21d0)
                x16_1 += 0x21d8
            while (j u< 0x10000)
            void* x16_2 = x16_1 - 0x21d8
            
            while (*(x16_2 + 0x2c) != 0 || *(x16_2 + 0x98) != *(*(arg1 + 0x38) + (x9 << 2))
                    || zx.d(*(x16_2 + 0x168)) != 0)
                void* x17_4 = x16_2 + 0x43a8
                int32_t j_1
                
                do
                    j_1 = *x17_4
                    x16_2 += 0x21d8
                    x17_4 += 0x21d8
                while (j_1 u< 0x10000)
            
            i = *(x16_2 + 0x1f78)
            x9 += 1
            
            if (x9 == x8)
                break
        while (i == 0)
        
        return zx.q(i == 0 ? 1 : 0)

return 1
