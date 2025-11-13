// 函数: _ZNSt6__ndk113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi
// 地址: 0xf435e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x78) != 0)
    void* x9 = *(arg1 + 0x18)
    void* x8_1 = arg1
    
    if (*(arg1 + 0x10) u< x9)
        int32_t entry_result
        uint64_t result = zx.q(entry_result)
        
        if (entry_result == 0xffffffff)
            *(x8_1 + 0x18) = x9 - 1
            return 0
        
        if ((zx.d(*(x8_1 + 0x98)) & 0x10) != 0 || zx.d(*(x9 - 1)) == zx.d((result.d).b))
            *(x8_1 + 0x18) = x9 - 1
            *(x9 - 1) = (result.d).b
            return result

return 0xffffffff
