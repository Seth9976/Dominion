// 函数: _ZN5Botan19AlgorithmIdentifierC1ERKNS_3OIDENS0_15Encoding_OptionE
// 地址: 0xcade90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x20
void* var_10 = entry_x20
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
*arg1 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
*(arg1 + 8) = _vtable_for_Botan::OID + 0x10
*(arg1 + 0x10) = 0
int64_t x9_1 = *(arg2 + 8)
int64_t x8_1 = *(arg2 + 0x10)
Botan::OID const& x19 = arg1
uint64_t x24 = x8_1 - x9_1
int32_t entry_x2

if (x8_1 == x9_1)
    __builtin_memset(x19 + 0x28, 0, 0x18)
    
    if (entry_x2 == 0)
    label_cadf50:
        arg1 = operator new(2)
        *(x19 + 0x38) = arg1 + 2
        *arg1 = 5
        *(x19 + 0x28) = arg1
        *(x19 + 0x30) = arg1 + 2
    
    return 

if ((x24 & 0xffffffff80000000) != 0)
    int64_t* x0_3 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    *(x19 + 8) = _vtable_for_Botan::OID + 0x10
    
    if (entry_x20 != 0)
        *(x19 + 0x18) = entry_x20
        operator delete(entry_x20)
    
    sub_1101e04(x0_3)
    noreturn

void* x22_1 = arg2
arg1 = operator new(x24)
*(x19 + 0x10) = arg1
*(x19 + 0x18) = arg1
*(x19 + 0x20) = arg1 + (x24 s>> 2 << 2)
int64_t x1 = *(x22_1 + 8)
size_t x22_2 = *(x22_1 + 0x10) - x1
void* x8_5

if (x22_2 s< 1)
    x8_5 = arg1
else
    memcpy(arg1, x1, x22_2)
    x8_5 = arg1 + x22_2

*(x19 + 0x18) = x8_5
__builtin_memset(x19 + 0x28, 0, 0x18)

if (entry_x2 == 0)
    goto label_cadf50
