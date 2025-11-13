// 函数: _ZN5Botan17X509_Cert_Options17add_ex_constraintERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xebeee4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x1
void* result = Botan::OID::from_string(entry_x1)
void** x8 = *(arg1 + 0x1f0)
void* result_1

if (x8 u>= *(arg1 + 0x1f8))
    std::__ndk1::vector<Botan::OID, std::__ndk1::allocator<Botan::OID> >::__push_back_slow_path<Botan::OID>(
        arg1 + 0x1e8)
    result = result_1
    void* __offset(vtable_for_Botan::OID, 0x10) var_30_1 = _vtable_for_Botan::OID + 0x10
    
    if (result != 0)
        void* result_2 = result
        return operator delete(result)
else
    x8[2] = 0
    x8[3] = 0
    *x8 = _vtable_for_Botan::OID + 0x10
    x8[1] = 0
    x8[1] = result_1
    int64_t var_20
    x8[2] = var_20
    int64_t var_18
    x8[3] = var_18
    *(arg1 + 0x1f0) = &x8[4]
return result
