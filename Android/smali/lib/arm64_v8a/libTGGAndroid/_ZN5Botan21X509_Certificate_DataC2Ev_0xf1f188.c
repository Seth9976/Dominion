// 函数: _ZN5Botan21X509_Certificate_DataC2Ev
// 地址: 0xf1f188
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
__builtin_memset(entry_x0, 0, 0x18)
__builtin_memset(entry_x0 + 0x28, 0, 0x30)
*(entry_x0 + 0x18) = _vtable_for_Botan::AlgorithmIdentifier + 0x10
*(entry_x0 + 0x20) = _vtable_for_Botan::OID + 0x10
*(entry_x0 + 0x58) = _vtable_for_Botan::X509_DN + 0x10
*(entry_x0 + 0x60) = zx.o(0)
*(entry_x0 + 0x90) = _vtable_for_Botan::X509_DN + 0x10
__builtin_memset(entry_x0 + 0x70, 0, 0x20)
*(entry_x0 + 0x98) = zx.o(0)
*(entry_x0 + 0x118) = 0xff00
*(entry_x0 + 0x140) = 0xff00
*(entry_x0 + 0xf8) = _vtable_for_Botan::ASN1_Time + 0x10
*(entry_x0 + 0x100) = 0
*(entry_x0 + 0x120) = _vtable_for_Botan::ASN1_Time + 0x10
__builtin_memset(entry_x0 + 0x128, 0, 0x18)
__builtin_memset(entry_x0 + 0xa8, 0, 0x50)
*(entry_x0 + 0x108) = 0
*(entry_x0 + 0x110) = 0
__builtin_memset(entry_x0 + 0x148, 0, 0x60)
*(entry_x0 + 0x1a8) = _vtable_for_Botan::AlgorithmIdentifier + 0x10
*(entry_x0 + 0x1b0) = _vtable_for_Botan::OID + 0x10
*(entry_x0 + 0x208) = zx.o(0)
*(entry_x0 + 0x1f8) = zx.o(0)
*(entry_x0 + 0x1e8) = zx.o(0)
*(entry_x0 + 0x1d8) = zx.o(0)
*(entry_x0 + 0x1c8) = zx.o(0)
*(entry_x0 + 0x1b8) = zx.o(0)
*(entry_x0 + 0x218) = _vtable_for_Botan::Extensions + 0x10
__builtin_memset(entry_x0 + 0x220, 0, 0x18)
*(entry_x0 + 0x248) = 0
*(entry_x0 + 0x240) = 0
*(entry_x0 + 0x238) = entry_x0 + 0x240
__builtin_memset(entry_x0 + 0x250, 0, 0x108)
int16_t var_78 = 0
int16_t var_90 = 0
int16_t var_a8 = 0
int16_t var_c0 = 0
Botan::AlternativeName::AlternativeName(entry_x0 + 0x358, &var_78, &var_90, &var_a8)
void* var_98

if ((zx.d(var_a8.b) & 1) != 0)
    operator delete(var_98)
    
    if ((zx.d(var_90.b) & 1) == 0)
        goto label_f1f318
    
    goto label_f1f3ec

void* var_80
void* var_68

if ((zx.d(var_90.b) & 1) != 0)
label_f1f3ec:
    operator delete(var_80)
    
    if ((zx.d(var_78.b) & 1) != 0)
        operator delete(var_68)
else
label_f1f318:
    
    if ((zx.d(var_78.b) & 1) != 0)
        operator delete(var_68)

var_78 = 0
var_90 = 0
var_a8 = 0
int16_t var_c0_1 = 0
int64_t result =
    Botan::AlternativeName::AlternativeName(entry_x0 + 0x390, &var_78, &var_90, &var_a8)

if ((zx.d(var_a8.b) & 1) != 0)
    result = operator delete(var_98)
    
    if ((zx.d(var_90.b) & 1) == 0)
        goto label_f1f368
    
    goto label_f1f420

if ((zx.d(var_90.b) & 1) != 0)
label_f1f420:
    result = operator delete(var_80)
    
    if ((zx.d(var_78.b) & 1) != 0)
        result = operator delete(var_68)
else
label_f1f368:
    
    if ((zx.d(var_78.b) & 1) != 0)
        result = operator delete(var_68)

__builtin_memset(entry_x0 + 0x3c8, 0, 0x30)
*(entry_x0 + 0x400) = zx.o(0)
*(entry_x0 + 0x3f8) = entry_x0 + 0x400
*(entry_x0 + 0x418) = zx.o(0)
*(entry_x0 + 0x410) = entry_x0 + 0x418
__builtin_memset(entry_x0 + 0x428, 0, 0x17)
return result
