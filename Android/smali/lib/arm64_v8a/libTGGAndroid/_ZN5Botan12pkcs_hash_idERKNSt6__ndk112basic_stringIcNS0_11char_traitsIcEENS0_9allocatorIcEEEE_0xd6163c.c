// 函数: _ZN5Botan12pkcs_hash_idERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
// 地址: 0xd6163c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x11 = zx.q(*arg1)
uint64_t x9 = *(arg1 + 8)
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9

int128_t** entry_x8

if (x12 == 0x15)
    int64_t x0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg1, 0, -ffffffffffffffff, "Parallel(MD5,SHA-160)")
    
    if (x0_1.d == 0)
        __builtin_memset(entry_x8, 0, 0x18)
        return x0_1
    
    uint64_t x8 = zx.q(*arg1)
    x9 = *(arg1 + 8)
    x10 = x8.d & 1
    x11_1 = x8 u>> 1

uint64_t x8_1

if ((x10 & 0xff) == 0)
    x8_1 = x11_1
else
    x8_1 = x9

if (x8_1 != 3)
    goto label_d616e0

int128_t* x0_34
void* x8_32
int128_t v0

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg1, 0, -ffffffffffffffff, &data_765085) == 0)
    __builtin_memset(entry_x8, 0, 0x18)
    x0_34, v0 = operator new(0x12)
    v0 = data_836d0e
    x8_32 = x0_34 + 0x12
    entry_x8[2] = x8_32
    x0_34[1].w = 0x1004
else
    uint64_t x8_2 = zx.q(*arg1)
    x9 = *(arg1 + 8)
    x10 = x8_2.d & 1
    x11_1 = x8_2 u>> 1
label_d616e0:
    uint64_t x8_3
    
    if ((x10 & 0xff) == 0)
        x8_3 = x11_1
    else
        x8_3 = x9
    
    int128_t* x0_35
    char const* const x8_33
    
    if (x8_3 == 0xa)
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                arg1, 0, -ffffffffffffffff, "RIPEMD-160") == 0)
            __builtin_memset(entry_x8, 0, 0x18)
            x0_35 = operator new(0xf)
            x8_33 = "0!0\t"
        label_d61b34:
            int64_t x9_3 = *x8_33
            int64_t x8_34 = *(x8_33 + 7)
            entry_x8[1] = x0_35 + 0xf
            entry_x8[2] = x0_35 + 0xf
            *x0_35 = x9_3
            *(x0_35 + 7) = x8_34
            *entry_x8 = x0_35
            return x0_35
        
        uint64_t x8_4 = zx.q(*arg1)
        x9 = *(arg1 + 8)
        x10 = x8_4.d & 1
        x11_1 = x8_4 u>> 1
    
    uint64_t x8_5
    
    if ((x10 & 0xff) == 0)
        x8_5 = x11_1
    else
        x8_5 = x9
    
    if (x8_5 != 7)
        goto label_d61760
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg1, 0, -ffffffffffffffff, "SHA-160") == 0)
    label_d61abc:
        __builtin_memset(entry_x8, 0, 0x18)
        x0_35 = operator new(0xf)
        x8_33 = "0!0\t"
        goto label_d61b34
    
    uint64_t x8_6 = zx.q(*arg1)
    x9 = *(arg1 + 8)
    x10 = x8_6.d & 1
    x11_1 = x8_6 u>> 1
label_d61760:
    uint64_t x8_7
    
    if ((x10 & 0xff) == 0)
        x8_7 = x11_1
    else
        x8_7 = x9
    
    if (x8_7 != 5)
        goto label_d617a0
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "SHA-1") == 0)
        goto label_d61abc
    
    uint64_t x8_8 = zx.q(*arg1)
    x9 = *(arg1 + 8)
    x10 = x8_8.d & 1
    x11_1 = x8_8 u>> 1
label_d617a0:
    uint64_t x8_9
    
    if ((x10 & 0xff) == 0)
        x8_9 = x11_1
    else
        x8_9 = x9
    
    if (x8_9 != 4)
        goto label_d617e0
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "SHA1") == 0)
        goto label_d61abc
    
    uint64_t x8_10 = zx.q(*arg1)
    x9 = *(arg1 + 8)
    x10 = x8_10.d & 1
    x11_1 = x8_10 u>> 1
