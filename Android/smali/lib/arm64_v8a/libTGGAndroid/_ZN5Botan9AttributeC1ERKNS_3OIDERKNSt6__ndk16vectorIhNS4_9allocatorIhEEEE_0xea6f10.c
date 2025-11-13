// 函数: _ZN5Botan9AttributeC1ERKNS_3OIDERKNSt6__ndk16vectorIhNS4_9allocatorIhEEEE
// 地址: 0xea6f10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(Botan::OID, 0x28) entry_x21
void* __offset(Botan::OID, 0x28) var_18 = entry_x21
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
*arg1 = _vtable_for_Botan::Attribute + 0x10
*(arg1 + 8) = _vtable_for_Botan::OID + 0x10
*(arg1 + 0x10) = 0
int64_t x9_1 = *(arg2 + 8)
int64_t x8_1 = *(arg2 + 0x10)
Botan::OID const& x19 = arg1
uint64_t x24 = x8_1 - x9_1

if (x8_1 == x9_1)
label_ea6fa8:
    entry_x21 = x19 + 0x28
    __builtin_memset(entry_x21, 0, 0x18)
    int64_t* entry_x2
    int64_t x9_2 = *entry_x2
    int64_t x8_5 = entry_x2[1]
    uint64_t x23_2 = x8_5 - x9_2
    
    if (x8_5 == x9_2)
        return 
    
    if ((x23_2 & 0xffffffff80000000) == 0)
        arg1 = operator new(x23_2)
        *(x19 + 0x28) = arg1
        *(x19 + 0x30) = arg1
        *(x19 + 0x38) = arg1 + x23_2
        int64_t x1_1 = *entry_x2
        Botan::OID const& x22_2 = arg1
        size_t x20_1 = entry_x2[1] - x1_1
        
        if (x20_1 s>= 1)
            memcpy(x22_2, x1_1, x20_1)
            x22_2 += x20_1
        
        *(x19 + 0x30) = x22_2
        return 
else
    if ((x24 & 0xffffffff80000000) == 0)
        arg1 = operator new(x24)
        *(x19 + 0x10) = arg1
        *(x19 + 0x18) = arg1
        *(x19 + 0x20) = arg1 + (x24 s>> 2 << 2)
        int64_t x1 = *(arg2 + 8)
        Botan::OID const& x23_1 = arg1
        size_t x21_1 = *(arg2 + 0x10) - x1
        
        if (x21_1 s>= 1)
            memcpy(x23_1, x1, x21_1)
            x23_1 += x21_1
        
        *(x19 + 0x18) = x23_1
        goto label_ea6fa8
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()

int64_t* x0_6 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
void* x8_8 = *entry_x21

if (x8_8 != 0)
    *(x19 + 0x30) = x8_8
    operator delete(x8_8)

void* x0_8 = *(x19 + 0x10)
*(x19 + 8) = _vtable_for_Botan::OID + 0x10

if (x0_8 != 0)
    *(x19 + 0x18) = x0_8
    operator delete(x0_8)

sub_1101e04(x0_6)
noreturn
