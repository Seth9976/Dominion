// 函数: _ZN5Botan15DLIES_DecryptorC1ERKNS_13DH_PrivateKeyERNS_21RandomNumberGeneratorEPNS_3KDFEPNS_11Cipher_ModeEmPNS_25MessageAuthenticationCodeEm
// 地址: 0xd1d710
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::DLIES_Decryptor + 0x10
Botan::DH_PublicKey::public_value()
void* var_68
void* x0_1 = var_68

if (x0_1 != 0)
    void* var_60_1 = x0_1
    operator delete(x0_1)

int64_t var_60
*(arg1 + 8) = var_60 - x0_1
var_68.b = 6
var_68:1.d = 0x776152
int16_t var_80 = 0
Botan::PK_Key_Agreement::PK_Key_Agreement(arg1 + 0x10, arg2 + 8, arg3, &var_68)
void* var_58

if ((zx.d(var_68.b) & 1) != 0)
    operator delete(var_58)
int64_t entry_x7
*(arg1 + 0x38) = entry_x7
*(arg1 + 0x18) = arg4
*(arg1 + 0x20) = arg5
*(arg1 + 0x28) = arg6
*(arg1 + 0x30) = arg7
var_68.w = 0
int64_t result = Botan::OctetString::OctetString(arg1 + 0x40)

if (arg4 == 0)
    Botan::assertion_failure("kdf is not null", &data_793a18, "DLIES_Decryptor", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x682d)
else if (arg7 != 0)
    return result

int64_t* x0_6 = Botan::assertion_failure("mac is not null", &data_793a18, "DLIES_Decryptor", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x682e)
int64_t* x0_7 = *(arg1 + 0x30)
*(arg1 + 0x30) = 0
int64_t* x0_8

if (x0_7 == 0)
    x0_8 = *(arg1 + 0x20)
    *(arg1 + 0x20) = 0
    
    if (x0_8 != 0)
        goto label_d1d920
    
    goto label_d1d8d4

(*(*x0_7 + 0x10))()
x0_8 = *(arg1 + 0x20)
*(arg1 + 0x20) = 0
int64_t* x0_11

if (x0_8 != 0)
label_d1d920:
    (*(*x0_8 + 8))()
    x0_11 = *(arg1 + 0x18)
    *(arg1 + 0x18) = 0
    
    if (x0_11 == 0)
        goto label_d1d8e0
    
    goto label_d1d938

label_d1d8d4:
x0_11 = *(arg1 + 0x18)
*(arg1 + 0x18) = 0
int64_t* x0_9

if (x0_11 != 0)
label_d1d938:
    (*(*x0_11 + 8))()
    x0_9 = *(arg1 + 0x10)
    *(arg1 + 0x10) = 0
    
    if (x0_9 != 0)
        (*(*x0_9 + 0x18))()
else
label_d1d8e0:
    x0_9 = *(arg1 + 0x10)
    *(arg1 + 0x10) = 0
    
    if (x0_9 != 0)
        (*(*x0_9 + 0x18))()
sub_1101e04(x0_6)
noreturn
