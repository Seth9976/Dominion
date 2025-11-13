// 函数: _ZNK5Botan3TLS11Text_Policy8get_listERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS2_6vectorIS8_NS6_IS8_EEEE
// 地址: 0xe827f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
int16_t var_70 = 0
char var_88

if (arg1 + 0x10 == std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::find<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
        arg1 + 8))
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_88)
else
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_88)

void* var_60

if ((zx.d(var_70.b) & 1) != 0)
    operator delete(var_60)
uint64_t x8_3 = zx.q(var_88)
uint64_t x8_4
uint64_t var_80

if ((x8_3.d & 1) == 0)
    x8_4 = x8_3 u>> 1
else
    x8_4 = var_80
int16_t* result
void* var_78

if (x8_4 == 0)
    std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >
        * entry_x8
    result = std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::vector(
        entry_x8)
label_e828d8:
    
    if ((zx.d(var_88) & 1) != 0)
        result = operator delete(var_78)
else
    var_70.q = &_vtable_for_std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>{for `std::__ndk1::__function::__base<bool (char)>'}
    char var_68_1 = 0x20
    int16_t* result_1 = &var_70
    Botan::split_on_pred(&var_88, &var_70)
    result = result_1
    
    if (&var_70 == result)
        result = (*(*result + 0x20))()
        
        if ((zx.d(var_88) & 1) != 0)
            result = operator delete(var_78)
    else
        if (result == 0)
            goto label_e828d8
        
        result = (*(*result + 0x28))()
        
        if ((zx.d(var_88) & 1) != 0)
            result = operator delete(var_78)

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
