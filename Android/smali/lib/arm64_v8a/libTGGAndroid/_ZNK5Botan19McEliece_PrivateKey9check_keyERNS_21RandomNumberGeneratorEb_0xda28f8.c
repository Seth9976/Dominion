// 函数: _ZNK5Botan19McEliece_PrivateKey9check_keyERNS_21RandomNumberGeneratorEb
// 地址: 0xda28f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::McEliece_PublicKey::random_plaintext_element(arg1 + 0x78)
char* var_68
__builtin_memset(&var_68, 0, 0x30)
uint8_t* var_50
char* var_38
Botan::mceliece_encrypt(&var_50, &var_68, &var_38, arg1 + 0x78, arg2)
uint8_t* x19_1 = var_50
char* var_98
__builtin_memset(&var_98, 0, 0x30)
char* var_80
int64_t var_48
Botan::mceliece_decrypt(&var_80, &var_98, x19_1, var_48 - x19_1, arg1)
char* x20_1 = var_68
char* x0_3 = var_98
int64_t var_90
int64_t var_60
int32_t x21_1
char* var_90_1
int64_t var_88

if (var_60 - x20_1 != var_90 - x0_3)
label_da2a00:
    x21_1 = 0
    
    if (x0_3 != 0)
        var_90_1 = x0_3
        Botan::deallocate_memory(x0_3, var_88 - x0_3, 1)
else
    if (x20_1 != var_60)
        char* x9_2 = x20_1
        char* x10_1 = x0_3
        
        while (zx.d(*x9_2) == zx.d(*x10_1))
            x9_2 = &x9_2[1]
            x10_1 = &x10_1[1]
            
            if (var_60 == x9_2)
                goto label_da29b8
        
        x21_1 = 0
        goto label_da2a10
    
label_da29b8:
    char* x9_3 = var_38
    char* x10_2 = var_80
    int64_t var_78
    int64_t var_30
    
    if (var_30 - x9_3 != var_78 - x10_2)
        goto label_da2a00
    
    if (x9_3 == var_30)
        x21_1 = 1
        
        if (x0_3 != 0)
            var_90_1 = x0_3
            Botan::deallocate_memory(x0_3, var_88 - x0_3, 1)
    else
        do
            uint32_t x11_4 = zx.d(*x9_3)
            uint32_t x12_3 = zx.d(*x10_2)
            x21_1 = x11_4 == x12_3 ? 1 : 0
            
            if (x11_4 != x12_3)
                break
            
            x9_3 = &x9_3[1]
            x10_2 = &x10_2[1]
        while (var_30 != x9_3)
        
    label_da2a10:
        
        if (x0_3 != 0)
            var_90_1 = x0_3
            Botan::deallocate_memory(x0_3, var_88 - x0_3, 1)
char* x0_4 = var_80
int64_t var_70

if (x0_4 != 0)
    Botan::deallocate_memory(x0_4, var_70 - x0_4, 1)
int64_t var_58

if (x20_1 != 0)
    Botan::deallocate_memory(x20_1, var_58 - x20_1, 1)
int64_t var_40

if (x19_1 != 0)
    Botan::deallocate_memory(x19_1, var_40 - x19_1, 1)
char* x0_7 = var_38
int64_t var_28

if (x0_7 != 0)
    Botan::deallocate_memory(x0_7, var_28 - x0_7, 1)
return zx.q(x21_1)
