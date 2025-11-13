// 函数: _Z18PregameHasHeirloom11DomCardEnum
// 地址: 0xab01a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0_2 = DomDefGet(zx.q(arg1), zx.q(*PregameContextGet()))
int32_t x8 = *(x0_2 + 0xe0)

if (x8 != 0)
    if (x8 == 0xf)
        return 1
    
    int32_t x8_1 = *(x0_2 + 0x1a0)
    
    if (x8_1 != 0)
        if (x8_1 == 0xf)
            return 1
        
        int32_t x8_2 = *(x0_2 + 0x260)
        
        if (x8_2 != 0)
            if (x8_2 == 0xf)
                return 1
            
            int32_t x8_3 = *(x0_2 + 0x320)
            
            if (x8_3 != 0)
                if (x8_3 == 0xf)
                    return 1
                
                int32_t x8_4 = *(x0_2 + 0x3e0)
                
                if (x8_4 != 0)
                    if (x8_4 == 0xf)
                        return 1
                    
                    int32_t x8_5 = *(x0_2 + 0x4a0)
                    
                    if (x8_5 != 0)
                        if (x8_5 == 0xf)
                            return 1
                        
                        int32_t x8_6 = *(x0_2 + 0x560)
                        
                        if (x8_6 != 0 && (x8_6 == 0xf || *(x0_2 + 0x620) == 0xf))
                            return 1

return 0
