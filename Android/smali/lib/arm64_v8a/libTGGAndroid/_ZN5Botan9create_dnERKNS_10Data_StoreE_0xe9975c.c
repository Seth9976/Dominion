// 函数: _ZN5Botan9create_dnERKNS_10Data_StoreE
// 地址: 0xe9975c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
struct std::__ndk1::__function::__base<bool (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)>::std::__ndk1::__function::__func<Botan::create_dn(Botan::Data_Store const&)::$_208, std::__ndk1::allocator<Botan::create_dn(Botan::Data_Store const&)::$_208>, bool (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)>::VTable
    * const var_90 = &_vtable_for_std::__ndk1::__function::__func<Botan::create_dn(Botan::Data_Store const&)::$_208, std::__ndk1::allocator<Botan::create_dn(Botan::Data_Store const&)::$_208>, bool (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)>{for `std::__ndk1::__function::__base<bool (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)>'}
struct std::__ndk1::__function::__base<bool (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)>::std::__ndk1::__function::__func<Botan::create_dn(Botan::Data_Store const&)::$_208, std::__ndk1::allocator<Botan::create_dn(Botan::Data_Store const&)::$_208>, bool (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)>::VTable
    * const* var_70 = &var_90
Botan::Data_Store::search_for(arg1)

if (&var_90 == var_70)
    (*var_70)->vFunc_4()
else if (var_70 != 0)
    (*var_70)->j_operator delete()

int64_t* i_1
int64_t* i = i_1
void** entry_x8
*entry_x8 = _vtable_for_Botan::X509_DN + 0x10
*(entry_x8 + 8) = zx.o(0)
__builtin_memset(&entry_x8[3], 0, 0x20)
int64_t var_c0

while (i != &var_c0)
    Botan::OID::from_string(&i[4])
    void* __offset(vtable_for_Botan::OID, 0x10) var_b0
    Botan::X509_DN::add_attribute(entry_x8, &var_b0)
    var_b0 = _vtable_for_Botan::OID + 0x10
    void* var_a8
    
    if (var_a8 != 0)
        void* var_a0_1 = var_a8
        operator delete(var_a8)
    
    int64_t* j_1 = i[1]
    
    if (j_1 == 0)
        void* x8_6 = &i[2]
        int64_t* i_2 = *x8_6
        
        if (*i_2 == i)
            i = i_2
        else
            void* j
            
            do
                j = *x8_6
                x8_6 = j + 0x10
                i = *x8_6
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
