// 函数: _ZN5Botan6BigInt7mod_subERKS0_S2_RNSt6__ndk16vectorIjNS_16secure_allocatorIjEEEE
// 地址: 0xcd9258
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x20) == 0 || *(arg2 + 0x20) == 0 || *(arg3 + 0x20) == 0)
    void** x0_8 = __cxa_allocate_exception(0x20)
    int64_t x0_9
    int128_t v0
    x0_9, v0 = operator new(0x40)
    v0 = data_71ac10
    int64_t var_50 = x0_9
    __builtin_strncpy(x0_9, "BigInt::mod_sub expects all arguments are positive", 0x33)
    int128_t var_60 = v0
    *x0_8 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_8[1])
    *x0_8 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_8, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t i_4 = *(arg3 + 0x18)

if (i_4 == -1)
    int64_t x8_3 = *arg3
    int64_t x10_1 = *(arg3 + 8)
    int64_t x9_1 = x10_1 - x8_3
    
    if (x10_1 == x8_3)
        i_4 = 0
    else
        int64_t x11_1
        
        x11_1 = x9_1 s>= 0 ? x9_1 : -1
        
        int64_t x10_2 = x8_3 - x10_1
        int64_t x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        i_4 = x9_1 s>> 2
        int64_t x9_2
        
        x9_2 = x10_2 s> x9_1 ? x10_2 : x9_1
        
        int64_t i_2 = x11_2 * (x9_2 u>> 2)
        uint64_t x10_3 = 1
        int64_t i
        
        do
            int32_t x11_3 = *(x8_3 - 4 + (i_2 << 2))
            i = i_2
            i_2 -= 1
            x10_3 = zx.q(x10_3.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
            i_4 -= x10_3
        while (i != 1)
    
    *(arg3 + 0x18) = i_4

int64_t x8_5 = *arg1
int64_t x9_6 = (*(arg1 + 8) - x8_5) s>> 2

if (i_4 u> x9_6)
    if (i_4 u<= (*(arg1 + 0x10) - x8_5) s>> 2 || (i_4 & 0xfffffffffffffff8) + 8 u> x9_6)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg1)
    else if ((i_4 & 0xfffffffffffffff8) + 8 u< x9_6)
        *(arg1 + 8) = x8_5 + (((i_4 & 0xfffffffffffffff8) + 8) << 2)

int64_t x8_6 = *arg2
int64_t x9_9 = (*(arg2 + 8) - x8_6) s>> 2

if (i_4 u> x9_9)
    if (i_4 u<= (*(arg2 + 0x10) - x8_6) s>> 2 || (i_4 & 0xfffffffffffffff8) + 8 u> x9_9)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg2)
    else if ((i_4 & 0xfffffffffffffff8) + 8 u< x9_9)
        *(arg2 + 8) = x8_6 + (((i_4 & 0xfffffffffffffff8) + 8) << 2)

uint32_t** entry_x3

if (i_4 u> (entry_x3[1] - *entry_x3) s>> 2)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x3)

if (i_4 == 6)
    *(arg1 + 0x18) = -1
    Botan::bigint_mod_sub_n<6ul>(*arg1, *arg2, *arg3, *entry_x3)
else if (i_4 != 4)
    *(arg1 + 0x18) = -1
    uint32_t* x24_1 = *arg1
    uint32_t* x23_2 = *arg2
    uint32_t* x21_1 = *entry_x3
    uint64_t x22_2
    
    if (i_4 == 0)
        x22_2 = 0
    else
        int32_t x8_10 = 0
        uint32_t* x9_11 = x24_1
        uint32_t* x10_12 = x23_2
        int64_t i_3 = i_4
        int64_t i_1
        
        do
            uint32_t x12_2 = *x9_11
            x9_11 = &x9_11[1]
            uint32_t x13_1 = *x10_12
            x10_12 = &x10_12[1]
            i_1 = i_3
            i_3 -= 1
            uint32_t x14_1 = x13_1 ^ x12_2
            int32_t x14_2 = ((x14_1 - 1) & not.d(x14_1)) s>> 0x1f
            x8_10 = (x8_10 & x14_2)
                | (not.d(x14_2) & ((((x12_2 - x13_1) ^ x12_2) | x14_1) ^ x12_2) s>> 0x1f)
        while (i_1 != 1)
        x22_2 = zx.q(x8_10)
    
    Botan::bigint_sub3(x21_1, *arg3, i_4, x23_2, i_4)
    Botan::bigint_cnd_addsub(x22_2, x24_1, x21_1, x23_2, i_4)
else
    *(arg1 + 0x18) = -1
    Botan::bigint_mod_sub_n<4ul>(*arg1, *arg2, *arg3, *entry_x3)

return arg1
