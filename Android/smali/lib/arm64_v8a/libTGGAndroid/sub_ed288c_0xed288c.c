// 函数: sub_ed288c
// 地址: 0xed288c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0

if ((zx.d(*(arg2 + 0x148)) & 1) == 0)
    x0 = *(arg2 + 0x128)
    
    if (x0 != 0)
        goto label_ed28cc
    
    goto label_ed28a0

operator delete(*(arg2 + 0x158))
x0 = *(arg2 + 0x128)
int64_t* x0_2

if (x0 != 0)
label_ed28cc:
    *(arg2 + 0x130) = x0
    operator delete(x0)
    x0_2 = *(arg2 + 0x120)
    *(arg2 + 0x120) = 0
    
    if (x0_2 == 0)
        goto label_ed28ac
    
    goto label_ed28e8

label_ed28a0:
x0_2 = *(arg2 + 0x120)
*(arg2 + 0x120) = 0
int64_t* x0_3

if (x0_2 != 0)
label_ed28e8:
    (*(*x0_2 + 0x10))()
    x0_3 = *arg3
    *arg3 = 0
    
    if (x0_3 != 0)
        (*(*x0_3 + 0x10))()
else
label_ed28ac:
    x0_3 = *arg3
    *arg3 = 0
    
    if (x0_3 != 0)
        (*(*x0_3 + 0x10))()
void* x0_4 = *(arg2 + 0x10)
*(arg2 + 0x28) = arg6 + 0x208
*(arg2 + 8) = arg6 + 0xd0

if (x0_4 != 0)
    int64_t x8_6 = *(arg2 + 0x20)
    *(arg2 + 0x18) = x0_4
    Botan::deallocate_memory(x0_4, x8_6 - x0_4, 1)

Botan::XMSS_WOTS_PublicKey::~XMSS_WOTS_PublicKey()
Botan::XMSS_PublicKey::~XMSS_PublicKey()
sub_1101e04(arg1)
noreturn
