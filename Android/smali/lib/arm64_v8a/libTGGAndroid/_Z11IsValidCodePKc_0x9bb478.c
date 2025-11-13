// 函数: _Z11IsValidCodePKc
// 地址: 0x9bb478
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (strlen(arg1) == 8)
    uint32_t x8_1 = zx.d(*arg1)
    
    if (x8_1 - 0x30 u< 0xa || (x8_1 & 0xffffffdf) - 0x41 u<= 0x19)
        uint32_t x8_4 = zx.d(arg1[1])
        
        if (x8_4 - 0x30 u< 0xa || (x8_4 & 0xffffffdf) - 0x41 u< 0x1a)
            uint32_t x8_7 = zx.d(arg1[2])
            
            if (x8_7 - 0x30 u< 0xa || (x8_7 & 0xffffffdf) - 0x41 u<= 0x19)
                uint32_t x8_10 = zx.d(arg1[3])
                
                if (x8_10 - 0x30 u< 0xa || (x8_10 & 0xffffffdf) - 0x41 u<= 0x19)
                    uint32_t x8_13 = zx.d(arg1[4])
                    
                    if (x8_13 - 0x30 u< 0xa || (x8_13 & 0xffffffdf) - 0x41 u<= 0x19)
                        uint32_t x8_16 = zx.d(arg1[5])
                        
                        if (x8_16 - 0x30 u< 0xa || (x8_16 & 0xffffffdf) - 0x41 u<= 0x19)
                            uint32_t x8_19 = zx.d(arg1[6])
                            
                            if (x8_19 - 0x30 u< 0xa || (x8_19 & 0xffffffdf) - 0x41 u<= 0x19)
                                uint32_t x8_22 = zx.d(arg1[7])
                                return zx.q(x8_22 - 0x30 u< 0xa ? 1 : 0)
                                    | zx.q((x8_22 & 0xffffffdf) - 0x41 u< 0x1a ? 1 : 0)

return 0
