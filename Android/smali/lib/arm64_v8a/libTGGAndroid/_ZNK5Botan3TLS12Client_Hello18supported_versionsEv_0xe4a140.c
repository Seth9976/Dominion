// 函数: _ZNK5Botan3TLS12Client_Hello18supported_versionsEv
// 地址: 0xe4a140
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t* result = entry_x0 + 0x90
int64_t* i = *result
int64_t* entry_x8

if (i != 0)
    int64_t* x8 = result
    
    do
        int32_t x10_1 = i[4].d
        
        if (x10_1 s>= 0x2b)
            x8 = i
        
        i = i[zx.q(x10_1 s< 0x2b ? 1 : 0)]
    while (i != 0)
    
    if (x8 != result && x8[4].d s<= 0x2b)
        result = x8[5]
        
        if (result != 0)
            result = __dynamic_cast(result, _typeinfo_for_Botan::TLS::Extension, 
                _typeinfo_for_Botan::TLS::Supported_Versions, 0)
            
            if (result != 0)
                __builtin_memset(entry_x8, 0, 0x18)
                int64_t x21 = result[1]
                int64_t x8_1 = result[2]
                uint64_t x20 = x8_1 - x21
                
                if (x8_1 != x21)
                    if ((x20 & 0xffffffff80000000) != 0)
                        int64_t* x0_3 =
                            std::__ndk1::__vector_base_common<true>::__throw_length_error()
                        void* x8_5 = *entry_x8
                        
                        if (x8_5 != 0)
                            entry_x8[1] = x8_5
                            operator delete(x8_5)
                        
                        sub_1101e04(x0_3)
                        noreturn
                    
                    int64_t x0_1 = operator new(x20)
                    *entry_x8 = x0_1
                    entry_x8[1] = x0_1
                    entry_x8[2] = x0_1 + (x20 s>> 1 << 1)
                    result = memcpy(x0_1, x21, x20)
                    entry_x8[1] = x0_1 + x20
                
                return result

__builtin_memset(entry_x8, 0, 0x18)
return result
