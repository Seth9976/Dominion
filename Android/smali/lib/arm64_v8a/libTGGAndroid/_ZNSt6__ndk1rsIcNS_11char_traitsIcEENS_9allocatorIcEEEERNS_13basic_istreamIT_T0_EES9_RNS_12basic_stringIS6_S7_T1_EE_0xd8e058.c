// 函数: _ZNSt6__ndk1rsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EE
// 地址: 0xd8e058
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_38
std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::sentry::sentry(&var_38, arg1.b)

if (zx.d(var_38) != 0)
    if ((zx.d(*arg2) & 1) != 0)
        **(arg2 + 0x10) = 0
        *(arg2 + 8) = 0
    else
        *arg2 = 0
    
    int64_t x8_5 = *(arg1 + *(*arg1 - 0x18) + 0x18)
    int64_t x22_1
    
    x22_1 = x8_5 s< 1 ? 0x7fffffffffffffff : x8_5
    
    std::__ndk1::ios_base::getloc()
    void var_48
    void* x0_3 = std::__ndk1::locale::use_facet(&var_48)
    std::__ndk1::locale::~locale()
    
    if (x22_1 s>= 1)
        int64_t x23_1 = 0
        
        while (true)
            int64_t* x0_4 = *(arg1 + 0x28 + *(*arg1 - 0x18))
            char* x8_9 = x0_4[3]
            uint32_t x1_2
            
            if (x8_9 == x0_4[4])
                x1_2 = (*(*x0_4 + 0x48))()
                
                if (x1_2 == 0xffffffff)
                    break
            else
                x1_2 = zx.d(*x8_9)
            
            if ((x1_2 & 0x80) == 0 && ((*(*(x0_3 + 0x10) + ((zx.q(x1_2) & 0xff) << 3))).d & 1) != 0)
                break
            
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(
                arg2.b)
            int64_t* x0_7 = *(arg1 + 0x28 + *(*arg1 - 0x18))
            int64_t x8_16 = x0_7[3]
            
            if (x8_16 != x0_7[4])
                x0_7[3] = x8_16 + 1
            else
                (*(*x0_7 + 0x50))()
            
            x23_1 += 1
            
            if (x22_1 == x23_1)
                break
    
    *(arg1 + *(*arg1 - 0x18) + 0x18) = 0
    void* x0_8 = arg1 + *(*arg1 - 0x18)
    *(x0_8 + 0x20)
    std::__ndk1::ios_base::clear(x0_8.d)

return arg1
