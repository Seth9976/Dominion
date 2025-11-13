// 函数: _Z19GameIdxLookupByDBID6GameID
// 地址: 0x9b1878
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
uint64_t x11 = zx.q(*(x0 + 0x5088))

if (x11.d != 0)
    void* i_1 = *(x0 + 0x5080)
    void* i = i_1
    
    do
        if (zx.d(*(i + 0x1332)) != 0)
            if (i != 0xffffffff)
                int64_t x11_1 = i_1 + x11 * 0x1338
                
                while (true)
                    if (*i == arg1)
                        return zx.q(*(i + 0x1330))
                    
                    if (i == 0)
                        i = i_1
                    else
                        i += 0x1338
                    
                    if (i u>= x11_1)
                        break
                    
                    while (zx.d(*(i + 0x1332)) == 0)
                        i += 0x1338
                        
                        if (i u>= x11_1)
                            return 0
                    
                    if (i == 0xffffffff)
                        return 0
            
            break
        
        i += 0x1338
    while (i u< i_1 + x11 * 0x1338)

return 0
