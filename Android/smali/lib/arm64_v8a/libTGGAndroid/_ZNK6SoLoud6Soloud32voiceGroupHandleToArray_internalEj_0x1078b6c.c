// 函数: _ZNK6SoLoud6Soloud32voiceGroupHandleToArray_internalEj
// 地址: 0x1078b6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 u>= 0xfffff000)
    int32_t x9_1 = entry_x1 & 0xfff
    
    if (x9_1 u< *(arg1 + 0x20e48))
        int64_t x8_3 = *(*(arg1 + 0x20e40) + (zx.q(x9_1) << 3))
        
        if (x8_3 == 0)
            return 0
        
        return x8_3 + 4

return 0
