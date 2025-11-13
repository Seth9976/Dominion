// 函数: _ZN5Botan3TLS23auth_method_from_stringERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe549ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(*arg1)
uint64_t x8 = *(arg1 + 8)
int32_t x9 = x10.d & 1
uint64_t x10_1 = x10 u>> 1
uint64_t x11

x11 = x9 == 0 ? x10_1 : x8

if (x11 != 3)
    goto label_e54a0c

int32_t x20

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg1, 0, -ffffffffffffffff, &data_76da56) == 0)
    x20 = 0
else
    uint64_t x10_2 = zx.q(*arg1)
    x8 = *(arg1 + 8)
    x9 = x10_2.d & 1
    x10_1 = x10_2 u>> 1
label_e54a0c:
    uint64_t x11_1
    
    if ((x9 & 0xff) == 0)
        x11_1 = x10_1
    else
        x11_1 = x8
    
    if (x11_1 != 3)
        goto label_e54a4c
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            arg1, 0, -ffffffffffffffff, &data_72065f) == 0)
        x20 = 1
    else
        uint64_t x10_3 = zx.q(*arg1)
        x8 = *(arg1 + 8)
        x9 = x10_3.d & 1
        x10_1 = x10_3 u>> 1
    label_e54a4c:
        uint64_t x11_2
        
        if ((x9 & 0xff) == 0)
            x11_2 = x10_1
        else
            x11_2 = x8
        
        if (x11_2 != 5)
            goto label_e54a8c
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                arg1, 0, -ffffffffffffffff, "ECDSA") == 0)
            x20 = 2
        else
            uint64_t x10_4 = zx.q(*arg1)
            x8 = *(arg1 + 8)
            x9 = x10_4.d & 1
            x10_1 = x10_4 u>> 1
        label_e54a8c:
            uint64_t x11_3
            
            if ((x9 & 0xff) == 0)
                x11_3 = x10_1
            else
                x11_3 = x8
            
            if (x11_3 != 8)
                goto label_e54acc
            
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    arg1, 0, -ffffffffffffffff, "IMPLICIT") == 0)
                x20 = 0x10000
            else
                uint64_t x10_5 = zx.q(*arg1)
                x8 = *(arg1 + 8)
                x9 = x10_5.d & 1
                x10_1 = x10_5 u>> 1
            label_e54acc:
                uint64_t x11_4
                
                if ((x9 & 0xff) == 0)
                    x11_4 = x10_1
                else
                    x11_4 = x8
                
                x20 = 0x10001
                
                if (x11_4 != 9)
                    goto label_e54b10
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        arg1, 0, -ffffffffffffffff, "ANONYMOUS") != 0)
                    uint64_t x10_6 = zx.q(*arg1)
                    x8 = *(arg1 + 8)
                    x9 = x10_6.d & 1
                    x10_1 = x10_6 u>> 1
                label_e54b10:
                    uint64_t x8_1
                    
                    if ((x9 & 0xff) == 0)
                        x8_1 = x10_1
                    else
                        x8_1 = x8
                    
                    int32_t x0_11
                    
                    if (x8_1 == 0)
                        x0_11 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            arg1, 0, -ffffffffffffffff, &data_793a18)
                    
                    if (x8_1 != 0 || x0_11 != 0)
                        void** x0_12 = __cxa_allocate_exception(0x20)
                        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                            "Bad signature method ", arg1)
                        *x0_12 = _vtable_for_Botan::Exception + 0x10
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &x0_12[1])
                        *x0_12 = _vtable_for_Botan::Invalid_Argument + 0x10
                        __cxa_throw(x0_12, _typeinfo_for_Botan::Invalid_Argument, 
                            Botan::Exception::~Exception)
                        noreturn

return zx.q(x20)
