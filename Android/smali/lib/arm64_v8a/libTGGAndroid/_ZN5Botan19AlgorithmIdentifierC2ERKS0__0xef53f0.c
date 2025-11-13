// 函数: _ZN5Botan19AlgorithmIdentifierC2ERKS0_
// 地址: 0xef53f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
*arg1 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
*(arg1 + 8) = _vtable_for_Botan::OID + 0x10
void* __offset(Botan::AlgorithmIdentifier, 0x10) x21_1 = arg1 + 0x10
*x21_1 = 0
void* entry_x1
int64_t x9_1 = *(entry_x1 + 0x10)
int64_t x8_1 = *(entry_x1 + 0x18)
Botan::AlgorithmIdentifier const& x19 = arg1
uint64_t x23 = x8_1 - x9_1

if (x8_1 == x9_1)
label_ef5484:
    x21_1 = x19 + 0x28
    __builtin_memset(x21_1, 0, 0x18)
    int64_t x9_2 = *(entry_x1 + 0x28)
    int64_t x8_5 = *(entry_x1 + 0x30)
    uint64_t x23_1 = x8_5 - x9_2
    
    if (x8_5 == x9_2)
        return 
    
    if ((x23_1 & 0xffffffff80000000) == 0)
        arg1 = operator new(x23_1)
        *(x19 + 0x28) = arg1
        *(x19 + 0x30) = arg1
        *(x19 + 0x38) = arg1 + x23_1
        int64_t x1_1 = *(entry_x1 + 0x28)
        Botan::AlgorithmIdentifier const& x22_2 = arg1
        size_t x20_1 = *(entry_x1 + 0x30) - x1_1
        
        if (x20_1 s>= 1)
            memcpy(x22_2, x1_1, x20_1)
            x22_2 += x20_1
        
        *(x19 + 0x30) = x22_2
        return 
else
    if ((x23 & 0xffffffff80000000) == 0)
        arg1 = operator new(x23)
        *(x19 + 0x10) = arg1
        *(x19 + 0x18) = arg1
        *(x19 + 0x20) = arg1 + (x23 s>> 2 << 2)
        int64_t x1 = *(entry_x1 + 0x10)
        Botan::AlgorithmIdentifier const& x22_1 = arg1
        size_t x21_2 = *(entry_x1 + 0x18) - x1
        
        if (x21_2 s>= 1)
            memcpy(x22_1, x1, x21_2)
            x22_1 += x21_2
        
        *(x19 + 0x18) = x22_1
        goto label_ef5484
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()

int64_t* x0_6 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
void* x8_8 = *x21_1

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
