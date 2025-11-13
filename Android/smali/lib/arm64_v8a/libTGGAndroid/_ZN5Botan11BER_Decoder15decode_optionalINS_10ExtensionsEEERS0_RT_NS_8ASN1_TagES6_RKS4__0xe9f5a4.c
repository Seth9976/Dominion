// 函数: _ZN5Botan11BER_Decoder15decode_optionalINS_10ExtensionsEEERS0_RT_NS_8ASN1_TagES6_RKS4_
// 地址: 0xe9f5a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg4.d
int64_t* x20 = arg2
Botan::BER_Decoder::get_next_object()
int32_t var_50
int32_t var_4c
void* var_48
int64_t var_38

if (var_50 != arg3 || var_4c != x22)
    void* entry_x4
    
    if (x20 != entry_x4)
        *(entry_x4 + 0x10)
        std::__ndk1::vector<Botan::OID, std::__ndk1::allocator<Botan::OID> >::assign<Botan::OID*>(
            &x20[1], *(entry_x4 + 8))
        std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::__assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__tree_node<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, void*>*, int64_t> >(
            &x20[4], *(entry_x4 + 0x20))
    
    Botan::BER_Decoder::push_back(arg1)
else if ((0xa0 & not.d(x22)) != 0)
    Botan::BER_Decoder::push_back(arg1)
    (*(*x20 + 8))(x20, arg1)
else
    int64_t var_7c
    __builtin_memset(&var_7c, 0, 0x1c)
    int32_t var_80_1 = 0xff00
    struct Botan::DataSource::Botan::(anonymous namespace)::DataSource_BERObject::VTable** x0
    int128_t v0_1
    x0, v0_1 = operator new(0x30)
    v0_1 = var_48.o
    *x0 = &_vtable_for_Botan::(anonymous namespace)::DataSource_BERObject{for `Botan::DataSource'}
    x0[1] = var_50.q
    __builtin_memset(&var_48, 0, 0x18)
    struct Botan::DataSource::Botan::(anonymous namespace)::DataSource_BERObject::VTable** 
        var_60_1 = x0
    *(x0 + 0x10) = v0_1
    x0[4] = var_38
    x0[5] = 0
    int64_t var_88 = 0
    (*(*x20 + 8))(x20, &var_88)
    Botan::BER_Decoder::verify_end()
    int64_t var_58_2 = 0
    
    if (x0 != 0)
        (*x0)->vFunc_7()
    
    void* x0_3 = var_7c
    
    if (x0_3 != 0)
        int64_t var_74 = x0_3
        int64_t var_6c
        Botan::deallocate_memory(x0_3, var_6c - x0_3, 1)

void* x0_7 = var_48

if (x0_7 != 0)
    void* var_40_1 = x0_7
    Botan::deallocate_memory(x0_7, var_38 - x0_7, 1)

return arg1
