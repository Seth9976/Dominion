// 函数: _Z15IsValidGameCodePKc
// 地址: 0x9c16b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (strlen(arg1) == 4)
    uint32_t x8_1 = zx.d(*arg1)
    
    if (x8_1 - 0x30 u< 0xa || (x8_1 & 0xffffffdf) - 0x41 u<= 0x19)
        uint32_t x8_4 = zx.d(arg1[1])
        
        if (x8_4 - 0x30 u< 0xa || (x8_4 & 0xffffffdf) - 0x41 u< 0x1a)
            uint32_t x8_7 = zx.d(arg1[2])
            
            if (x8_7 - 0x30 u< 0xa || (x8_7 & 0xffffffdf) - 0x41 u<= 0x19)
                uint32_t x8_10 = zx.d(arg1[3])
                return zx.q(x8_10 - 0x30 u< 0xa ? 1 : 0)
                    | zx.q((x8_10 & 0xffffffdf) - 0x41 u< 0x1a ? 1 : 0)

return 0
