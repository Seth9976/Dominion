// 函数: _ZN5Botan6BigInt12reduce_belowERKS0_RNSt6__ndk16vectorIjNS_16secure_allocatorIjEEEE
// 地址: 0xcd9b50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0x20) == 0 || *(arg1 + 0x20) == 0)
    void** x0_6 = __cxa_allocate_exception(0x20)
    int64_t x0_7
    int128_t v0
    x0_7, v0 = operator new(0x40)
    v0 = data_71d0c0
    int64_t var_50 = x0_7
    __builtin_strncpy(x0_7, "BigInt::reduce_below both values must be positive", 0x32)
    int128_t var_60 = v0
    *x0_6 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_6[1])
    *x0_6 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t x22 = *(arg2 + 0x18)

if (x22 == -1)
    int64_t x8_2 = *arg2
    int64_t x10_1 = *(arg2 + 8)
    int64_t x9_1 = x10_1 - x8_2
    
    if (x10_1 == x8_2)
        x22 = 0
    else
        int64_t x11_1
        
        x11_1 = x9_1 s>= 0 ? x9_1 : -1
        
        int64_t x10_2 = x8_2 - x10_1
        int64_t x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        x22 = x9_1 s>> 2
        int64_t x9_2
        
        x9_2 = x10_2 s> x9_1 ? x10_2 : x9_1
        
        int64_t i_2 = x11_2 * (x9_2 u>> 2)
        uint64_t x10_3 = 1
        int64_t i
        
        do
            int32_t x11_3 = *(x8_2 - 4 + (i_2 << 2))
            i = i_2
            i_2 -= 1
            x10_3 = zx.q(x10_3.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
            x22 -= x10_3
        while (i != 1)
    
    *(arg2 + 0x18) = x22

int64_t x8_4 = *arg1
int64_t x9_6 = (*(arg1 + 8) - x8_4) s>> 2

if (x22 + 1 u> x9_6)
    if (x22 + 1 u<= (*(arg1 + 0x10) - x8_4) s>> 2 || ((x22 + 1) & 0xfffffffffffffff8) + 8 u> x9_6)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg1)
    else if (((x22 + 1) & 0xfffffffffffffff8) + 8 u< x9_6)
        *(arg1 + 8) = x8_4 + ((((x22 + 1) & 0xfffffffffffffff8) + 8) << 2)

uint32_t** entry_x2
uint32_t* x0_2 = *entry_x2
size_t x2 = entry_x2[1] - x0_2

if (x22 + 1 u> x2 s>> 2)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x2)
    x0_2 = *entry_x2
    x2 = entry_x2[1] - x0_2

if (x2 != 0)
    memset(x0_2, 0, x2)
    x0_2 = *entry_x2

int64_t result = 0

if (Botan::bigint_sub3(x0_2, *arg1, x22 + 1, *arg2, x22) == 0)
    int32_t i_1
    
    do
        uint32_t* x9_7 = *arg1
        *arg1 = *entry_x2
        *entry_x2 = x9_7
        int64_t x9_8 = *(arg1 + 8)
        result += 1
        *(arg1 + 8) = entry_x2[1]
        entry_x2[1] = x9_8
        int64_t x9_9 = *(arg1 + 0x10)
        *(arg1 + 0x10) = entry_x2[2]
        entry_x2[2] = x9_9
        *(arg1 + 0x18) = -1
        i_1 = Botan::bigint_sub3(*entry_x2, *arg1, x22 + 1, *arg2, x22)
    while (i_1 == 0)

return result
