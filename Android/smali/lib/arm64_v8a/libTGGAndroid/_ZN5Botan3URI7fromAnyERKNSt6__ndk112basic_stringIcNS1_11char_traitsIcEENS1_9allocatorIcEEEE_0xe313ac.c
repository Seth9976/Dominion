// 函数: _ZN5Botan3URI7fromAnyERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe313ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x22 + 0x28)
uint64_t x9_1 = zx.q(*arg1)
int64_t result
uint32_t x8
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x10_1
uint64_t x12_1

if ((x9_1.d & 1) != 0)
    x10_1 = *(arg1 + 0x10)
    x8 = zx.d(*x10_1)
    
    if (x8 != 0x5b)
        x12_1 = *(arg1 + 8)
        
        if (x12_1 == 0)
        label_e314b0:
            char var_d0
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &var_d0, arg1, 0, 
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
                    arg1.b, 0x3a))
            void* var_c0
            char* x1_2
            
            if ((zx.d(var_d0) & 1) == 0)
                x1_2 = &var_d0 | 1
            else
                x1_2 = var_c0
            
            void var_b8
            int32_t x0_4 = inet_pton(2, x1_2, &var_b8)
            
            if ((zx.d(var_d0) & 1) != 0)
                operator delete(var_c0)
            
            if (x0_4 == 0)
                result = Botan::URI::fromDomain(arg1)
            else
                result = Botan::URI::fromIPv4(arg1)
        else
        label_e3141c:
            int32_t x11_1 = 0
            int32_t x9_2 = 0
            void* __offset(
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                0x2) x10_2 = x10_1 + 1
            int32_t x13_1 = x8 & 0xff
            int64_t x12_2 = x12_1 - 1
            
            if (x13_1 != 0x3a)
            label_e31464:
                x9_2 |= (x13_1 != 0x2e ? 1 : 0) & (zx.d(x8.b - 0x30) u> 9 ? 1 : 0)
                
                if (x12_2 != 0)
                    goto label_e3146c
            else
                while (true)
                    if ((x11_1 & 1) != 0)
                        goto label_e3140c_1
                    
                    x11_1 = 1
                    
                    if (x12_2 == 0)
                        break
                    
                label_e3146c:
                    x8 = zx.d(*x10_2)
                    x10_2 += 1
                    x13_1 = x8 & 0xff
                    x12_2 -= 1
                    
                    if (x13_1 != 0x3a)
                        goto label_e31464
            
            if ((x9_2 & 1) == 0)
                goto label_e314b0
            
            result = Botan::URI::fromDomain(arg1)
    else
    label_e3140c:
        result = Botan::URI::fromIPv6(arg1)
else
    x10_1 = arg1 + 1
    x8 = zx.d(*x10_1)
    
    if (x8 != 0x5b)
        x12_1 = x9_1 u>> 1
        
        if (x12_1 != 0)
            goto label_e3141c
        
        goto label_e314b0
    
label_e3140c_1:
    result = Botan::URI::fromIPv6(arg1)

if (*(x22 + 0x28) == x9)
    return result

__stack_chk_fail()
noreturn
