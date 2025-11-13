// 函数: _ZNK5Botan3TLS12Client_Hello31supports_extended_master_secretEv
// 地址: 0xe4a448
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t* i = *(entry_x0 + 0x90)

if (i != 0)
    int64_t* i_1 = entry_x0 + 0x90
    
    do
        int32_t x10_1 = i[4].d
        
        if (x10_1 s>= 0x17)
            i_1 = i
        
        i = i[zx.q(x10_1 s< 0x17 ? 1 : 0)]
    while (i != 0)
    
    if (i_1 != entry_x0 + 0x90 && i_1[4].d s<= 0x17)
        uint64_t result = i_1[5]
        
        if (result == 0)
            return result
        
        return zx.q(__dynamic_cast(result, _typeinfo_for_Botan::TLS::Extension, 
            _typeinfo_for_Botan::TLS::Extended_Master_Secret, 0) != 0 ? 1 : 0)

return 0
