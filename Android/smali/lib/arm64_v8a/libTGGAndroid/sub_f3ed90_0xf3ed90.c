// 函数: sub_f3ed90
// 地址: 0xf3ed90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::BigInt* x0_1 = Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 8))
Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 0x10))
char* x22 = *(arg1 + 0x18)

if (x22 == 0)
    return 0xffffffe1

size_t x0_5 = strlen(x22)

if (x0_5 u>= -0x10)
    int64_t* x0_19 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    (*(*x0_1 + 8))(x0_1)
    sub_1101e04(x0_19)
    noreturn

int64_t var_d8
void* var_c8
void* x24_1

if (x0_5 u>= 0x17)
    uint64_t x25_1 = (x0_5 + 0x10) & 0xfffffffffffffff0
    void* x0_8 = operator new(x25_1)
    x24_1 = x0_8
    size_t var_d0_1 = x0_5
    var_c8 = x0_8
    var_d8 = x25_1 | 1
    memcpy(x24_1, x22, x0_5)
else
    x24_1 = &var_d8 | 1
    var_d8.b = (x0_5.d << 1).b
    
    if (x0_5 != 0)
        memcpy(x24_1, x22, x0_5)

*(x24_1 + x0_5) = 0
void var_50
Botan::EC_Group::EC_Group(&var_50)

if ((zx.d(var_d8.b) & 1) != 0)
    operator delete(var_c8)

Botan::PointGFp::PointGFp(&var_d8, Botan::EC_Group::data(), x0_1)
void** x0_14 = operator new(0xb0)
*x0_14 = _vtable_for_Botan::Public_Key + 0x10
Botan::EC_PublicKey::EC_PublicKey(&x0_14[1], _VTT_for_Botan::ECDH_PublicKey + 0x18)
*x0_14 = _vtable_for_Botan::ECDH_PublicKey + 0x90
x0_14[1] = _vtable_for_Botan::ECDH_PublicKey + 0x190
Botan::PointGFp::~PointGFp()
int64_t* var_48

if (var_48 != 0)
    int64_t x9_2
    int32_t i
    
    do
        x9_2 = __ldaxr(&var_48[1])
        i = __stlxr(x9_2 - 1, &var_48[1])
    while (i != 0)
    
    if (x9_2 == 0)
        (*(*var_48 + 0x10))(var_48)
        std::__ndk1::__shared_weak_count::__release_weak()

int64_t* x0_18 = operator new(0x18)
x0_18[1].d = 0x2c286519
x0_18[2] = x0_14 + *(*x0_14 - 0x90)
*x0_18 = _vtable_for_botan_pubkey_struct + 0x10
**(arg1 + 0x20) = x0_18
return 0
