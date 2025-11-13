// 函数: _ZN5Botan15create_alt_nameERKNS_10Data_StoreE
// 地址: 0xe99a98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
struct std::__ndk1::__function::__base<bool (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)>::std::__ndk1::__function::__func<Botan::create_alt_name(Botan::Data_Store const&)::$_209, std::__ndk1::allocator<Botan::create_alt_name(Botan::Data_Store const&)::$_209>, bool (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)>::VTable
    * const var_70 = &_vtable_for_std::__ndk1::__function::__func<Botan::create_alt_name(Botan::Data_Store const&)::$_209, std::__ndk1::allocator<Botan::create_alt_name(Botan::Data_Store const&)::$_209>, bool (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)>{for `std::__ndk1::__function::__base<bool (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)>'}
struct std::__ndk1::__function::__base<bool (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)>::std::__ndk1::__function::__func<Botan::create_alt_name(Botan::Data_Store const&)::$_209, std::__ndk1::allocator<Botan::create_alt_name(Botan::Data_Store const&)::$_209>, bool (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)>::VTable
    * const* var_50 = &var_70
Botan::Data_Store::search_for(arg1)

if (&var_70 == var_50)
    (*var_50)->vFunc_4()
else if (var_50 != 0)
    (*var_50)->j_operator delete()

int16_t var_a0 = 0
int16_t var_b8 = 0
int16_t var_d0 = 0
int16_t var_e8 = 0
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x8
Botan::AlternativeName::AlternativeName(entry_x8, &var_a0, &var_b8, &var_d0)

if ((zx.d(var_d0.b) & 1) != 0)
    void* var_c0
    operator delete(var_c0)
    
    if ((zx.d(var_b8.b) & 1) == 0)
        goto label_e99b44
    
    goto label_e99c18

void* var_90

if ((zx.d(var_b8.b) & 1) != 0)
label_e99c18:
    void* var_a8
    operator delete(var_a8)
    
    if ((zx.d(var_a0.b) & 1) != 0)
        operator delete(var_90)
else
label_e99b44:
    
    if ((zx.d(var_a0.b) & 1) != 0)
        operator delete(var_90)
int64_t* i_1
int64_t* i = i_1
int64_t var_80

while (i != &var_80)
    Botan::AlternativeName::add_attribute(entry_x8, &i[4])
    int64_t* j_1 = i[1]
    
    if (j_1 == 0)
        void* x8_8 = &i[2]
        int64_t* i_2 = *x8_8
        
        if (*i_2 == i)
            i = i_2
        else
            void* j
            
            do
                j = *x8_8
                x8_8 = j + 0x10
                i = *x8_8
            while (*i != j)
    else
        do
            i = j_1
            j_1 = *j_1
        while (j_1 != 0)

int64_t result = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
    &i_1)

if (*(x20 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
