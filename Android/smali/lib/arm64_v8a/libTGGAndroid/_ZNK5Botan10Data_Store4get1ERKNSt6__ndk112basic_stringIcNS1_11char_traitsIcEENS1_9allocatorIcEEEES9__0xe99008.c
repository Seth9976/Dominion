// 函数: _ZNK5Botan10Data_Store4get1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
// 地址: 0xe99008
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::Data_Store::get(arg1)
void* var_38
char* var_30

if (((var_30 - var_38) s>> 3) * -0x5555555555555555 u>= 2)
    void** x0_4 = __cxa_allocate_exception(0x20)
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        "Data_Store::get1: More than one value for ", arg2)
    *x0_4 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_4[1])
    *x0_4 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_4, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

int64_t result
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x8

if (var_38 == var_30)
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        entry_x8)
else
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        entry_x8)

if (var_38 == 0)
    return result

char* x8_1 = var_30
void* x0_3

if (x8_1 == var_38)
    x0_3 = var_38
else
    char* x20_1 = x8_1
    
    do
        x20_1 = &x20_1[-0x18]
        
        if ((zx.d(*x20_1) & 1) != 0)
            operator delete(*(x8_1 - 8))
        
        x8_1 = x20_1
    while (var_38 != x20_1)
    
    x0_3 = var_38

void* var_30_1 = var_38
return operator delete(x0_3)
