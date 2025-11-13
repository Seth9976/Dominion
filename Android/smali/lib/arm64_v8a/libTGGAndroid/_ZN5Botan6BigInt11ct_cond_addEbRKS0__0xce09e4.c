// 函数: _ZN5Botan6BigInt11ct_cond_addEbRKS0_
// 地址: 0xce09e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x2

if (*(arg1 + 0x20) == 0 || entry_x2[4].d == 0)
    void** x0_3 = __cxa_allocate_exception(0x20)
    int64_t x0_4
    int128_t v2_1
    x0_4, v2_1 = operator new(0x40)
    (*"h values to be positive")[0].o
    int64_t var_30 = x0_4
    v2_1 = data_71c540
    __builtin_strncpy(x0_4, "BigInt::ct_cond_add requires both values to be positive", 0x38)
    int128_t var_40 = v2_1
    *x0_3 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_3[1])
    *x0_3 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_3, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t x8_2 = entry_x2[3]
int64_t* x21 = arg1

if (x8_2 == -1)
    int64_t x9_1 = *entry_x2
    int64_t x11_1 = entry_x2[1]
    int64_t x10_1 = x11_1 - x9_1
    
    if (x11_1 == x9_1)
        x8_2 = 0
    else
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x9_1 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        x8_2 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_2 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x9_1 - 4 + (i_2 << 2))
            i = i_2
            i_2 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x8_2 -= x11_3
        while (i != 1)
    
    entry_x2[3] = x8_2

int64_t x9_3 = *x21
int64_t x8_4 = (x21[1] - x9_3) s>> 2

if (x8_2 + 1 u> x8_4)
    if (x8_2 + 1 u<= (x21[2] - x9_3) s>> 2 || ((x8_2 + 1) & 0xfffffffffffffff8) + 8 u> x8_4)
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(x21)
    else if (((x8_2 + 1) & 0xfffffffffffffff8) + 8 u< x8_4)
        x21[1] = x9_3 + ((((x8_2 + 1) & 0xfffffffffffffff8) + 8) << 2)

x21[3] = -1
int64_t x4 = entry_x2[3]
uint32_t* x1_2 = *x21
int64_t x8_5 = x21[1]
uint32_t* x3 = *entry_x2

if (x4 == -1)
    int64_t x9_4 = entry_x2[1]
    void* x10_7 = x9_4 - x3
    
    if (x9_4 == x3)
        x4 = 0
    else
        void* x12_5
        
        x12_5 = x10_7 s>= 0 ? x10_7 : -ffffffffffffffff
        
        void* x11_7 = x3 - x9_4
        void* x12_6
        
        x12_6 = x12_5 s< 1 ? x12_5 : 1
        
        x4 = x10_7 s>> 2
        void* x10_8
        
        x10_8 = x11_7 s> x10_7 ? x11_7 : x10_7
        
        int64_t i_3 = x12_6 * (x10_8 u>> 2)
        uint64_t x11_8 = 1
        int64_t i_1
        
        do
            int32_t x12_7 = *(x3 - 4 + (i_3 << 2))
            i_1 = i_3
            i_3 -= 1
            x11_8 = zx.q(x11_8.d) & zx.q(((x12_7 - 1) & not.d(x12_7)) s>> 0x1f)
            x4 -= x11_8
        while (i_1 != 1)
    
    entry_x2[3] = x4

return Botan::bigint_cnd_add(arg2.d & 1, x1_2, ((x8_5 - x1_2) u>> 2).d, x3, x4) __tailcall
