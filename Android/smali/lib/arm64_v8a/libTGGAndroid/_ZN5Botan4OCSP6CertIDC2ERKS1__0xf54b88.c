// 函数: _ZN5Botan4OCSP6CertIDC2ERKS1_
// 地址: 0xf54b88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(Botan::OCSP::CertID, 0x60) entry_x22
void* __offset(Botan::OCSP::CertID, 0x60) var_20 = entry_x22
*arg1 = _vtable_for_Botan::OCSP::CertID + 0x10
Botan::AlgorithmIdentifier::AlgorithmIdentifier(arg1 + 8)
__builtin_memset(arg1 + 0x48, 0, 0x18)
void* entry_x1
int64_t x9 = *(entry_x1 + 0x48)
int64_t x8_1 = *(entry_x1 + 0x50)
uint64_t x23 = x8_1 - x9

if (x8_1 == x9)
label_f54c14:
    entry_x22 = arg1 + 0x60
    __builtin_memset(entry_x22, 0, 0x18)
    int64_t x9_1 = *(entry_x1 + 0x60)
    int64_t x8_4 = *(entry_x1 + 0x68)
    uint64_t x24_1 = x8_4 - x9_1
    
    if (x8_4 == x9_1)
    label_f54c70:
        int64_t result =
            std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1 + 0x78)
        *(arg1 + 0x90) = *(entry_x1 + 0x90)
        *(arg1 + 0x98) = *(entry_x1 + 0x98)
        return result
    
    if ((x24_1 & 0xffffffff80000000) == 0)
        int64_t x0_5 = operator new(x24_1)
        *(arg1 + 0x60) = x0_5
        *(arg1 + 0x68) = x0_5
        *(arg1 + 0x70) = x0_5 + x24_1
        int64_t x1_2 = *(entry_x1 + 0x60)
        int64_t x23_2 = x0_5
        size_t x24_2 = *(entry_x1 + 0x68) - x1_2
        
        if (x24_2 s>= 1)
            memcpy(x23_2, x1_2, x24_2)
            x23_2 += x24_2
        
        *(arg1 + 0x68) = x23_2
        goto label_f54c70
else
    if ((x23 & 0xffffffff80000000) == 0)
        int64_t x0_2 = operator new(x23)
        *(arg1 + 0x48) = x0_2
        *(arg1 + 0x50) = x0_2
        *(arg1 + 0x58) = x0_2 + x23
        int64_t x1_1 = *(entry_x1 + 0x48)
        int64_t x22 = x0_2
        size_t x23_1 = *(entry_x1 + 0x50) - x1_1
        
        if (x23_1 s>= 1)
            memcpy(x22, x1_1, x23_1)
            x22 += x23_1
        
        *(arg1 + 0x50) = x22
        goto label_f54c14
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()

int64_t* x0_10 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
void* x8_9 = *entry_x22

if (x8_9 != 0)
    *(arg1 + 0x68) = x8_9
    operator delete(x8_9)

void* x0_12 = *(arg1 + 0x48)

if (x0_12 != 0)
    *(arg1 + 0x50) = x0_12
    operator delete(x0_12)

void* x0_13 = *(arg1 + 0x30)
*(arg1 + 8) = _vtable_for_Botan::AlgorithmIdentifier + 0x10

if (x0_13 != 0)
    *(arg1 + 0x38) = x0_13
    operator delete(x0_13)

void* x0_14 = *(arg1 + 0x18)
*(arg1 + 0x10) = _vtable_for_Botan::OID + 0x10

if (x0_14 != 0)
    *(arg1 + 0x20) = x0_14
    operator delete(x0_14)

sub_1101e04(x0_10)
noreturn
