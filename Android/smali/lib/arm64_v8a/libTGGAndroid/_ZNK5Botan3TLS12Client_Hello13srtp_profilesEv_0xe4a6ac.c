// 函数: _ZNK5Botan3TLS12Client_Hello13srtp_profilesEv
// 地址: 0xe4a6ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t* result = entry_x0 + 0x90
int64_t* i = *result
int64_t** entry_x8

if (i != 0)
    int64_t* x8 = result
    
    do
        int32_t x10_1 = i[4].d
        
        if (x10_1 s>= 0xe)
            x8 = i
        
        i = i[zx.q(x10_1 s< 0xe ? 1 : 0)]
    while (i != 0)
    
    if (x8 != result && x8[4].d s<= 0xe)
        result = x8[5]
        
        if (result != 0)
            result = __dynamic_cast(result, _typeinfo_for_Botan::TLS::Extension, 
                _typeinfo_for_Botan::TLS::SRTP_Protection_Profiles, 0)
            
            if (result != 0)
                __builtin_memset(entry_x8, 0, 0x18)
                int64_t x9_1 = result[1]
                int64_t x8_1 = result[2]
                int64_t* result_1 = result
                uint64_t x22 = x8_1 - x9_1
                
                if (x8_1 != x9_1)
                    if ((x22 & 0xffffffff80000000) != 0)
                        int64_t* x0_3 =
                            std::__ndk1::__vector_base_common<true>::__throw_length_error()
                        int64_t* x8_5 = *entry_x8
                        
                        if (x8_5 != 0)
                            entry_x8[1] = x8_5
                            operator delete(x8_5)
                        
                        sub_1101e04(x0_3)
                        noreturn
                    
                    result = operator new(x22)
                    *entry_x8 = result
                    entry_x8[1] = result
                    entry_x8[2] = result + (x22 s>> 1 << 1)
                    int64_t x1_2 = result_1[1]
                    int64_t* result_2 = result
                    size_t x20 = result_1[2] - x1_2
                    
                    if (x20 s>= 1)
                        result = memcpy(result_2, x1_2, x20)
                        result_2 += x20
                    
                    entry_x8[1] = result_2
                
                return result

__builtin_memset(entry_x8, 0, 0x18)
return result
