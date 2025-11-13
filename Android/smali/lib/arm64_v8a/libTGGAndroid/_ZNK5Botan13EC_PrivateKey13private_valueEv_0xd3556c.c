// 函数: _ZNK5Botan13EC_PrivateKey13private_valueEv
// 地址: 0xd3556c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0

if (*(entry_x0 + 0x28) != 0)
    int64_t i_2 = *(entry_x0 + 0x20)
    
    if (i_2 == -1)
        int64_t x10_1 = *(entry_x0 + 8)
        int64_t x12_1 = *(entry_x0 + 0x10)
        int64_t x11_1 = x12_1 - x10_1
        
        if (x12_1 == x10_1)
            i_2 = 0
            *(entry_x0 + 0x20) = 0
        label_d35618:
            
            if (i_2 == 0)
            label_d35664:
                void** x0_1 = __cxa_allocate_exception(0x20)
                int64_t x0_2
                int128_t v0
                x0_2, v0 = operator new(0x30)
                (*" - uninitialized")[0].o
                int64_t var_30 = x0_2
                v0 = data_71abd0
                __builtin_strncpy(x0_2, "EC_PrivateKey::private_value - uninitialized", 0x2d)
                int128_t var_40 = v0
                *x0_1 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_1[1])
                *x0_1 = _vtable_for_Botan::Invalid_State + 0x10
                __cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
                noreturn
            
            int32_t* x8_1 = *(entry_x0 + 8)
            int32_t x10_3 = 0
            int64_t i
            
            do
                int32_t x11_4 = *x8_1
                x8_1 = &x8_1[1]
                i = i_2
                i_2 -= 1
                int32_t x11_6 = ((x11_4 - 1) & not.d(x11_4)) s>> 0x1f
                x10_3 = (x10_3 & x11_6) | (not.d(x11_6) & 1)
            while (i != 1)
            
            if (x10_3 == 0)
                goto label_d35664
        else
            int64_t x13_1
            
            x13_1 = x11_1 s>= 0 ? x11_1 : -1
            
            int64_t x12_2 = x10_1 - x12_1
            int64_t x13_2
            
            x13_2 = x13_1 s< 1 ? x13_1 : 1
            
            i_2 = x11_1 s>> 2
            int64_t x11_2
            
            x11_2 = x12_2 s> x11_1 ? x12_2 : x11_1
            
            int64_t i_3 = x13_2 * (x11_2 u>> 2)
            uint64_t x12_3 = 1
            int64_t i_1
            
            do
                int32_t x13_3 = *(x10_1 - 4 + (i_3 << 2))
                i_1 = i_3
                i_3 -= 1
                x12_3 = zx.q(x12_3.d) & zx.q(((x13_3 - 1) & not.d(x13_3)) s>> 0x1f)
                i_2 -= x12_3
            while (i_1 != 1)
            *(entry_x0 + 0x20) = i_2
            
            if (i_2 u<= 1)
                goto label_d35618
    else if (i_2 u<= 1)
        goto label_d35618

return entry_x0 + 8
