// 函数: _ZN6SoLoud6Soloud3mixEPfj
// 地址: 0x1072700
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t entry_x2
int64_t result = SoLoud::Soloud::mix_internal(arg1.d, entry_x2)
int32_t x8_1 = arg1[0x828]

if (x8_1 != 0)
    int64_t x10_1 = *(arg1 + 0x38)
    int32_t x9_1 = 0
    int32_t x11_1 = x8_1 * entry_x2
    
    do
        if (x9_1 u< x11_1)
            int32_t x12_1 = x9_1 * ((entry_x2 + 0xf) & 0xfffffff0)
            int32_t x13_1 = x9_1
            
            do
                int32_t v0_1 = *(x10_1 + (zx.q(x12_1) << 2))
                x12_1 += 1
                *(arg2 + (zx.q(x13_1) << 2)) = v0_1
                x13_1 += x8_1
            while (x13_1 u< x11_1)
        
        x9_1 += 1
    while (x9_1 != x8_1)

return result
