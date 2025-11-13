// 函数: _ZN5Botan21Curve25519_PrivateKeyC1ERKNS_19AlgorithmIdentifierERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xd0b5dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x26 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x26 + 0x28)
*(arg1 + 0x20) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::Curve25519_PrivateKey + 0x98
*(arg1 + 8) = 0
*(arg1 + 0x30) = 0
*(arg1 + 0x38) = _vtable_for_Botan::Curve25519_PrivateKey + 0x1f8
*(arg1 + 0x28) = 0
int128_t var_90
Botan::BER_Decoder::BER_Decoder(&var_90)
Botan::BER_Decoder::decode(&var_90, arg1 + 0x20, 4, 4)
int128_t v0_1
int128_t v1_1
int64_t i

do
    void var_94
    int64_t* var_68
    i, v0_1, v1_1 = (**var_68)(var_68, &var_94, 1)
while (i != 0)
int64_t var_60_1 = 0
int64_t* var_60

if (var_60 != 0)
    v0_1, v1_1 = (*(*var_60 + 0x38))()

void* var_80

if (var_80 != 0)
    void* var_78_1 = var_80
    int64_t var_70
    v0_1, v1_1 = Botan::deallocate_memory(var_80, var_70 - var_80, 1)

sub_d0a5c4(*(arg1 + 0x28) - *(arg1 + 0x20))
void* x21 = *(arg1 + 8)
int64_t x0_6 = *(arg1 + 0x10)
size_t x22 = x0_6 - x21

if (x22 u<= 0x1f)
    int64_t x8_8 = *(arg1 + 0x18)
    
    if (x8_8 - x0_6 u>= 0x20 - x22)
        v0_1, v1_1 = memset(x0_6, 0, 0x20 - x22)
        *(arg1 + 0x10) = x0_6 + 0x20 - x22
    else
        void* x8_9 = x8_8 - x21
        int64_t x11_1 = x8_9 << 1
        int64_t x9_3
        
        x9_3 = x11_1 u> 0x20 ? x11_1 : 0x20
        
        int64_t x25_1
        
        x25_1 = x8_9 u< 0x3fffffffffffffff ? x9_3 : 0x7fffffffffffffff
        
        int64_t x0_8 = operator new(x25_1)
        v0_1, v1_1 = memset(x0_8 + x22, 0, 0x20 - x22)
        
        if (x22 s>= 1)
            v0_1, v1_1 = memcpy(x0_8, x21, x22)
        
        *(arg1 + 8) = x0_8
        *(arg1 + 0x10) = x0_8 + 0x20
        *(arg1 + 0x18) = x0_8 + x25_1
        
        if (x21 != 0)
            v0_1, v1_1 = operator delete(x21)
else if (x22 != 0x20)
    *(arg1 + 0x10) = x21 + 0x20

uint8_t* x0_12 = *(arg1 + 8)
v1_1 = data_7b0130
uint8_t* x1_6 = *(arg1 + 0x20)
var_90 = data_7b0120
var_80.o = v1_1
int64_t result = Botan::curve25519_donna(x0_12, x1_6, &var_90)

if (*(x26 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
