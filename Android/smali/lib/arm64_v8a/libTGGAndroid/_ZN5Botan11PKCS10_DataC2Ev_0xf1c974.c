// 函数: _ZN5Botan11PKCS10_DataC2Ev
// 地址: 0xf1c974
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
*entry_x0 = _vtable_for_Botan::X509_DN + 0x10
*(entry_x0 + 8) = zx.o(0)
__builtin_memset(&entry_x0[3], 0, 0x38)
int16_t var_68 = 0
int16_t var_80 = 0
int16_t var_98 = 0
int16_t var_b0 = 0
int64_t result = Botan::AlternativeName::AlternativeName(&entry_x0[0xa], &var_68, &var_80, &var_98)

if ((zx.d(var_98.b) & 1) != 0)
    void* var_88
    result = operator delete(var_88)
    
    if ((zx.d(var_80.b) & 1) == 0)
        goto label_f1c9fc
    
    goto label_f1ca6c

void* var_58

if ((zx.d(var_80.b) & 1) != 0)
label_f1ca6c:
    void* var_70
    result = operator delete(var_70)
    
    if ((zx.d(var_68.b) & 1) != 0)
        result = operator delete(var_58)
else
label_f1c9fc:
    
    if ((zx.d(var_68.b) & 1) != 0)
        result = operator delete(var_58)
entry_x0[0x19] = 0
__builtin_memset(&entry_x0[0x11], 0, 0x18)
entry_x0[0x15] = 0
entry_x0[0x16] = 0
entry_x0[0x1a] = 0
entry_x0[0x14] = _vtable_for_Botan::Extensions + 0x10
entry_x0[0x17] = 0
entry_x0[0x18] = &entry_x0[0x19]
return result
