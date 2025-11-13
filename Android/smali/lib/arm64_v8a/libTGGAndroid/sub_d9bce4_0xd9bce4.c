// 函数: sub_d9bce4
// 地址: 0xd9bce4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(data_23eca40) & 1) == 0 && __cxa_guard_acquire(&data_23eca40) != 0)
    __builtin_memset(&data_23ed280, 0, 0x198)
    __cxa_atexit(func_d59b64, nullptr, &data_1122730)
    __cxa_guard_release(&data_23eca40)

if (arg1 - 2 u>= 0xf)
    void** x0_5 = __cxa_allocate_exception(0x20)
    std::__ndk1::to_string(arg1)
    void var_88
    int128_t* x0_8
    int128_t v0
    x0_8, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_88, nullptr)
    int64_t var_60 = x0_8[1].q
    int128_t var_70 = *x0_8
    __builtin_memset(x0_8, 0, 0x18)
    *x0_5 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_5[1])
    *x0_5 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_5, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

void* x21 = *(arg1 * 0x18 + &data_23ed280)

if (x21 == *(arg1 * 0x18 + &data_23ed280:8))
    int16_t* x0_1 = operator new((1 << arg1 << 1) + 2)
    void* x25_1 = x0_1 + (1 << arg1 << 1) + 2
    memset(x0_1, 0, (1 << arg1 << 1) + 2)
    *x0_1 = 1
    
    if (((1 << arg1 << 1) + 2) s>> 1 u>= 2)
        int16_t x9_1 = *(&data_851940 + (arg1 << 1))
        void* x12_1 = x25_1 - x0_1
        int16_t x10_3 = (x9_1 * (1 u>> (arg1.d - 1)).w) ^ 2
        x0_1[1] = x10_3
        
        if (x12_1 s>> 1 u>= 3)
            void* x15_1
            
            x15_1 = x12_1 s>= 0 ? x12_1 : -ffffffffffffffff
            
            void* x13_1 = x0_1 - x25_1
            void* x15_2
            
            x15_2 = x15_1 s< 1 ? x15_1 : 1
            
            void* x12_2
            
            x12_2 = x13_1 s> x12_1 ? x13_1 : x12_1
            
            int64_t x12_4 = x15_2 * (x12_2 u>> 1)
            int64_t x12_5
            
            x12_5 = x12_4 u> 3 ? x12_4 : 3
            
            void* x11_2 = &x0_1[2]
            int64_t i_1 = 2 - x12_5
            int64_t i
            
            do
                uint32_t x10_4 = zx.d(x10_3)
                x10_3 = ((x10_4 u>> (arg1.d - 1)).w * x9_1) ^ (x10_4 << 1).w
                i = i_1
                i_1 += 1
                *x11_2 = x10_3
                x11_2 += 2
            while (i u< -1)
    
    if (x21 != 0)
        *(arg1 * 0x18 + &data_23ed280:8) = x21
        operator delete(x21)
        __builtin_memset(arg1 * 0x18 + &data_23ed280, 0, 0x18)
    
    *(arg1 * 0x18 + &data_23ed280) = x0_1
    *(arg1 * 0x18 + &data_23ed280:8) = x25_1
    *(arg1 * 0x18 + &data_23ed290) = x25_1

return arg1 * 0x18 + &data_23ed280
