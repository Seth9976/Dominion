// 函数: _Z17NumAbilityButtonsv
// 地址: 0xb454ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x12 = zx.q(*(gDomClient + 0x205e8))

if (x12.d != 0)
    void* i_1 = *(gDomClient + 0x205e0)
    void* i = i_1
    
    do
        if (zx.d(*(i + 0x21d2)) != 0)
            if (i == 0xffffffff)
                break
            
            int32_t x13_2 = *(gDomClient + 0x38)
            uint64_t result = 0
            int64_t x12_1 = i_1 + x12 * 0x21d8
            int32_t x13_3
            
            x13_3 = x13_2 == 0xffffffff ? 0 : x13_2
            
            do
                if (*(i + 0x2c) == 5 && *(i + 0x1f0) == x13_3)
                    if (*(i + 0x21c) != 0)
                        result = zx.q(result.d + 1)
                    else
                        result = zx.q(result.d)
                
                if (i == 0)
                    i = i_1
                else
                    i += 0x21d8
                
                if (i u>= x12_1)
                    break
                
                while (zx.d(*(i + 0x21d2)) == 0)
                    i += 0x21d8
                    
                    if (i u>= x12_1)
                        return result
            while (i != 0xffffffff)
            
            return result
        
        i += 0x21d8
    while (i u< i_1 + x12 * 0x21d8)

return 0
