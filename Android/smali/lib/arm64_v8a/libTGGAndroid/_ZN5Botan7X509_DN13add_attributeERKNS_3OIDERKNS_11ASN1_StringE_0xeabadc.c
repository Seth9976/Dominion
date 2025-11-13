// 函数: _ZN5Botan7X509_DN13add_attributeERKNS_3OIDERKNS_11ASN1_StringE
// 地址: 0xeabadc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x2
uint64_t x8 = zx.q(*(entry_x2 + 0x20))
uint64_t x8_1

if ((x8.d & 1) == 0)
    x8_1 = x8 u>> 1
else
    x8_1 = *(entry_x2 + 0x28)

if (x8_1 == 0)
    return 

Botan::OID const& x19_1 = arg1
void* var_70
sub_eabc78(arg2, entry_x2, &var_70)
void** x8_3 = *(x19_1 + 0x10)
Botan::OID* var_68
void* var_48
char var_30
void* var_20

if (x8_3 u>= *(x19_1 + 0x18))
    std::__ndk1::vector<std::__ndk1::pair<Botan::OID, Botan::ASN1_String>, std::__ndk1::allocator<std::__ndk1::pair<Botan::OID, Botan::ASN1_String> > >::__push_back_slow_path<std::__ndk1::pair<Botan::OID, Botan::ASN1_String> >(
        x19_1 + 8)
    void* __offset(vtable_for_Botan::ASN1_String, 0x10) var_50_2 =
        _vtable_for_Botan::ASN1_String + 0x10
    
    if ((zx.d(var_30) & 1) != 0)
        operator delete(var_20)
else
    x8_3[2] = 0
    x8_3[3] = 0
    *x8_3 = _vtable_for_Botan::OID + 0x10
    x8_3[1] = 0
    x8_3[1] = var_68
    int64_t var_60
    x8_3[2] = var_60
    int64_t var_58
    x8_3[3] = var_58
    x8_3[4] = _vtable_for_Botan::ASN1_String + 0x10
    __builtin_memset(&var_68, 0, 0x18)
    void* __offset(vtable_for_Botan::ASN1_String, 0x10) var_50_1 =
        _vtable_for_Botan::ASN1_String + 0x10
    __builtin_memset(&x8_3[5], 0, 0x18)
    x8_3[5] = var_48
    int64_t var_40
    x8_3[6] = var_40
    int64_t var_38
    x8_3[7] = var_38
    __builtin_memset(&var_48, 0, 0x30)
    *(x8_3 + 0x40) = var_30.o
    x8_3[0xa] = var_20
    int32_t var_18
    x8_3[0xb].d = var_18
    *(x19_1 + 0x10) = &x8_3[0xc]
void* x0_3 = var_48

if (x0_3 != 0)
    void* var_40_1 = x0_3
    operator delete(x0_3)

arg1 = var_68
var_70 = _vtable_for_Botan::OID + 0x10

if (arg1 != 0)
    Botan::OID const& var_60_1 = arg1
    operator delete(arg1)

*(x19_1 + 0x28) = *(x19_1 + 0x20)
