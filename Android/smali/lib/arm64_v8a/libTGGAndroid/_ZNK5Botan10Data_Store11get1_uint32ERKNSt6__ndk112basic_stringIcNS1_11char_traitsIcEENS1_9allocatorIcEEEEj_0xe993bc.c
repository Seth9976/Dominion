// 函数: _ZNK5Botan10Data_Store11get1_uint32ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEj
// 地址: 0xe993bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x2
int32_t x19 = entry_x2
Botan::Data_Store::get(arg1)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    var_38
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x20 = var_38
char* var_30

if (x20 != var_30)
    if (((var_30 - x20) s>> 3) * -0x5555555555555555 u>= 2)
        void** x0_5 = __cxa_allocate_exception(0x20)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Data_Store::get1_uint32: Multiple values for ", arg2)
        *x0_5 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_5[1])
        *x0_5 = _vtable_for_Botan::Invalid_State + 0x10
        __cxa_throw(x0_5, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
        noreturn
    
    int32_t x0_1 = Botan::to_u32bit(x20)
    x20 = var_38
    x19 = x0_1

if (x20 != 0)
    char* x8_4 = var_30
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_3
    
    if (x8_4 == x20)
        x0_3 = x20
    else
        char* x21_1 = x8_4
        
        do
            x21_1 = &x21_1[-0x18]
            
            if ((zx.d(*x21_1) & 1) != 0)
                operator delete(*(x8_4 - 8))
            
            x8_4 = x21_1
        while (x20 != x21_1)
        
        x0_3 = var_38
    
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        var_30_1 = x20
    operator delete(x0_3)

return zx.q(x19)