label_d617e0:
    uint64_t x8_11
    
    if ((x10 & 0xff) == 0)
        x8_11 = x11_1
    else
        x8_11 = x9
    
    if (x8_11 != 7)
        goto label_d61820
    
    char const* const x9_4
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, "SHA-224") == 0)
        __builtin_memset(entry_x8, 0, 0x18)
        x0_34, v0 = operator new(0x13)
        x8_32 = x0_34 + 0x13
        x9_4 = "0-0\r"
    label_d61c1c:
        v0 = *x9_4
        entry_x8[2] = x8_32
        *(x0_34 + 0xf) = 0x1c040005
    else
        uint64_t x8_12 = zx.q(*arg1)
        x9 = *(arg1 + 8)
        x10 = x8_12.d & 1
        x11_1 = x8_12 u>> 1
    label_d61820:
        uint64_t x8_13
        
        if ((x10 & 0xff) == 0)
            x8_13 = x11_1
        else
            x8_13 = x9
        
        if (x8_13 != 7)
            goto label_d61860
        
        char const* const x9_5
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                arg1, 0, -ffffffffffffffff, "SHA-256") == 0)
            __builtin_memset(entry_x8, 0, 0x18)
            x0_34, v0 = operator new(0x13)
            x8_32 = x0_34 + 0x13
            x9_5 = "010\r"
        label_d61c48:
            v0 = *x9_5
            entry_x8[2] = x8_32
            *(x0_34 + 0xf) = 0x20040005
        else
            uint64_t x8_14 = zx.q(*arg1)
            x9 = *(arg1 + 8)
            x10 = x8_14.d & 1
            x11_1 = x8_14 u>> 1
        label_d61860:
            uint64_t x8_15
            
            if ((x10 & 0xff) == 0)
                x8_15 = x11_1
            else
                x8_15 = x9
            
            if (x8_15 != 7)
                goto label_d618a0
            
            char const* const x9_6
            
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    arg1, 0, -ffffffffffffffff, "SHA-384") == 0)
                __builtin_memset(entry_x8, 0, 0x18)
                x0_34, v0 = operator new(0x13)
                x8_32 = x0_34 + 0x13
                x9_6 = "0A0\r"
            label_d61c74:
                v0 = *x9_6
                entry_x8[2] = x8_32
                *(x0_34 + 0xf) = 0x30040005
            else
                uint64_t x8_16 = zx.q(*arg1)
                x9 = *(arg1 + 8)
                x10 = x8_16.d & 1
                x11_1 = x8_16 u>> 1
            label_d618a0:
                uint64_t x8_17
                
                if ((x10 & 0xff) == 0)
                    x8_17 = x11_1
                else
                    x8_17 = x9
                
                if (x8_17 != 7)
                    goto label_d618e0
                
                char const* const x9_7
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        arg1, 0, -ffffffffffffffff, "SHA-512") == 0)
                    __builtin_memset(entry_x8, 0, 0x18)
                    x0_34, v0 = operator new(0x13)
                    x8_32 = x0_34 + 0x13
                    x9_7 = "0Q0\r"
                label_d61ca0:
                    v0 = *x9_7
                    entry_x8[2] = x8_32
                    *(x0_34 + 0xf) = 0x40040005
                else
                    uint64_t x8_18 = zx.q(*arg1)
                    x9 = *(arg1 + 8)
                    x10 = x8_18.d & 1
                    x11_1 = x8_18 u>> 1
                label_d618e0:
                    uint64_t x8_19
                    
                    if ((x10 & 0xff) == 0)
                        x8_19 = x11_1
                    else
                        x8_19 = x9
                    
                    if (x8_19 != 0xb)
                        goto label_d61920
                    
                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            arg1, 0, -ffffffffffffffff, "SHA-512-256") == 0)
                        __builtin_memset(entry_x8, 0, 0x18)
                        x0_34, v0 = operator new(0x13)
                        x8_32 = x0_34 + 0x13
                        x9_5 = "010\r"
                        goto label_d61c48
                    
                    uint64_t x8_20 = zx.q(*arg1)
                    x9 = *(arg1 + 8)
                    x10 = x8_20.d & 1
                    x11_1 = x8_20 u>> 1
                label_d61920:
                    uint64_t x8_21
                    
                    if ((x10 & 0xff) == 0)
                        x8_21 = x11_1
                    else
                        x8_21 = x9
                    
                    if (x8_21 == 0xa)
                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                arg1, 0, -ffffffffffffffff, "SHA-3(224)") == 0)
                            __builtin_memset(entry_x8, 0, 0x18)
                            x0_34, v0 = operator new(0x13)
                            x8_32 = x0_34 + 0x13
                            x9_4 = "0-0\r"
                            goto label_d61c1c
                        
                        uint64_t x8_22 = zx.q(*arg1)
                        x9 = *(arg1 + 8)
                        x10 = x8_22.d & 1
                        x11_1 = x8_22 u>> 1
                    
                    uint64_t x8_23
                    
                    if ((x10 & 0xff) == 0)
                        x8_23 = x11_1
                    else
                        x8_23 = x9
                    
                    if (x8_23 != 0xa)
                        goto label_d619a0
                    
                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            arg1, 0, -ffffffffffffffff, "SHA-3(256)") == 0)
                        __builtin_memset(entry_x8, 0, 0x18)
                        x0_34, v0 = operator new(0x13)
                        x8_32 = x0_34 + 0x13
                        x9_5 = "010\r"
                        goto label_d61c48
                    
                    uint64_t x8_24 = zx.q(*arg1)
                    x9 = *(arg1 + 8)
                    x10 = x8_24.d & 1
                    x11_1 = x8_24 u>> 1
                label_d619a0:
                    uint64_t x8_25
                    
                    if ((x10 & 0xff) == 0)
                        x8_25 = x11_1
                    else
                        x8_25 = x9
                    
                    if (x8_25 != 0xa)
                        goto label_d619e0
                    
                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            arg1, 0, -ffffffffffffffff, "SHA-3(384)") == 0)
                        __builtin_memset(entry_x8, 0, 0x18)
                        x0_34, v0 = operator new(0x13)
                        x8_32 = x0_34 + 0x13
                        x9_6 = "0A0\r"
                        goto label_d61c74
                    
                    uint64_t x8_26 = zx.q(*arg1)
                    x9 = *(arg1 + 8)
                    x10 = x8_26.d & 1
                    x11_1 = x8_26 u>> 1
                label_d619e0:
                    uint64_t x8_27
                    
                    if ((x10 & 0xff) == 0)
                        x8_27 = x11_1
                    else
                        x8_27 = x9
                    
                    if (x8_27 != 0xa)
                        goto label_d61a20
                    
                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            arg1, 0, -ffffffffffffffff, "SHA-3(512)") == 0)
                        __builtin_memset(entry_x8, 0, 0x18)
                        x0_34, v0 = operator new(0x13)
                        x8_32 = x0_34 + 0x13
                        x9_7 = "0Q0\r"
                        goto label_d61ca0
                    
                    uint64_t x8_28 = zx.q(*arg1)
                    x9 = *(arg1 + 8)
                    x10 = x8_28.d & 1
                    x11_1 = x8_28 u>> 1
                label_d61a20:
                    uint64_t x8_29
                    
                    if ((x10 & 0xff) == 0)
                        x8_29 = x11_1
                    else
                        x8_29 = x9
                    
                    if (x8_29 != 3)
                        goto label_d61a60
                    
                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            arg1, 0, -ffffffffffffffff, &data_7585af) == 0)
                        __builtin_memset(entry_x8, 0, 0x18)
                        x0_34, v0 = operator new(0x12)
                        v0 = data_836de9
                        x8_32 = x0_34 + 0x12
                        entry_x8[2] = x8_32
                        x0_34[1].w = 0x2004
                    else
                        uint64_t x8_30 = zx.q(*arg1)
                        x9 = *(arg1 + 8)
                        x10 = x8_30.d & 1
                        x11_1 = x8_30 u>> 1
                    label_d61a60:
                        uint64_t x8_31
                        
                        if ((x10 & 0xff) == 0)
                            x8_31 = x11_1
                        else
                            x8_31 = x9
                        
                        int32_t x0_33
                        
                        if (x8_31 == 0xb)
                            x0_33 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                arg1, 0, -ffffffffffffffff, "Tiger(24,3)")
                        
                        if (x8_31 != 0xb || x0_33 != 0)
                            void** x0_36 = __cxa_allocate_exception(0x20)
                            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                                "No PKCS #1 identifier for ", arg1)
                            *x0_36 = _vtable_for_Botan::Exception + 0x10
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &x0_36[1])
                            *x0_36 = _vtable_for_Botan::Invalid_Argument + 0x10
                            __cxa_throw(x0_36, _typeinfo_for_Botan::Invalid_Argument, 
                                Botan::Exception::~Exception)
                            noreturn
                        
                        __builtin_memset(entry_x8, 0, 0x18)
                        x0_34, v0 = operator new(0x13)
                        v0 = *"0)0\r"
                        x8_32 = x0_34 + 0x13
                        entry_x8[2] = x8_32
                        *(x0_34 + 0xf) = 0x18040005

*x0_34 = v0
*entry_x8 = x0_34
entry_x8[1] = x8_32
return x0_34
