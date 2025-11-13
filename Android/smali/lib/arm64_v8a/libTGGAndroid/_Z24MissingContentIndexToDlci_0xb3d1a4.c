// 函数: _Z24MissingContentIndexToDlci
// 地址: 0xb3d1a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x22
void* var_20 = entry_x22
int32_t var_78[0x12]
int32_t (* i)[0x12] = &var_78
DomExpansionsFromBitset(zx.q(*gMissingContent), &var_78)
int32_t x19_1 = var_78[sx.q(arg1)]

if (x19_1 != 0x13)
    void* var_28
    int32_t x0_1 = GameSpecific_GetDlcs(0, &var_28)
    
    if (x0_1 s>= 1)
        i = nullptr
        
        do
            entry_x22 = var_28
            
            if ((DomEntitlementGrantsExpansion(DomDLCGrantsEntitlement(zx.q(*(entry_x22 + i))), 
                    zx.q(x19_1)) & 1) != 0)
                return zx.q(*(entry_x22 + i)) << 0x20
            
            i = &(*i)[0x20]
        while (zx.q(x0_1) << 7 != i)

pthread_kill(pthread_self(), 6)
XNoReturn()
return zx.q(*(entry_x22 + i)) << 0x20
