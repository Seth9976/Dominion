// 函数: _ZNK5Botan10Extensions18get_extension_bitsERKNS_3OIDE
// 地址: 0xeaeba4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(Botan::OID, 0x28) result = arg1 + 0x28
void** i = *result

if (i != 0)
    void* entry_x1
    int32_t* x8 = *(entry_x1 + 8)
    int64_t x9_1 = *(entry_x1 + 0x10)
    void* __offset(Botan::OID, 0x28) x22_1
    
    if (x8 == x9_1)
        do
            x22_1 = i
            i = *i
        while (i != 0)
    else
        x22_1 = result
        
        while (true)
        label_eaebf0:
            int32_t* x12_1 = i[5]
            int32_t* x13_1 = x8
            
            while (true)
                if (i[6] != x12_1)
                    int32_t x14_1 = *x12_1
                    int32_t x15_1 = *x13_1
                    
                    if (x14_1 u>= x15_1)
                        if (x15_1 u< x14_1)
                            break
                        
                        x13_1 = &x13_1[1]
                        x12_1 = &x12_1[1]
                        
                        if (x9_1 == x13_1)
                            break
                        
                        continue
                
                i = i[1]
                
                if (i == 0)
                    goto label_eaec34
                
                goto label_eaebf0
            
            x22_1 = i
            i = *i
            
            if (i == 0)
                break
    
label_eaec34:
    
    if (x22_1 != result)
        int32_t* x10_1 = *(x22_1 + 0x28)
        int64_t x11_2 = *(x22_1 + 0x30)
        
        if (x10_1 != x11_2)
            do
                if (x9_1 == x8)
                    goto label_eaece4
                
                int32_t x12_2 = *x8
                int32_t x13_2 = *x10_1
                
                if (x12_2 u< x13_2)
                    goto label_eaece4
                
                if (x13_2 u< x12_2)
                    break
                
                x10_1 = &x10_1[1]
                x8 = &x8[1]
            while (x11_2 != x10_1)
        
        void** entry_x8
        __builtin_memset(entry_x8, 0, 0x18)
        int64_t x9_2 = *(x22_1 + 0x50)
        int64_t x8_1 = *(x22_1 + 0x58)
        uint64_t x21 = x8_1 - x9_2
        
        if (x8_1 != x9_2)
            if ((x21 & 0xffffffff80000000) != 0)
                int64_t* x0_8 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
                void* x8_6 = *entry_x8
                
                if (x8_6 == 0)
                    sub_1101e04(x0_8)
                    noreturn
                
                entry_x8[1] = x8_6
                operator delete(x8_6)
                sub_1101e04(x0_8)
                noreturn
            
            result = operator new(x21)
            *entry_x8 = result
            entry_x8[1] = result
            entry_x8[2] = result + x21
            int64_t x1 = *(x22_1 + 0x50)
            void* __offset(Botan::OID, 0x28) result_1 = result
            size_t x21_1 = *(x22_1 + 0x58) - x1
            
            if (x21_1 s>= 1)
                result = memcpy(result_1, x1, x21_1)
                result_1 += x21_1
            
            entry_x8[1] = result_1
        
        return result

label_eaece4:
void** x0_2 = __cxa_allocate_exception(0x20)
int64_t x0_3
int128_t v0
x0_3, v0 = operator new(0x40)
v0 = data_71adb0
int64_t var_40 = x0_3
__builtin_strncpy(x0_3, "Extensions::get_extension_bits no such extension set", 0x35)
int128_t var_50 = v0
*x0_2 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_2[1])
*x0_2 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_2, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
