// 函数: sub_f3fc3c
// 地址: 0xf3fc3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan_FFI::safe_get<Botan::BigInt, 3358112210u>(*(arg1 + 8))
char* x20 = *(arg1 + 0x10)

if (x20 == 0)
    return 0xffffffe1

void* __offset(vtable_for_Botan::Null_RNG, 0x10) var_38 = _vtable_for_Botan::Null_RNG + 0x10
size_t x0_3 = strlen(x20)

if (x0_3 u>= -0x10)
    int64_t* x0_14 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    Botan::SM2_PrivateKey::~SM2_PrivateKey()
    *(x20 + 0x60) = construction_vtable_for_Botan::EC_PublicKey-in-Botan::SM2_PrivateKey + 0x88
    *x20 = construction_vtable_for_Botan::EC_PublicKey-in-Botan::SM2_PrivateKey + 0x180
    Botan::PointGFp::~PointGFp()
    int64_t* x21_3 = *(x20 + 0x70)
    
    if (x21_3 != 0)
        int64_t x9_6
        int32_t i
        
        do
            x9_6 = __ldaxr(&x21_3[1])
            i = __stlxr(x9_6 - 1, &x21_3[1])
        while (i != 0)
        
        if (x9_6 == 0)
            (*(*x21_3 + 0x10))(x21_3)
            std::__ndk1::__shared_weak_count::__release_weak()
    
    operator delete(x20)
    sub_1101e04(x0_14)
    noreturn

int64_t var_68
void* var_58
void* x23_1

if (x0_3 u>= 0x17)
    uint64_t x24_1 = (x0_3 + 0x10) & 0xfffffffffffffff0
    void* x0_6 = operator new(x24_1)
    x23_1 = x0_6
    size_t var_60_1 = x0_3
    var_58 = x0_6
    var_68 = x24_1 | 1
    memcpy(x23_1, x20, x0_3)
else
    x23_1 = &var_68 | 1
    var_68.b = (x0_3.d << 1).b
    
    if (x0_3 != 0)
        memcpy(x23_1, x20, x0_3)

*(x23_1 + x0_3) = 0
Botan::BigInt var_50
Botan::EC_Group::EC_Group(&var_50)

if ((zx.d(var_68.b) & 1) != 0)
    operator delete(var_58)

Botan::RandomNumberGenerator* x0_10 = operator new(0x108)
Botan::SM2_PrivateKey::SM2_PrivateKey(x0_10, &var_38, &var_50)
int64_t* var_48

if (var_48 != 0)
    int64_t x9_1
    int32_t i_1
    
    do
        x9_1 = __ldaxr(&var_48[1])
        i_1 = __stlxr(x9_1 - 1, &var_48[1])
    while (i_1 != 0)
    
    if (x9_1 == 0)
        (*(*var_48 + 0x10))(var_48)
        std::__ndk1::__shared_weak_count::__release_weak()

int64_t* x0_13 = operator new(0x18)
x0_13[2] = x0_10 + 8
x0_13[1].d = 0x7f96385e
*x0_13 = _vtable_for_botan_privkey_struct + 0x10
**(arg1 + 0x18) = x0_13
return 0
