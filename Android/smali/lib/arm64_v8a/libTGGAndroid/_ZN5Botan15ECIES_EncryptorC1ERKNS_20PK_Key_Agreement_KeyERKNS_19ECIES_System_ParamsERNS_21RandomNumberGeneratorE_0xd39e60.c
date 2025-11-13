// 函数: _ZN5Botan15ECIES_EncryptorC1ERKNS_20PK_Key_Agreement_KeyERKNS_19ECIES_System_ParamsERNS_21RandomNumberGeneratorE
// 地址: 0xd39e60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::ECIES_Encryptor + 0x10
Botan::ECIES_KA_Operation::ECIES_KA_Operation(arg1 + 8, arg2, arg3.b, 1)
Botan::ECIES_System_Params::ECIES_System_Params(arg1 + 0x50)
*(arg1 + 0xd0) = 0
*(arg1 + 0xd8) = 0
(*(*arg2 + 0xb0))(arg2)
int16_t var_108 = 0
Botan::OctetString::OctetString(arg1 + 0xf8)
__builtin_memset(arg1 + 0x110, 0, 0x88)
*(arg1 + 0x138) = -1
*(arg1 + 0x140) = 1
*(arg1 + 0x148) = 0
*(arg1 + 0x158) = 0
*(arg1 + 0x150) = 0
*(arg1 + 0x160) = -1
*(arg1 + 0x168) = 1
__builtin_memset(arg1 + 0x170, 0, 0x18)
*(arg1 + 0x188) = -1
*(arg1 + 0x190) = 1
__builtin_memset(arg1 + 0x198, 0, 0x18)
int64_t var_80

if (*(arg3 + 0x38) != 0)
    uint8_t* x25_1 = *(arg1 + 0xe0)
    Botan::OS2ECP(x25_1, *(arg1 + 0xe8) - x25_1, Botan::EC_Group::data())
    *(arg3 + 0x38)
    Botan::PointGFp::encode(&var_108)
    void* x0_8 = *(arg1 + 0xe0)
    
    if (x0_8 != 0)
        *(arg1 + 0xe8) = x0_8
        operator delete(x0_8)
        __builtin_memset(arg1 + 0xe0, 0, 0x18)
    
    *(arg1 + 0xe0) = var_80.o
    int64_t var_70
    *(arg1 + 0xf0) = var_70
    Botan::PointGFp::~PointGFp()

var_108 = 0
Botan::MessageAuthenticationCode::create_or_throw(arg1 + 0xb0, &var_108)
void* var_f8

if ((zx.d(var_108.b) & 1) != 0)
    operator delete(var_f8)

int64_t* x0_11 = *(arg1 + 0xd0)
*(arg1 + 0xd0) = var_80

if (x0_11 != 0)
    (*(*x0_11 + 0x10))()

var_108 = 0
Botan::Cipher_Mode::create_or_throw(arg1 + 0x90, 0, &var_108)

if ((zx.d(var_108.b) & 1) != 0)
    operator delete(var_f8)

int64_t* result = *(arg1 + 0xd8)
*(arg1 + 0xd8) = var_80

if (result == 0)
    return result

return (*(*result + 8))()
