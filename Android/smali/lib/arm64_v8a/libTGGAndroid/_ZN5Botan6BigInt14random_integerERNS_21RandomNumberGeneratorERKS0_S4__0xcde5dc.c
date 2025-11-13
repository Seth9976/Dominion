// 函数: _ZN5Botan6BigInt14random_integerERNS_21RandomNumberGeneratorERKS0_S4_
// 地址: 0xcde5dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0x20) != 0 && *(arg3 + 0x20) != 0 && Botan::BigInt::cmp(arg3, arg2.b) s> 0)
    Botan::BigInt* entry_x8
    __builtin_memset(entry_x8, 0, 0x18)
    *(entry_x8 + 0x18) = -1
    *(entry_x8 + 0x20) = 1
    bool x0_3 = Botan::BigInt::bits()
    int64_t result
    
    while (true)
        Botan::BigInt::randomize(entry_x8, arg1, x0_3)
        
        if ((Botan::BigInt::is_less_than(entry_x8) & 1) == 0)
            result = Botan::BigInt::cmp(entry_x8, arg3.b)
            
            if ((result.d & 0x80000000) != 0)
                break
    
    return result

void** x0_8 = __cxa_allocate_exception(0x20)
int64_t x0_9
int128_t v0
x0_9, v0 = operator new(0x30)
v0 = data_71b7f0
int64_t var_40 = x0_9
__builtin_strncpy(x0_9, "BigInt::random_integer invalid range", 0x25)
int128_t var_50 = v0
*x0_8 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_8[1])
*x0_8 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_8, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
