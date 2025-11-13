// 函数: _ZNK5Botan6BigInt13get_substringEmm
// 地址: 0xcdff08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2

if (entry_x2 - 1 u>= 0x20)
    void** x0_1 = __cxa_allocate_exception(0x20)
    int64_t x0_2
    int128_t v0
    x0_2, v0 = operator new(0x30)
    (*"substring length")[0].o
    int64_t var_30 = x0_2
    v0 = data_71a900
    __builtin_strncpy(x0_2, "BigInt::get_substring invalid substring length", 0x2f)
    int128_t var_40 = v0
    *x0_1 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_1[1])
    *x0_1 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int64_t x9 = *arg1
uint64_t x10 = arg2 u>> 5
int64_t x12 = arg2 & 0x1f
int64_t x11 = (*(arg1 + 8) - x9) s>> 2
uint32_t x8_5
int32_t x8_3

if (x11 u<= x10)
    x8_3 = 0
    
    if (x12 == 0 || x10 == (entry_x2 + arg2) u>> 5)
        x8_5 = x8_3 u>> x12.d
    else
    label_cdff6c:
        int32_t x9_1
        
        if (x11 u<= x10 + 1)
            x9_1 = 0
        else
            x9_1 = *(x9 + ((x10 + 1) << 2))
        
        x8_5 = x9_1 << 1 << not.d(arg2.d) | x8_3 u>> arg2.d
else
    x8_3 = *(x9 + (x10 << 2))
    
    if (x12 != 0 && x10 != (entry_x2 + arg2) u>> 5)
        goto label_cdff6c
    
    x8_5 = x8_3 u>> x12.d
return zx.q(x8_5) & zx.q(0xffffffff u>> neg.d(entry_x2.d))
