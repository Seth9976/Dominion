// 函数: _ZN5Botan16poly_double_n_leEPhPKhm
// 地址: 0xdee620
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 - 8 u> 0x18)
    if (arg3 == 0x40)
        int64_t x13_3 = *(arg2 + 0x30)
        int64_t x14_3 = *(arg2 + 0x38)
        int64_t x9_9 = *arg2
        int64_t x10_12 = *(arg2 + 8)
        int64_t x11_7 = *(arg2 + 0x20)
        int64_t x12_4 = *(arg2 + 0x28)
        int64_t x15_3 = *(arg2 + 0x10)
        int64_t x16_3 = *(arg2 + 0x18)
        *(arg1 + 0x10) = (x15_3 << 0x40 | x10_12) u>> 0x3f
        *(arg1 + 0x18) = (x16_3 << 0x40 | x15_3) u>> 0x3f
        *(arg1 + 0x20) = (x11_7 << 0x40 | x16_3) u>> 0x3f
        *(arg1 + 0x28) = (x12_4 << 0x40 | x11_7) u>> 0x3f
        *(arg1 + 0x30) = (x13_3 << 0x40 | x12_4) u>> 0x3f
        *arg1 = (0x125 & x14_3 s>> 0x3f) ^ x9_9 << 1
        *(arg1 + 8) = (x10_12 << 0x40 | x9_9) u>> 0x3f
        *(arg1 + 0x38) = (x14_3 << 0x40 | x13_3) u>> 0x3f
        return 
    
    if (arg3 != 0x80)
        goto label_dee7d0
    
    int64_t x5_1 = *(arg2 + 0x70)
    int64_t x6_1 = *(arg2 + 0x78)
    int64_t x9_1 = *arg2
    int64_t x10_2 = *(arg2 + 8)
    int64_t x11_2 = *(arg2 + 0x10)
    int64_t x12_1 = *(arg2 + 0x18)
    int64_t x13_1 = *(arg2 + 0x20)
    int64_t x14_1 = *(arg2 + 0x28)
    int64_t x15_1 = *(arg2 + 0x30)
    int64_t x16_1 = *(arg2 + 0x38)
    int64_t x17_1 = *(arg2 + 0x40)
    int64_t x2 = *(arg2 + 0x48)
    int64_t x3_1 = *(arg2 + 0x60)
    int64_t x4_1 = *(arg2 + 0x68)
    int64_t x7_1 = *(arg2 + 0x50)
    int64_t x1 = *(arg2 + 0x58)
    *(arg1 + 0x10) = (x11_2 << 0x40 | x10_2) u>> 0x3f
    *(arg1 + 0x18) = (x12_1 << 0x40 | x11_2) u>> 0x3f
    *(arg1 + 0x20) = (x13_1 << 0x40 | x12_1) u>> 0x3f
    *(arg1 + 0x28) = (x14_1 << 0x40 | x13_1) u>> 0x3f
    *(arg1 + 0x30) = (x15_1 << 0x40 | x14_1) u>> 0x3f
    *(arg1 + 0x38) = (x16_1 << 0x40 | x15_1) u>> 0x3f
    *(arg1 + 0x40) = (x17_1 << 0x40 | x16_1) u>> 0x3f
    *(arg1 + 0x48) = (x2 << 0x40 | x17_1) u>> 0x3f
    *(arg1 + 0x50) = (x7_1 << 0x40 | x2) u>> 0x3f
    *(arg1 + 0x58) = (x1 << 0x40 | x7_1) u>> 0x3f
    *(arg1 + 0x60) = (x3_1 << 0x40 | x1) u>> 0x3f
    *(arg1 + 0x68) = (x4_1 << 0x40 | x3_1) u>> 0x3f
    *(arg1 + 0x70) = (x5_1 << 0x40 | x4_1) u>> 0x3f
    *arg1 = (0x80043 & x6_1 s>> 0x3f) ^ x9_1 << 1
    *(arg1 + 8) = (x10_2 << 0x40 | x9_1) u>> 0x3f
    *(arg1 + 0x78) = (x6_1 << 0x40 | x5_1) u>> 0x3f
    return 

switch (&jump_table_82876e[0xc + arg3])
    case &jump_table_828782
        int64_t x8_1 = *arg2
        *arg1 = (0x1b & x8_1 s>> 0x3f) ^ x8_1 << 1
        return 
    case "_______-_______4_______=:", "______-_______4_______=:", "_____-_______4_______=:", 
        "____-_______4_______=:", "___-_______4_______=:", "__-_______4_______=:", 
        "_-_______4_______=:", "_______4_______=:", "______4_______=:", "_____4_______=:", 
        "____4_______=:", "___4_______=:", "__4_______=:", "_4_______=:", "_______=:", "______=:", 
        "_____=:", "____=:", "___=:", "__=:", &jump_table_828782[0x17]
    label_dee7d0:
        void** x0 = __cxa_allocate_exception(0x20)
        int64_t x0_1
        int128_t v0
        x0_1, v0 = operator new(0x30)
        v0 = data_71b5a0
        int64_t var_30 = x0_1
        __builtin_strncpy(x0_1, "Unsupported size for poly_double_n_le", 0x26)
        int128_t var_40 = v0
        *x0 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0[1])
        *x0 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn
    case "-_______4_______=:"
        int64_t x9_3 = *arg2
        int64_t x10_4 = *(arg2 + 8)
        *arg1 = (0x87 & x10_4 s>> 0x3f) ^ x9_3 << 1
        *(arg1 + 8) = (x10_4 << 0x40 | x9_3) u>> 0x3f
        return 
    case "4_______=:"
        int64_t x9_5 = *(arg2 + 8)
        int64_t x10_6 = *(arg2 + 0x10)
        int64_t x11_4 = *arg2
        *arg1 = (0x87 & x10_6 s>> 0x3f) ^ x11_4 << 1
        *(arg1 + 8) = (x9_5 << 0x40 | x11_4) u>> 0x3f
        *(arg1 + 0x10) = (x10_6 << 0x40 | x9_5) u>> 0x3f
        return 
    case &jump_table_828782[0x18]
        int64_t x9_7 = *(arg2 + 0x10)
        int64_t x10_9 = *(arg2 + 0x18)
        int64_t x12_3 = *arg2
        int64_t x11_5 = *(arg2 + 8)
        *(arg1 + 8) = (x11_5 << 0x40 | x12_3) u>> 0x3f
        *(arg1 + 0x10) = (x9_7 << 0x40 | x11_5) u>> 0x3f
        *arg1 = (0x425 & x10_9 s>> 0x3f) ^ x12_3 << 1
        *(arg1 + 0x18) = (x10_9 << 0x40 | x9_7) u>> 0x3f
        return 
