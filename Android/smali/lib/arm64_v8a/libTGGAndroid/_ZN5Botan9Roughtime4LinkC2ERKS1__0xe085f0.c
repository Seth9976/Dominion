// 函数: _ZN5Botan9Roughtime4LinkC2ERKS1_
// 地址: 0xe085f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(Botan::Roughtime::Link, 0x20) entry_x21
void* __offset(Botan::Roughtime::Link, 0x20) var_18 = entry_x21
*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int64_t* entry_x1
int64_t x9 = *entry_x1
int64_t x8 = entry_x1[1]
Botan::Roughtime::Link const& x19 = arg1
uint64_t x22 = x8 - x9
int128_t v0
int128_t v1
int128_t v2
int128_t v3

if (x8 == x9)
label_e08664:
    entry_x21 = x19 + 0x20
    __builtin_memset(entry_x21, 0, 0x18)
    *(entry_x21 - 8) = _vtable_for_Botan::Ed25519_PublicKey + 0x88
    int64_t x9_1 = entry_x1[4]
    int64_t x8_4 = entry_x1[5]
    uint64_t x23_1 = x8_4 - x9_1
    
    if (x8_4 == x9_1)
    label_e086c4:
        v1 = *(entry_x1 + 0x58)
        v2 = *(entry_x1 + 0x48)
        v3 = *(entry_x1 + 0x38)
        *(x19 + 0x68) = *(entry_x1 + 0x68)
        *(x19 + 0x58) = v1
        *(x19 + 0x48) = v2
        *(x19 + 0x38) = v3
        return 
    
    if ((x23_1 & 0xffffffff80000000) == 0)
        arg1, v0, v1, v2, v3 = operator new(x23_1)
        *(x19 + 0x20) = arg1
        *(x19 + 0x28) = arg1
        *(x19 + 0x30) = arg1 + x23_1
        int64_t x1_1 = entry_x1[4]
        Botan::Roughtime::Link const& x22_2 = arg1
        size_t x21_2 = entry_x1[5] - x1_1
        
        if (x21_2 s>= 1)
            arg1, v0, v1, v2, v3 = memcpy(x22_2, x1_1, x21_2)
            x22_2 += x21_2
        
        *(x19 + 0x28) = x22_2
        goto label_e086c4
else
    if ((x22 & 0xffffffff80000000) == 0)
        arg1, v0, v1, v2, v3 = operator new(x22)
        *x19 = arg1
        *(x19 + 8) = arg1
        *(x19 + 0x10) = arg1 + x22
        int64_t x1 = *entry_x1
        Botan::Roughtime::Link const& x21 = arg1
        size_t x22_1 = entry_x1[1] - x1
        
        if (x22_1 s>= 1)
            arg1, v0, v1, v2, v3 = memcpy(x21, x1, x22_1)
            x21 += x22_1
        
        *(x19 + 8) = x21
        goto label_e08664
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
int64_t* x0_6 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
void* x8_7 = *entry_x21

if (x8_7 != 0)
    *(x19 + 0x28) = x8_7
    operator delete(x8_7)

void* x0_8 = *x19

if (x0_8 != 0)
    *(x19 + 8) = x0_8
    operator delete(x0_8)

sub_1101e04(x0_6)
noreturn
