// 函数: _Z25GetCurrentDLCForExpansion12DomExpansion
// 地址: 0xb3d12c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x22
void* var_20 = entry_x22
int64_t entry_i
int64_t entry_i_1 = entry_i
void* var_28
int32_t x0 = GameSpecific_GetDlcs(0, &var_28)

if (x0 s>= 1)
    entry_i = 0
    
    do
        entry_x22 = var_28
        
        if ((DomEntitlementGrantsExpansion(DomDLCGrantsEntitlement(zx.q(*(entry_x22 + entry_i))), 
                zx.q(arg1)) & 1) != 0)
            return entry_x22 + entry_i
        
        entry_i += 0x80
    while (zx.q(x0) << 7 != entry_i)

pthread_kill(pthread_self(), 6)
XNoReturn()
return entry_x22 + entry_i
