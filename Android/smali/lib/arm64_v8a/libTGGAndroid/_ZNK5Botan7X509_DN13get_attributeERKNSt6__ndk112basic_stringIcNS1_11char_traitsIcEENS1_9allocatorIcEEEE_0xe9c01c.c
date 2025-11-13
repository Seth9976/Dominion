// 函数: _ZNK5Botan7X509_DN13get_attributeERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xe9c01c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
Botan::X509_DN::deref_info_field(entry_x1)
char var_68
Botan::OID::from_string(&var_68)
void* var_58

if ((zx.d(var_68) & 1) != 0)
    operator delete(var_58)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >** 
    entry_x8
__builtin_memset(entry_x8, 0, 0x18)
void* x21 = *(arg1 + 8)
int64_t x22 = *(arg1 + 0x10)
void* result

if (x21 != x22)
    while (true)
        int32_t* x9_1 = *(x21 + 8)
        int64_t x8_1 = *(x21 + 0x10)
        void* result_2 = result
        int64_t var_40
        
        if (x8_1 - x9_1 == var_40 - result_2)
            if (x9_1 != x8_1)
                do
                    if (*x9_1 != *result_2)
                        goto label_e9c07c
                    
                    x9_1 = &x9_1[1]
                    result_2 += 4
                while (x8_1 != x9_1)
            
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                * x20_1 = entry_x8[1]
            
            if (x20_1 == entry_x8[2])
                std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>(
                    entry_x8)
            else
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    x20_1)
                entry_x8[1] = x20_1 + 0x18
                x21 += 0x60
                
                if (x21 == x22)
                    break
                
                continue
        
    label_e9c07c:
        x21 += 0x60
        
        if (x21 == x22)
            break

void* __offset(vtable_for_Botan::OID, 0x10) var_50 = _vtable_for_Botan::OID + 0x10

if (result == 0)
    return result

void* result_1 = result
return operator delete(result)
