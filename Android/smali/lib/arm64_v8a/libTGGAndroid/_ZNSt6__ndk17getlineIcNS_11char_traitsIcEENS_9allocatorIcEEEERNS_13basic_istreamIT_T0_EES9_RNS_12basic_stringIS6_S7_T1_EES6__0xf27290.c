// 函数: _ZNSt6__ndk17getlineIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EES6_
// 地址: 0xf27290
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_38
std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::sentry::sentry(&var_38, arg1.b)

if (zx.d(var_38) != 0)
    if ((zx.d(*arg2) & 1) != 0)
        **(arg2 + 0x10) = 0
        *(arg2 + 8) = 0
    else
        *arg2 = 0
    
    int64_t x22_1 = 0
    
    while (true)
        int64_t* x0_1 = *(arg1 + 0x28 + *(*arg1 - 0x18))
        char* x8_5 = x0_1[3]
        uint32_t x8_6
        
        if (x8_5 == x0_1[4])
            uint32_t x0_2 = (*(*x0_1 + 0x50))()
            x8_6 = x0_2
            
            if (x0_2 == 0xffffffff)
                if (x22_1 == 0)
                    break
                
                break
        else
            x0_1[3] = &x8_5[1]
            x8_6 = zx.d(*x8_5)
        
        if ((x8_6 & 0xff) == zx.d(arg3))
            break
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
            arg2.b)
        x22_1 -= 1
        
        if ((zx.d(*arg2) & 1) != 0)
            if (*(arg2 + 8) == -0x11)
                break
    
    void* x0_4 = arg1 + *(*arg1 - 0x18)
    *(x0_4 + 0x20)
    std::__ndk1::ios_base::clear(x0_4.d)

return arg1
