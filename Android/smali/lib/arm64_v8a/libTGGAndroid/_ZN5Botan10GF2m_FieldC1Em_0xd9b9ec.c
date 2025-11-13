// 函数: _ZN5Botan10GF2m_FieldC1Em
// 地址: 0xd9b9ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x1
int16_t x24 = (not.d(0xffffffff << entry_x1.d)).w
*arg1 = entry_x1
*(arg1 + 8) = x24

if ((zx.d(data_23eca38) & 1) == 0 && __cxa_guard_acquire(&data_23eca38) != 0)
    __builtin_memset(&data_23ed0e8, 0, 0x198)
    __cxa_atexit(func_d599bc, nullptr, &data_1122730)
    __cxa_guard_release(&data_23eca38)

if (entry_x1 - 2 u>= 0xf)
    void** x0_7 = __cxa_allocate_exception(0x20)
    std::__ndk1::to_string(entry_x1)
    void var_98
    int128_t* x0_10
    int128_t v0
    x0_10, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_98, nullptr)
    int64_t var_70 = x0_10[1].q
    int128_t var_80 = *x0_10
    __builtin_memset(x0_10, 0, 0x18)
    *x0_7 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_7[1])
    *x0_7 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_7, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

if (*(entry_x1 * 0x18 + &data_23ed0e8) == *(entry_x1 * 0x18 + &data_23ed0e8:8))
    void* x0_1 = sub_d9bce4(entry_x1)
    int64_t x23_1 = 1 << entry_x1 << 1
    int16_t* x0_3 = operator new(x23_1)
    int16_t* x28_1 = &x0_3[1 << entry_x1]
    memset(x0_3, 0, x23_1)
    *x0_3 = x24
    
    if (x23_1 != 0)
        void* x9_1 = x28_1 - x0_3
        void* x11_1
        
        x11_1 = x9_1 s>= 0 ? x9_1 : -ffffffffffffffff
        
        void* x10_1 = x0_3 - x28_1
        void* x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        void* x9_2
        
        x9_2 = x10_1 s> x9_1 ? x10_1 : x9_1
        
        int64_t i = 0
        
        do
            x0_3[zx.q(*(*x0_1 + (i << 1)))] = (i.d).w
            i += 1
        while (i u< x11_2 * (x9_2 u>> 1))
    
    int16_t* x0_4 = *(entry_x1 * 0x18 + &data_23ed0e8)
    
    if (x0_4 != 0)
        *(entry_x1 * 0x18 + &data_23ed0e8:8) = x0_4
        operator delete(x0_4)
        __builtin_memset(entry_x1 * 0x18 + &data_23ed0e8, 0, 0x18)
    
    *(entry_x1 * 0x18 + &data_23ed0e8) = x0_3
    *(entry_x1 * 0x18 + &data_23ed0e8:8) = x28_1
    *(entry_x1 * 0x18 + &data_23ed0f8) = x28_1

uint64_t x0_5 = *arg1
*(arg1 + 0x10) = entry_x1 * 0x18 + &data_23ed0e8
void* result = sub_d9bce4(x0_5)
*(arg1 + 0x18) = result
return result
