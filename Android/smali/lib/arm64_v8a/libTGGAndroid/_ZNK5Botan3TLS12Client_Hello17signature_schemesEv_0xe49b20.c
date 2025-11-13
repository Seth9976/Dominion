// 函数: _ZNK5Botan3TLS12Client_Hello17signature_schemesEv
// 地址: 0xe49b20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::TLS::Signature_Scheme* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
void* entry_x0
int64_t* result = entry_x0 + 0x90
int64_t* i = *result

if (i != 0)
    int64_t* x8 = result
    
    do
        int32_t x10_1 = i[4].d
        
        if (x10_1 s>= 0xd)
            x8 = i
        
        i = i[zx.q(x10_1 s< 0xd ? 1 : 0)]
    while (i != 0)
    
    if (x8 != result && x8[4].d s<= 0xd)
        result = x8[5]
        
        if (result != 0)
            result = __dynamic_cast(result, _typeinfo_for_Botan::TLS::Extension, 
                _typeinfo_for_Botan::TLS::Signature_Algorithms, 0)
            
            if (result != 0 && &result[1] != entry_x8)
                result[2]
                return std::__ndk1::vector<Botan::TLS::Signature_Scheme, std::__ndk1::allocator<Botan::TLS::Signature_Scheme> >::assign<Botan::TLS::Signature_Scheme*>(
                    entry_x8, result[1])

return result
