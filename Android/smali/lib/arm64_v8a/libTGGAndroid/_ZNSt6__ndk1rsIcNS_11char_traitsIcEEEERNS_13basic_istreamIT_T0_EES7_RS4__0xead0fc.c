// 函数: _ZNSt6__ndk1rsIcNS_11char_traitsIcEEEERNS_13basic_istreamIT_T0_EES7_RS4_
// 地址: 0xead0fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_18
std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::sentry::sentry(&var_18, arg1.b)

if (zx.d(var_18) != 0)
    int64_t* x0_1 = *(arg1 + *(*arg1 - 0x18) + 0x28)
    char* x8_4 = x0_1[3]
    
    if (x8_4 == x0_1[4])
        uint32_t x0_2 = (*(*x0_1 + 0x50))()
        
        if (x0_2 != 0xffffffff)
            *arg2 = x0_2.b
    else
        x0_1[3] = &x8_4[1]
        *arg2 = *x8_4
    
    void* x0_3 = arg1 + *(*arg1 - 0x18)
    *(x0_3 + 0x20)
    std::__ndk1::ios_base::clear(x0_3.d)

return arg1
