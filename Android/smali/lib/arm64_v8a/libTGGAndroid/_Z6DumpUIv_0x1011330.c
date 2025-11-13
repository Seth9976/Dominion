// 函数: _Z6DumpUIv
// 地址: 0x1011330
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = XTrace("dump ui")
uint64_t x9 = zx.q(*(gUI2 + 8))

if (x9.d != 0)
    void* i = *gUI2
    int64_t x9_1 = i + x9 * 0x19a8
    
    do
        if (zx.d(*(i + 0x19a2)) != 0)
            while (i != 0xffffffff)
                *(i + 8)
                XString::GetString()
                result = XTrace("%s %s")
                i += 0x19a8
                int64_t x8_2 = *gUI2 + zx.q(*(gUI2 + 8)) * 0x19a8
                
                if (x8_2 u<= i)
                    break
                
                while (zx.d(*(i + 0x19a2)) == 0)
                    i += 0x19a8
                    
                    if (i u>= x8_2)
                        return result
            
            break
        
        i += 0x19a8
    while (i u< x9_1)

return result
