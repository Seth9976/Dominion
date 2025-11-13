// 函数: _ZN5BotanrmERKNS_6BigIntES2_
// 地址: 0xcdb9a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg2 + 0x18)

if (x9 == -1)
    int64_t x8 = *arg2
    int64_t x11_1 = *(arg2 + 8)
    int64_t x10_1 = x11_1 - x8
    
    if (x11_1 == x8)
        x9 = 0
    else
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x8 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        x9 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_2 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x8 - 4 + (i_2 << 2))
            i = i_2
            i_2 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x9 -= x11_3
        while (i != 1)
    
    *(arg2 + 0x18) = x9

if (x9 == 0)
    void* x0_8 = __cxa_allocate_exception(0x20)
    Botan::BigInt::DivideByZero::DivideByZero()
    __cxa_throw(x0_8, _typeinfo_for_Botan::BigInt::DivideByZero, Botan::Exception::~Exception)
    noreturn

int32_t x8_2 = *(arg2 + 0x20)
int128_t var_50

if (x8_2 == 0)
    void** x0_10 = __cxa_allocate_exception(0x20)
    int64_t x0_11
    int128_t v0_3
    x0_11, v0_3 = operator new(0x30)
    v0_3 = data_71b5b0
    int64_t var_40_1 = x0_11
    __builtin_strncpy(x0_11, "BigInt::operator%: modulus must be > 0", 0x27)
    var_50 = v0_3
    *x0_10 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_10[1])
    *x0_10 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_10, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

void* result
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >* entry_x8

if (x8_2 == 1 && *(arg1 + 0x20) == 1)
    if ((Botan::BigInt::is_less_than(arg1) & 1) != 0)
        result = std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(entry_x8)
        *(entry_x8 + 0x18) = *(arg1 + 0x18)
        *(entry_x8 + 0x20) = *(arg1 + 0x20)
        return result
    
    x9 = *(arg2 + 0x18)

if (x9 == -1)
    int64_t x8_7 = *arg2
    int64_t x11_4 = *(arg2 + 8)
    int64_t x10_4 = x11_4 - x8_7
    
    if (x11_4 == x8_7)
        *(arg2 + 0x18) = 0
    label_cdbb14:
        __builtin_memset(&var_50, 0, 0x18)
        int64_t var_80
        __builtin_memset(&var_80, 0, 0x18)
        int64_t var_38_1 = -1
        int32_t var_30_1 = 1
        int64_t var_68_1 = -1
        int32_t var_60_1 = 1
        Botan::vartime_divide(arg1, arg2, &var_50, &var_80)
        result = var_50.q
        *entry_x8 = var_80.o
        int64_t var_70
        *(entry_x8 + 0x10) = var_70
        *(entry_x8 + 0x18) = var_68_1
        *(entry_x8 + 0x20) = var_60_1
        
        if (result == 0)
            return result
        
        var_50:8.q = result
        int64_t var_40
        return Botan::deallocate_memory(result, (var_40 - result) s>> 2, 4)
    
    int64_t x12_5
    
    x12_5 = x10_4 s>= 0 ? x10_4 : -1
    
    int64_t x11_5 = x8_7 - x11_4
    int64_t x12_6
    
    x12_6 = x12_5 s< 1 ? x12_5 : 1
    
    int64_t x9_2 = x10_4 s>> 2
    int64_t x10_5
    
    x10_5 = x11_5 s> x10_4 ? x11_5 : x10_4
    
    int64_t i_3 = x12_6 * (x10_5 u>> 2)
    uint64_t x11_6 = 1
    int64_t i_1
    
    do
        int32_t x12_7 = *(x8_7 - 4 + (i_3 << 2))
        i_1 = i_3
        i_3 -= 1
        x11_6 = zx.q(x11_6.d) & zx.q(((x12_7 - 1) & not.d(x12_7)) s>> 0x1f)
        x9_2 -= x11_6
    while (i_1 != 1)
    *(arg2 + 0x18) = x9_2
    
    if (x9_2 != 1)
        goto label_cdbb14
else if (x9 != 1)
    goto label_cdbb14

uint32_t* x8_6 = *arg2
uint32_t x1_2

if (*(arg2 + 8) == x8_6)
    x1_2 = 0
else
    x1_2 = *x8_6

Botan::operator%(arg1, x1_2)
return Botan::BigInt::BigInt(entry_x8) __tailcall
