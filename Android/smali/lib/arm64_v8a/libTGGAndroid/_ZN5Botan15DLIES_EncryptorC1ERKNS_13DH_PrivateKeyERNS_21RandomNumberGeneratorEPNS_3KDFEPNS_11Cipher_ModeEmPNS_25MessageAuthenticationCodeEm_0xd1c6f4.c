// 函数: _ZN5Botan15DLIES_EncryptorC1ERKNS_13DH_PrivateKeyERNS_21RandomNumberGeneratorEPNS_3KDFEPNS_11Cipher_ModeEmPNS_25MessageAuthenticationCodeEm
// 地址: 0xd1c6f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::DLIES_Encryptor + 0x10
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
Botan::DH_PublicKey::public_value()
char var_78 = 6
int32_t var_77 = 0x776152
int16_t var_90 = 0
Botan::PK_Key_Agreement::PK_Key_Agreement(arg1 + 0x38, arg2 + 8, arg3, &var_78)
void* var_68

if ((zx.d(var_78) & 1) != 0)
    operator delete(var_68)
int64_t entry_x7
*(arg1 + 0x60) = entry_x7
*(arg1 + 0x40) = arg4
*(arg1 + 0x48) = arg5
*(arg1 + 0x50) = arg6
*(arg1 + 0x58) = arg7
var_78.w = 0
int64_t result = Botan::OctetString::OctetString(arg1 + 0x68)

if (arg4 == 0)
    Botan::assertion_failure("kdf is not null", &data_793a18, "DLIES_Encryptor", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x67d7)
else if (arg7 != 0)
    return result

int64_t* x0_5 = Botan::assertion_failure("mac is not null", &data_793a18, "DLIES_Encryptor", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x67d8)
int64_t* x0_6 = *(arg1 + 0x58)
*(arg1 + 0x58) = 0
int64_t* x0_7

if (x0_6 == 0)
    x0_7 = *(arg1 + 0x48)
    *(arg1 + 0x48) = 0
    
    if (x0_7 != 0)
        goto label_d1c940
    
    goto label_d1c8c4

(*(*x0_6 + 0x10))()
x0_7 = *(arg1 + 0x48)
*(arg1 + 0x48) = 0
int64_t* x0_13

if (x0_7 != 0)
label_d1c940:
    (*(*x0_7 + 8))()
    x0_13 = *(arg1 + 0x40)
    *(arg1 + 0x40) = 0
    
    if (x0_13 == 0)
        goto label_d1c8d0
    
    goto label_d1c958

label_d1c8c4:
x0_13 = *(arg1 + 0x40)
*(arg1 + 0x40) = 0
int64_t* x0_8

if (x0_13 != 0)
label_d1c958:
    (*(*x0_13 + 8))()
    x0_8 = *(arg1 + 0x38)
    *(arg1 + 0x38) = 0
    
    if (x0_8 != 0)
        (*(*x0_8 + 0x18))()
else
label_d1c8d0:
    x0_8 = *(arg1 + 0x38)
    *(arg1 + 0x38) = 0
    
    if (x0_8 != 0)
        (*(*x0_8 + 0x18))()
void* x0_9 = *(arg1 + 0x20)
void* x0_10

if (x0_9 != 0)
    *(arg1 + 0x28) = x0_9
    operator delete(x0_9)
    x0_10 = *(arg1 + 8)
    
    if (x0_10 != 0)
    label_d1c910:
        *(arg1 + 0x10) = x0_10
        operator delete(x0_10)
        sub_1101e04(x0_5)
        noreturn
else
    x0_10 = *(arg1 + 8)
    
    if (x0_10 != 0)
        goto label_d1c910
sub_1101e04(x0_5)
noreturn
