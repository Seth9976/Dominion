// 函数: _Z21CountPlaceholderCardsv
// 地址: 0xb16150
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x11 = zx.q(*(gDomClient + 0x205e8))

if (x11.d != 0)
    void* i_1 = *(gDomClient + 0x205e0)
    void* i = i_1
    
    do
        if (zx.d(*(i + 0x21d2)) != 0)
            if (i == 0xffffffff)
                break
            
            uint64_t result = 0
            int64_t x11_1 = i_1 + x11 * 0x21d8
            
            do
                int32_t x13_1 = *(i + 0x2c)
                i += 0x21d8
                
                if (x13_1 == 1)
                    result = zx.q(result.d + 1)
                else
                    result = zx.q(result.d)
                
                if (x11_1 u<= i)
                    break
                
                while (zx.d(*(i + 0x21d2)) == 0)
                    i += 0x21d8
                    
                    if (i u>= x11_1)
                        return result
            while (i != 0xffffffff)
            
            return result
        
        i += 0x21d8
    while (i u< i_1 + x11 * 0x21d8)

return 0
