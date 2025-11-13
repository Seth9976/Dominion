// 函数: _ZNK5Botan10Data_Store4get1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe98de0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::Data_Store::get(arg1)
void* var_38
char* var_30
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1

if (var_38 == var_30)
    void** x0_3 = __cxa_allocate_exception(0x20, var_38)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Data_Store::get1: No values set for ", entry_x1)
    *x0_3 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_3[1])
    *x0_3 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_3, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

if (((var_30 - var_38) s>> 3) * -0x5555555555555555 u>= 2)
    void** x0_7 = __cxa_allocate_exception(0x20, var_38)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Data_Store::get1: More than one value for ", entry_x1)
    *x0_7 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_7[1])
    *x0_7 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_7, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x8
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    entry_x8)

if (var_38 == 0)
    return result

char* x8_4 = var_30
void* x0_2

if (x8_4 == var_38)
    x0_2 = var_38
else
    char* x20_1 = x8_4
    
    do
        x20_1 = &x20_1[-0x18]
        
        if ((zx.d(*x20_1) & 1) != 0)
            operator delete(*(x8_4 - 8))
        
        x8_4 = x20_1
    while (var_38 != x20_1)
    
    x0_2 = var_38

void* var_30_1 = var_38
return operator delete(x0_2)
