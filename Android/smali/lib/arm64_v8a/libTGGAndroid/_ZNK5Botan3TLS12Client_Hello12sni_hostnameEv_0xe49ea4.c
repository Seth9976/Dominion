// 函数: _ZNK5Botan3TLS12Client_Hello12sni_hostnameEv
// 地址: 0xe49ea4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t* result = entry_x0 + 0x90
int64_t* i = *result
int16_t* entry_x8

if (i != 0)
    int64_t* x8 = result
    
    do
        int32_t x10_1 = i[4].d
        
        if (x10_1 s>= 0)
            x8 = i
        
        i = i[zx.q(x10_1 u>> 0x1f)]
    while (i != 0)
    
    if (x8 != result && x8[4].d s<= 0)
        result = x8[5]
        
        if (result != 0)
            result = __dynamic_cast(result, _typeinfo_for_Botan::TLS::Extension, 
                _typeinfo_for_Botan::TLS::Server_Name_Indicator, 0)
            
            if (result != 0)
                return std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    entry_x8) __tailcall

*entry_x8 = 0
return result
