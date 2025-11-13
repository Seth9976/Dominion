// 函数: _ZNK5Botan11GeneralName10matches_ipERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe9c948
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
int32_t x0_1 = Botan::string_to_ipv4(entry_x1)
struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
    * const var_80 = &_vtable_for_std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>{for `std::__ndk1::__function::__base<bool (char)>'}
char var_78 = 0x2f
struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
    * const* var_60 = &var_80
Botan::split_on_pred(arg1 + 0x20, &var_80)

if (&var_80 == var_60)
    (*var_60)->vFunc_4()
else if (var_60 != 0)
    (*var_60)->j_operator delete()

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    var_98
char* var_90

if (var_90 - var_98 != 0x30)
    void** x0_11 = __cxa_allocate_exception(0x20)
    int64_t x0_12
    int128_t v0
    x0_12, v0 = operator new(0x20)
    int64_t var_70 = x0_12
    var_80.o = data_71d400
    __builtin_strncpy(x0_12, "failed to parse IPv4 address", 0x1d)
    *x0_11 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_11[1])
    *x0_11 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_11, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

int32_t x0_5 = Botan::string_to_ipv4(var_98)

if (((var_90 - var_98) s>> 3) * -0x5555555555555555 u<= 1)
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
else
    int32_t x0_7 = Botan::string_to_ipv4(var_98 + 0x18)
    
    if (var_98 != 0)
        char* x8_7 = var_90
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_9
        
        if (x8_7 == var_98)
            x0_9 = var_98
        else
            char* x24_1 = x8_7
            
            do
                x24_1 = &x24_1[-0x18]
                
                if ((zx.d(*x24_1) & 1) != 0)
                    operator delete(*(x8_7 - 8))
                
                x8_7 = x24_1
            while (var_98 != x24_1)
            
            x0_9 = var_98
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * var_90_1 = var_98
        operator delete(x0_9)
    
    if (*(x22 + 0x28) == x8)
        return zx.q((x0_7 & x0_1) == x0_5 ? 1 : 0)

__stack_chk_fail()
noreturn
