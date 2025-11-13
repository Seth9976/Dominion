// 函数: _Z32DomEntitlementGrantsFirstEdition14TGGEntitlement12DomExpansion
// 地址: 0x9e37ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
void* x0 = EntitlementLookup(arg1)
int32_t x8 = *(x0 + 8)

if (x8 != 1)
    if (x8 != 3)
        if (x8 == 5)
            int64_t x20_1 = 0
            
            while (true)
                uint64_t x0_1 = zx.q(*(x0 + 0xc + x20_1))
                
                if (x0_1.d == 0)
                    return 0
                
                if ((DomEntitlementGrantsFirstEdition(x0_1, zx.q(x19)) & 1) != 0)
                    return 1
                
                x20_1 += 4
                
                if (x20_1 == 0x100)
                    return 0
        
        return 0
    
    int32_t x8_1 = *(x0 + 0xc)
    
    if (x8_1 == 0)
        return 0
    
    if (x8_1 != x19)
        int32_t x8_2 = *(x0 + 0x10)
        
        if (x8_2 == 0)
            return 0
        
        if (x8_2 != x19)
            int32_t x8_3 = *(x0 + 0x14)
            
            if (x8_3 == 0)
                return 0
            
            if (x8_3 != x19)
                int32_t x8_4 = *(x0 + 0x18)
                
                if (x8_4 == 0 || x8_4 != x19)
                    return 0

return 1
