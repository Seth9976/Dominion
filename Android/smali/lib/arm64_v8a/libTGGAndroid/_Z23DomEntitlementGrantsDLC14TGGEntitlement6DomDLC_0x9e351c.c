// 函数: _Z23DomEntitlementGrantsDLC14TGGEntitlement6DomDLC
// 地址: 0x9e351c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
void* x0 = EntitlementLookup(arg1)
int32_t x8 = *(x0 + 8)

if (x8 != 1 && *(x0 + 4) != x19)
    if (x8 != 5)
        return 0
    
    int64_t x20_1 = 0
    
    while (true)
        uint64_t result = zx.q(*(x0 + 0xc + x20_1))
        
        if (result.d == 0)
            return result
        
        if ((DomEntitlementGrantsDLC(result, zx.q(x19)) & 1) != 0)
            return 1
        
        x20_1 += 4
        
        if (x20_1 == 0x100)
            return 0

return 1
