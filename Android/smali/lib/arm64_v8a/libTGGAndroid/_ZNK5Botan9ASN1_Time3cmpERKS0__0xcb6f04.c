// 函数: _ZNK5Botan9ASN1_Time3cmpERKS0_
// 地址: 0xcb6f04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 8)

if (x8 == 0)
    void** x0_3 = __cxa_allocate_exception(0x20)
    int64_t x0_4
    int128_t v0
    x0_4, v0 = operator new(0x20)
    int64_t var_30 = x0_4
    int128_t var_40 = data_71abe0
    __builtin_strncpy(x0_4, "ASN1_Time::cmp: No time set", 0x1c)
    *x0_3 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_3[1])
    *x0_3 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_3, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

void* entry_x1
int32_t x9 = *(entry_x1 + 8)

if (x8 u>= x9)
    if (x8 u> x9)
        return 1
    
    int32_t x8_1 = *(arg1 + 0xc)
    int32_t x9_1 = *(entry_x1 + 0xc)
    
    if (x8_1 u>= x9_1)
        if (x8_1 u> x9_1)
            return 1
        
        int32_t x8_2 = *(arg1 + 0x10)
        int32_t x9_2 = *(entry_x1 + 0x10)
        
        if (x8_2 u>= x9_2)
            if (x8_2 u> x9_2)
                return 1
            
            int32_t x8_3 = *(arg1 + 0x14)
            int32_t x9_3 = *(entry_x1 + 0x14)
            
            if (x8_3 u>= x9_3)
                if (x8_3 u> x9_3)
                    return 1
                
                int32_t x8_4 = *(arg1 + 0x18)
                int32_t x9_4 = *(entry_x1 + 0x18)
                
                if (x8_4 u>= x9_4)
                    if (x8_4 u> x9_4)
                        return 1
                    
                    int32_t x8_5 = *(arg1 + 0x1c)
                    int32_t x9_5 = *(entry_x1 + 0x1c)
                    
                    if (x8_5 u>= x9_5)
                        return zx.q(x8_5 u> x9_5 ? 1 : 0)

return 0xffffffff
