// 函数: sub_eceb18
// 地址: 0xeceb18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_7 = *arg4

if (x8_7 != 0)
    int64_t x9_1 = *(arg2 + 0x170)
    *(arg2 + 0x168) = x8_7
    Botan::deallocate_memory(x8_7, x9_1 - x8_7, 1)

void* x0_1

if ((zx.d(*(arg2 + 0x148)) & 1) == 0)
    x0_1 = *(arg2 + 0x128)
    
    if (x0_1 != 0)
        goto label_eceb84
    
    goto label_eceb58

operator delete(*(arg2 + 0x158))
x0_1 = *(arg2 + 0x128)
int64_t* x0_3

if (x0_1 != 0)
label_eceb84:
    *(arg2 + 0x130) = x0_1
    operator delete(x0_1)
    x0_3 = *(arg2 + 0x120)
    *(arg2 + 0x120) = 0
    
    if (x0_3 == 0)
        goto label_eceb64
    
    goto label_eceba0

label_eceb58:
x0_3 = *(arg2 + 0x120)
*(arg2 + 0x120) = 0
int64_t* x0_4

if (x0_3 != 0)
label_eceba0:
    (*(*x0_3 + 0x10))()
    x0_4 = *arg3
    *arg3 = 0
    
    if (x0_4 != 0)
        (*(*x0_4 + 0x10))()
else
label_eceb64:
    x0_4 = *arg3
    *arg3 = 0
    
    if (x0_4 != 0)
        (*(*x0_4 + 0x10))()
void* x0_5 = *(arg2 + 0x10)
*(arg2 + 0x28) = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0x208
*(arg2 + 8) = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0xd0

if (x0_5 != 0)
    int64_t x8_6 = *(arg2 + 0x20)
    *(arg2 + 0x18) = x0_5
    Botan::deallocate_memory(x0_5, x8_6 - x0_5, 1)

Botan::XMSS_WOTS_PublicKey::~XMSS_WOTS_PublicKey()
sub_1101e04(arg1)
noreturn
