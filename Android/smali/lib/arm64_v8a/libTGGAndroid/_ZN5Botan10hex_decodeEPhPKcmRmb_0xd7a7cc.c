// 函数: _ZN5Botan10hex_decodeEPhPKcmRmb
// 地址: 0xd7a7cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x22 = arg2
uint64_t x2 = arg3 u>> 1

if (x2 != 0)
    memset(arg1, 0, x2)

uint8_t* x8

if (arg3 == 0)
    x8 = arg1
    *arg4 = arg3
else
    int32_t x9_1 = 1
    uint64_t i_2 = arg3
    x8 = arg1
    uint32_t x10_6
    
    if ((arg5.d & 1) != 0)
        uint64_t i
        
        do
            x10_6 = zx.d(*x22)
            int32_t x1_24 = (((x10_6 - 0x37)
                | sx.d((0x46 - x10_6.b) | x10_6.b | (x10_6.b - 0x41)) s>> 7) ^ (x10_6 - 0x57))
                & sx.d((0x66 - x10_6.b) | x10_6.b | (x10_6.b - 0x61)) s>> 7
            int32_t x0_17 = ((((x10_6 ^ 9) - 1) | ((x10_6 ^ 0x20) - 1) | ((x10_6 ^ 0xa) - 1)
                | ((x10_6 ^ 0xd) - 1)) & not.d(x10_6) & 0x80) << 0x18 s>> 0x1f
            int32_t x0_19 = (x0_17 & 0xffffff80) | (((((x10_6 - 0x30) ^ (x10_6 - 0x57) ^ x1_24)
                & sx.d((0x39 - x10_6.b) | x10_6.b | (x10_6 - 0x30).b) s>> 7) ^ (x10_6 - 0x30))
                & not.d(x0_17))
            int32_t x1_29 = x0_19 & 0xff
            
            if (x1_29 u< 0x10)
                int32_t temp0_1 = x9_1 & 1
                char x0_10
                
                if (temp0_1 != 0)
                    x0_10 = (x0_19 << 4).b
                else
                    x0_10 = x0_19.b
                
                *x8 |= x0_10
                x9_1 ^= 1
                
                if (temp0_1 == 0)
                    x8 = &x8[1]
            else if (x1_29 != 0x80)
                goto label_d7aa18
            
            i = i_2
            i_2 -= 1
            x22 = &x22[1]
        while (i != 1)
    else
        uint64_t i_1
        
        do
            x10_6 = zx.d(*x22)
            int32_t x1_8 = (((x10_6 - 0x37)
                | sx.d((0x46 - x10_6.b) | x10_6.b | (x10_6.b - 0x41)) s>> 7) ^ (x10_6 - 0x57))
                & sx.d((0x66 - x10_6.b) | x10_6.b | (x10_6.b - 0x61)) s>> 7
            int32_t x0_7 = ((((x10_6 ^ 9) - 1) | ((x10_6 ^ 0x20) - 1) | ((x10_6 ^ 0xa) - 1)
                | ((x10_6 ^ 0xd) - 1)) & not.d(x10_6) & 0x80) << 0x18 s>> 0x1f
            int32_t x0_9 = (x0_7 & 0xffffff80) | (((((x10_6 - 0x30) ^ (x10_6 - 0x57) ^ x1_8)
                & sx.d((0x39 - x10_6.b) | x10_6.b | (x10_6 - 0x30).b) s>> 7) ^ (x10_6 - 0x30))
                & not.d(x0_7))
            
            if ((x0_9 & 0xff) u> 0xf)
            label_d7aa18:
                uint8_t var_47 = x10_6.b
                char var_48 = 2
                char var_46 = 0
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &var_48, 0, -ffffffffffffffff, 0x7a6a6b) != 0)
                    uint64_t x8_1 = zx.q(var_48)
                    uint64_t x8_2
                    uint64_t var_40
                    
                    if ((x8_1.d & 1) == 0)
                        x8_2 = x8_1 u>> 1
                    else
                        x8_2 = var_40
                    
                    if (x8_2 == 1 && std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &var_48, 0, -ffffffffffffffff, &data_77e1ad) == 0)
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                            &var_48)
                else
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                        &var_48)
                
                void** x0_27 = __cxa_allocate_exception(0x20)
                int64_t x0_28
                int128_t v2
                x0_28, v2 = operator new(0x30)
                uint64_t x10_8 = zx.q(var_48)
                v2 = data_71b820
                __builtin_strncpy(x0_28, "hex_decode: invalid hex character \'", 0x24)
                uint64_t x1_32
                uint64_t var_38
                
                if ((x10_8.d & 1) == 0)
                    x1_32 = &var_48 | 1
                else
                    x1_32 = var_38
                int64_t var_90 = x0_28
                int128_t var_a0 = v2
                int128_t* x0_30
                int128_t v0
                x0_30, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_a0, x1_32)
                int64_t var_70 = x0_30[1].q
                int128_t var_80 = *x0_30
                __builtin_memset(x0_30, 0, 0x18)
                int128_t* x0_32
                int128_t v0_1
                x0_32, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_80)
                int64_t var_50 = x0_32[1].q
                int128_t var_60 = *x0_32
                __builtin_memset(x0_32, 0, 0x18)
                *x0_27 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_27[1])
                *x0_27 = _vtable_for_Botan::Invalid_Argument + 0x10
                __cxa_throw(x0_27, _typeinfo_for_Botan::Invalid_Argument, 
                    Botan::Exception::~Exception)
                noreturn
            
            int32_t temp1_1 = x9_1 & 1
            char x10_2
            
            if (temp1_1 != 0)
                x10_2 = (x0_9 << 4).b
            else
                x10_2 = x0_9.b
            
            *x8 |= x10_2
            x9_1 ^= 1
            
            if (temp1_1 == 0)
                x8 = &x8[1]
            
            i_1 = i_2
            i_2 -= 1
            x22 = &x22[1]
        while (i_1 != 1)
    *arg4 = arg3
    
    if ((x9_1 & 1) == 0)
        *x8 = 0
        *arg4 -= 1

return x8 - arg1
