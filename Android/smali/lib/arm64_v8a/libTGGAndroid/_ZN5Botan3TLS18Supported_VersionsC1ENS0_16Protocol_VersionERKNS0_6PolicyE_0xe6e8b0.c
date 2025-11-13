// 函数: _ZN5Botan3TLS18Supported_VersionsC1ENS0_16Protocol_VersionERKNS0_6PolicyE
// 地址: 0xe6e8b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t var_48 = (arg2.d).w
void* x19 = arg1
*arg1 = _vtable_for_Botan::TLS::Supported_Versions + 0x10
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
int64_t result
int64_t* entry_x2
int16_t* x9_1
int64_t x20_2
void* x21_1
void* x22_1
int64_t result_1
void* x24_4

if ((arg2.d u>> 8 & 0xff) u< 0xfb)
    int16_t var_58_1 = 0x303
    
    if ((arg2.d & 0xffff) != 0x303)
        result = Botan::TLS::Protocol_Version::operator>(&var_48)
    
    if ((arg2.d & 0xffff) == 0x303 || (result.d & 1) != 0)
        result = (*(*entry_x2 + 0x98))(entry_x2)
        
        if ((result.d & 1) != 0)
            x9_1 = *(x19 + 0x10)
            int64_t x8_7 = *(x19 + 0x18)
            
            if (x9_1 u>= x8_7)
                x21_1 = *(arg1 + 8)
                x22_1 = x9_1 - x21_1
                
                if (x22_1 s<= -3)
                    goto label_e6eac4
                
                int64_t x24_2 = x22_1 s>> 1
                void* x8_9 = x8_7 - x21_1
                void* x10_4
                
                if (x8_9 u< x24_2 + 1)
                    x10_4 = x24_2 + 1
                else
                    x10_4 = x8_9
                
                void* x25_2
                
                if (0x3fffffffffffffff u> x8_9 s>> 1)
                    x25_2 = x10_4
                else
                    x25_2 = 0x7fffffffffffffff
                
                if (x25_2 == 0)
                    result_1 = 0
                else
                    if ((x25_2 & 0xffffffff80000000) != 0)
                        sub_ef2a0c()
                        noreturn
                    
                    result = operator new(x25_2 << 1)
                    result_1 = result
                
                int16_t* x24_5 = result_1 + (x24_2 << 1)
                x20_2 = result_1 + (x25_2 << 1)
                *x24_5 = 0x303
                x24_4 = &x24_5[1]
                
                if (x22_1 s< 1)
                    goto label_e6ea78
                
            label_e6ea74:
                result = memcpy(result_1, x21_1, x22_1)
            label_e6ea78:
                *(x19 + 8) = result_1
                *(x19 + 0x10) = x24_4
                *(x19 + 0x18) = x20_2
                
                if (x21_1 != 0)
                    return operator delete(x21_1) __tailcall
            else
                *x9_1 = 0x303
                *(x19 + 0x10) = &x9_1[1]
else
    int16_t var_50_1 = 0xfefd
    
    if (0xfefd != zx.d((arg2.d).w))
        result = Botan::TLS::Protocol_Version::operator>(&var_48)
    
    if (0xfefd == zx.d((arg2.d).w) || (result.d & 1) != 0)
        result = (*(*entry_x2 + 0xa8))(entry_x2)
        
        if ((result.d & 1) != 0)
            x9_1 = *(x19 + 0x10)
            int64_t x8_3 = *(x19 + 0x18)
            
            if (x9_1 u>= x8_3)
                x21_1 = *(arg1 + 8)
                x22_1 = x9_1 - x21_1
                
                if (x22_1 s<= -3)
                    std::__ndk1::__vector_base_common<true>::__throw_length_error()
                label_e6eac4:
                    std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    sub_ef2a0c()
                    noreturn
                
                int64_t x24_1 = x22_1 s>> 1
                void* x8_8 = x8_3 - x21_1
                void* x10_2
                
                if (x8_8 u< x24_1 + 1)
                    x10_2 = x24_1 + 1
                else
                    x10_2 = x8_8
                
                void* x25_1
                
                if (0x3fffffffffffffff u> x8_8 s>> 1)
                    x25_1 = x10_2
                else
                    x25_1 = 0x7fffffffffffffff
                
                if (x25_1 == 0)
                    result_1 = 0
                else
                    if ((x25_1 & 0xffffffff80000000) != 0)
                        sub_ef2a0c()
                        noreturn
                    
                    result = operator new(x25_1 << 1)
                    result_1 = result
                
                int16_t* x24_3 = result_1 + (x24_1 << 1)
                x20_2 = result_1 + (x25_1 << 1)
                *x24_3 = 0xfefd
                x24_4 = &x24_3[1]
                
                if (x22_1 s>= 1)
                    goto label_e6ea74
                
                goto label_e6ea78
            
            *x9_1 = -0x103
            *(x19 + 0x10) = &x9_1[1]
return result
