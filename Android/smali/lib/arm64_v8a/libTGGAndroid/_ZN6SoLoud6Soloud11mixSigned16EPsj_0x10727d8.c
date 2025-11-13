// 函数: _ZN6SoLoud6Soloud11mixSigned16EPsj
// 地址: 0x10727d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t entry_x2
int64_t result = SoLoud::Soloud::mix_internal(arg1.d, entry_x2)
int32_t x8_1 = *(arg1 + 0x20a0)

if (x8_1 != 0)
    int64_t x10_1 = *(arg1 + 0x38)
    int32_t x9_1 = 0
    int32_t x11_1 = x8_1 * entry_x2
    
    do
        if (x9_1 u< x11_1)
            int32_t x13_1 = x9_1 * ((entry_x2 + 0xf) & 0xfffffff0)
            int32_t x14_1 = x9_1
            
            do
                float v0_1 = *(x10_1 + (zx.q(x13_1) << 2))
                x13_1 += 1
                *(arg2 + (zx.q(x14_1) << 1)) = vcvts_s32_f32(v0_1 * float.s(0x46fffe00))
                x14_1 += x8_1
            while (x14_1 u< x11_1)
        
        x9_1 += 1
    while (x9_1 != x8_1)

return result
