// 函数: _ZN5Botan18ECIES_KA_OperationC1ERKNS_20PK_Key_Agreement_KeyERKNS_15ECIES_KA_ParamsEbRNS_21RandomNumberGeneratorE
// 地址: 0xd38d4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg3
int32_t x25 = *(arg3 + 0x3c)
void* x0_1 = __dynamic_cast(arg2, _typeinfo_for_Botan::PK_Key_Agreement_Key, 
    _typeinfo_for_Botan::ECDH_PrivateKey, 0x38)
int128_t var_220

if (x0_1 == 0)
    if ((x25 & 0xe) == 0)
        goto label_d38ec8
    
    void** x0_13 = __cxa_allocate_exception(0x20)
    int64_t x0_14
    int128_t v0_1
    x0_14, v0_1 = operator new(0x60)
    v0_1 = data_71c890
    int64_t var_210_1 = x0_14
    __builtin_strncpy(x0_14, 
        "ECIES: cofactor, old cofactor and check mode are only supported for ECDH_PrivateKey", 0x54)
    var_220 = v0_1
    *x0_13 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_13[1])
    *x0_13 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_13, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int16_t var_238
void* var_228
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x4

if ((x25 & 2) == 0 || (arg4.d & 1) != 0)
    int64_t (* var_100_1)() =
        construction_vtable_for_Botan::EC_PublicKey-in-Botan::EC_PrivateKey + 0x88
    int64_t var_f8_1 = *(x0_1 + 0x48)
    int64_t x8_2 = *(x0_1 + 0x50)
    int64_t var_f0_1 = x8_2
    
    if (x8_2 != 0)
        int32_t i
        
        do
            i = __stxr(__ldxr(x8_2 + 8) + 1, x8_2 + 8)
        while (i != 0)
    
    void var_e8
    Botan::PointGFp::PointGFp(&var_e8)
    struct Botan::EC_PrivateKey::VTable* const var_100_2 = &_vtable_for_Botan::EC_PrivateKey
    var_220.q = &_vtable_for_Botan::EC_PrivateKey
    int64_t var_60_1 = *(x0_1 + 0xe0)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(&var_220:8)
    int64_t var_200_1 = *(x0_1 + 0x28)
    var_220.q =
        &_vtable_for_Botan::(anonymous namespace)::ECIES_PrivateKey{for `Botan::EC_PrivateKey'}
    struct Botan::(anonymous namespace)::ECIES_PrivateKey::VTable* const var_100_3 =
        &_vtable_for_Botan::(anonymous namespace)::ECIES_PrivateKey
    struct Botan::PK_Key_Agreement_Key::Botan::(anonymous namespace)::ECIES_PrivateKey::VTable* 
        const var_1f0_1 = &_vtable_for_Botan::(anonymous namespace)::ECIES_PrivateKey{for `Botan::PK_Key_Agreement_Key'}
    int32_t var_1f8_1 = *(x0_1 + 0x30)
    void var_1e8
    Botan::ECDH_PrivateKey::ECDH_PrivateKey(&var_1e8)
    var_238.b = 6
    var_238:1.d = 0x776152
    int16_t var_250_1 = 0
    Botan::PK_Key_Agreement::PK_Key_Agreement(arg1, &var_220, entry_x4, &var_238)
    
    if ((zx.d(var_238.b) & 1) != 0)
        operator delete(var_228)
    
    sub_eff614(&var_220)
else
label_d38ec8:
    var_220.b = 6
    void* x1_5 = arg2 + *(*arg2 - 0xc8)
    var_220:1.d = 0x776152
    var_238 = 0
    Botan::PK_Key_Agreement::PK_Key_Agreement(arg1, x1_5, entry_x4, &var_220)
    
    if ((zx.d(var_238.b) & 1) != 0)
        operator delete(var_228)
    
    void* var_210
    
    if ((zx.d(var_220.b) & 1) != 0)
        operator delete(var_210)
*(arg1 + 8) = _vtable_for_Botan::ECIES_KA_Params + 0x10
*(arg1 + 0x10) = *(x20 + 8)
int64_t x8_14 = *(x20 + 0x10)
*(arg1 + 0x18) = x8_14

if (x8_14 != 0)
    int32_t i_1
    
    do
        i_1 = __stxr(__ldxr(x8_14 + 8) + 1, x8_14 + 8)
    while (i_1 != 0)

int64_t result
int128_t v0
result, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1 + 0x20)
*(arg1 + 0x38) = *(x20 + 0x30)
return result
