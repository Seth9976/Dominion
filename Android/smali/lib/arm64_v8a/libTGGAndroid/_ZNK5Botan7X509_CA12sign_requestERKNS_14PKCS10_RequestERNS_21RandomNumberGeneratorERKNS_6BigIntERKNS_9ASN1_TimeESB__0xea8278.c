// 函数: _ZNK5Botan7X509_CA12sign_requestERKNS_14PKCS10_RequestERNS_21RandomNumberGeneratorERKNS_6BigIntERKNS_9ASN1_TimeESB_
// 地址: 0xea8278
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(vtable_for_Botan::Extensions, 0x10) var_98
sub_ea843c(&var_98, arg2, arg1 + 0x40, arg1 + 0xc8)
Botan::PK_Signer* x25 = *(arg1 + 0xe0)
void* x0_2 = Botan::PKCS10_Request::data()
void* x0_4 = Botan::X509_Certificate::data()
int64_t var_b0 = Botan::PKCS10_Request::data()
int64_t* var_a8 = &var_98
Botan::ASN1_Time* entry_x5
Botan::X509_CA::make_cert(x25, arg3, arg4, arg1, x0_2 + 0x38, arg5, entry_x5, x0_4 + 0x90)
var_98 = _vtable_for_Botan::Extensions + 0x10
void var_78
int64_t result = std::__ndk1::__tree<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::__map_value_compare<Botan::OID, std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info>, std::__ndk1::less<Botan::OID>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::OID, Botan::Extensions::Extensions_Info> > >::destroy(
    &var_78)
void* var_90

if (var_90 == 0)
    return result

void** var_88
void** x8_1 = var_88
void* x0_10

if (x8_1 == var_90)
    x0_10 = var_90
else
    void** x21_1 = x8_1
    
    do
        x21_1 = &x21_1[-4]
        *x21_1 = _vtable_for_Botan::OID + 0x10
        void* x0_9 = x21_1[1]
        
        if (x0_9 != 0)
            x8_1[-2] = x0_9
            operator delete(x0_9)
        
        x8_1 = x21_1
    while (var_90 != x21_1)
    
    x0_10 = var_90

void* var_88_1 = var_90
return operator delete(x0_10)
