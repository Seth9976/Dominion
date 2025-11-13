// 函数: _ZN5Botan11X509_ObjectC2ERKS0_
// 地址: 0xef5264
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(Botan::X509_Object, 0x60) entry_x22
void* __offset(Botan::X509_Object, 0x60) var_20 = entry_x22
*arg1 = _vtable_for_Botan::X509_Object + 0x10
int64_t result = Botan::AlgorithmIdentifier::AlgorithmIdentifier(arg1 + 8)
__builtin_memset(arg1 + 0x48, 0, 0x18)
void* entry_x1
int64_t x9 = *(entry_x1 + 0x48)
int64_t x8_1 = *(entry_x1 + 0x50)
uint64_t x23 = x8_1 - x9

if (x8_1 == x9)
label_ef52f0:
    entry_x22 = arg1 + 0x60
    __builtin_memset(entry_x22, 0, 0x18)
    int64_t x9_1 = *(entry_x1 + 0x60)
    int64_t x8_4 = *(entry_x1 + 0x68)
    uint64_t x24_1 = x8_4 - x9_1
    
    if (x8_4 == x9_1)
        return result
    
    if ((x24_1 & 0xffffffff80000000) == 0)
        result = operator new(x24_1)
        *(arg1 + 0x60) = result
        *(arg1 + 0x68) = result
        *(arg1 + 0x70) = result + x24_1
        int64_t x1_2 = *(entry_x1 + 0x60)
        int64_t result_2 = result
        size_t x20_2 = *(entry_x1 + 0x68) - x1_2
        
        if (x20_2 s>= 1)
            result = memcpy(result_2, x1_2, x20_2)
            result_2 += x20_2
        
        *(arg1 + 0x68) = result_2
        return result
else
    if ((x23 & 0xffffffff80000000) == 0)
        result = operator new(x23)
        *(arg1 + 0x48) = result
        *(arg1 + 0x50) = result
        *(arg1 + 0x58) = result + x23
        int64_t x1_1 = *(entry_x1 + 0x48)
        int64_t result_1 = result
        size_t x23_1 = *(entry_x1 + 0x50) - x1_1
        
        if (x23_1 s>= 1)
            result = memcpy(result_1, x1_1, x23_1)
            result_1 += x23_1
        
        *(arg1 + 0x50) = result_1
        goto label_ef52f0
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()

int64_t* x0_7 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
void* x8_7 = *entry_x22

if (x8_7 != 0)
    *(arg1 + 0x68) = x8_7
    operator delete(x8_7)

void* x0_9 = *(arg1 + 0x48)

if (x0_9 != 0)
    *(arg1 + 0x50) = x0_9
    operator delete(x0_9)

void* x0_10 = *(arg1 + 0x30)
*(arg1 + 8) = _vtable_for_Botan::AlgorithmIdentifier + 0x10

if (x0_10 != 0)
    *(arg1 + 0x38) = x0_10
    operator delete(x0_10)

void* x0_11 = *(arg1 + 0x18)
*(arg1 + 0x10) = _vtable_for_Botan::OID + 0x10

if (x0_11 != 0)
    *(arg1 + 0x20) = x0_11
    operator delete(x0_11)

sub_1101e04(x0_7)
noreturn
