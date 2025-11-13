// 函数: _Z29DomEntitlementGrantsExpansionRK14EntitlementDef12DomExpansion
// 地址: 0x9e395c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 8)

if (x8 != 1)
    int32_t x19_1 = arg2
    
    if (x8 != 2)
        if (x8 == 5)
            int64_t x20_1 = 0
            
            while (true)
                uint64_t x0 = zx.q(*(arg1 + 0xc + x20_1))
                
                if (x0.d == 0)
                    return 0
                
                if ((DomEntitlementGrantsExpansion(x0, zx.q(x19_1)) & 1) != 0)
                    return 1
                
                x20_1 += 4
                
                if (x20_1 == 0x100)
                    return 0
        
        return 0
    
    int32_t x8_1 = *(arg1 + 0xc)
    
    if (x8_1 == 0)
        return 0
    
    if (x8_1 != x19_1)
        int32_t x8_2 = *(arg1 + 0x10)
        
        if (x8_2 == 0)
            return 0
        
        if (x8_2 != x19_1)
            int32_t x8_3 = *(arg1 + 0x14)
            
            if (x8_3 == 0)
                return 0
            
            if (x8_3 != x19_1)
                int32_t x8_4 = *(arg1 + 0x18)
                
                if (x8_4 == 0 || x8_4 != x19_1)
                    return 0

return 1
