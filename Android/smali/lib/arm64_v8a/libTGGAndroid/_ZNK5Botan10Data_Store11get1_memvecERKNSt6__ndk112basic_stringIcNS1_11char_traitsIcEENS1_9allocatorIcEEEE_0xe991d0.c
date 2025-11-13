// 函数: _ZNK5Botan10Data_Store11get1_memvecERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe991d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = Botan::Data_Store::get(arg1)
char* var_38
char* x21 = var_38
char* var_30

if (x21 == var_30)
    int64_t entry_x8
    __builtin_memset(entry_x8, 0, 0x18)
    
    if (x21 == 0)
        return result
else
    if (((var_30 - x21) s>> 3) * -0x5555555555555555 u>= 2)
        void** x0_4 = __cxa_allocate_exception(0x20)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * entry_x1
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Data_Store::get1_memvec: Multiple values for ", entry_x1)
        *x0_4 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_4[1])
        *x0_4 = _vtable_for_Botan::Invalid_State + 0x10
        __cxa_throw(x0_4, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
        noreturn
    
    uint64_t x8_4 = zx.q(*x21)
    int32_t temp0_1 = x8_4.d & 1
    char* x0
    
    if (temp0_1 != 0)
        x0 = *(x21 + 0x10)
    else
        x0 = &x21[1]
    
    uint64_t x1
    
    if (temp0_1 == 0)
        x1 = x8_4 u>> 1
    else
        x1 = *(x21 + 8)
    
    result = Botan::hex_decode(x0, x1, true)
    x21 = var_38
    
    if (x21 == 0)
        return result

char* x8_6 = var_30
char* x0_2

if (x8_6 == x21)
    x0_2 = x21
else
    char* x19_1 = x8_6
    
    do
        x19_1 = &x19_1[-0x18]
        
        if ((zx.d(*x19_1) & 1) != 0)
            operator delete(*(x8_6 - 8))
        
        x8_6 = x19_1
    while (x21 != x19_1)
    
    x0_2 = var_38

char* var_30_1 = x21
return operator delete(x0_2)
