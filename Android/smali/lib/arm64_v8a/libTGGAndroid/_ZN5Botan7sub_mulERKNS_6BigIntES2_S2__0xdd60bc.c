// 函数: _ZN5Botan7sub_mulERKNS_6BigIntES2_S2_
// 地址: 0xdd60bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x20) == 0 || *(arg2 + 0x20) == 0)
    void** x0_4 = __cxa_allocate_exception(0x20)
    int64_t x0_5
    int128_t v0
    x0_5, v0 = operator new(0x30)
    (*"nts must be >= 0")[0].o
    int64_t var_40 = x0_5
    v0 = data_71cbb0
    __builtin_strncpy(x0_5, "sub_mul: First two arguments must be >= 0", 0x2a)
    int128_t var_50 = v0
    *x0_4 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_4[1])
    *x0_4 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_4, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* entry_x8
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(entry_x8)
*(entry_x8 + 0x18) = *(arg1 + 0x18)
*(entry_x8 + 0x20) = *(arg1 + 0x20)
int64_t x2 = *(arg2 + 0x18)
uint64_t x1_1 = *arg2

if (x2 == -1)
    int64_t x8_3 = *(arg2 + 8)
    int64_t x9_1 = x8_3 - x1_1
    
    if (x8_3 == x1_1)
        x2 = 0
    else
        int64_t x11_1
        
        x11_1 = x9_1 s>= 0 ? x9_1 : -1
        
        int64_t x10_1 = x1_1 - x8_3
        int64_t x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        x2 = x9_1 s>> 2
        int64_t x9_2
        
        x9_2 = x10_1 s> x9_1 ? x10_1 : x9_1
        
        int64_t i_1 = x11_2 * (x9_2 u>> 2)
        uint64_t x10_2 = 1
        int64_t i
        
        do
            int32_t x11_3 = *(x1_1 - 4 + (i_1 << 2))
            i = i_1
            i_1 -= 1
            x10_2 = zx.q(x10_2.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
            x2 -= x10_2
        while (i != 1)
    
    *(arg2 + 0x18) = x2

*(arg2 + 0x20)
Botan::BigInt::add(entry_x8, x1_1, x2)
return Botan::BigInt::operator*=(entry_x8)
