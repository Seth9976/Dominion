// 函数: _ZNSt6__ndk124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
// 地址: 0xf2395c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_58
std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::sentry::sentry(&var_58)

if (zx.d(var_58) != 0)
    void* x22_1 = arg1 + *(*arg1 - 0x18)
    int32_t x5_1 = *(x22_1 + 0x90)
    int64_t* x23_1 = *(x22_1 + 0x28)
    int32_t x25_1 = *(x22_1 + 8)
    
    if (x5_1 == 0xffffffff)
        std::__ndk1::ios_base::getloc()
        void var_48
        int64_t* x0_3 = std::__ndk1::locale::use_facet(&var_48)
        char x0_4 = (*(*x0_3 + 0x38))(x0_3, 0x20)
        std::__ndk1::locale::~locale()
        x5_1 = zx.d(x0_4)
        *(x22_1 + 0x90) = x5_1
    
    char* x3_1 = &arg2[arg3]
    char const* x2
    
    if ((x25_1 & 0xb0) == 0x20)
        x2 = x3_1
    else
        x2 = arg2
    
    if (sub_f23ab4(x23_1, arg2, x2, x3_1, x22_1, x5_1) == 0)
        void* x0_7 = arg1 + *(*arg1 - 0x18)
        *(x0_7 + 0x20)
        std::__ndk1::ios_base::clear(x0_7.d)

std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::sentry::~sentry()
return arg1
