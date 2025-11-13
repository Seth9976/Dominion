// 函数: _Z21ProfileAddEntitlementR11GameProfileRK18EntitlementMessage
// 地址: 0x9de0ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg2 + 0x1c)

if (x8 == 0)
    return 

int32_t x9_1 = *(arg2 + 0x18)
int32_t var_38_1 = x8
int32_t var_40 = *(arg1 + 0x42ac)
int32_t var_3c_1 = x9_1
int32_t var_34_1 = *(arg2 + 0x20)
int128_t var_30_1 = *arg2
*(arg2 + 0x10)
char var_48
XString::XString(&var_48)

if ((CryptoVerify(&var_40, 0x20, &var_48, GameSpecific_PublicKey()) & 1) != 0)
    uint64_t x9_2 = zx.q(*(arg1 + 0x5748))
    *(arg1 + 0x78a0) = 0
    void* __offset(GameProfile, 0x4348) x8_2
    
    if (x9_2.d s< 1)
    label_9de158:
        *(arg1 + 0x5748) = x9_2.d + 1
        x8_2 = arg1 + muls.dp.d(x9_2.d, 0x28) + 0x4348
    else
        x8_2 = arg1 + 0x4348
        uint64_t x11_1 = x9_2
        
        while (*x8_2 != *(arg2 + 0x18))
            uint64_t temp0_1 = x11_1
            x11_1 -= 1
            x8_2 += 0x28
            
            if (temp0_1 == 1)
                goto label_9de158
    
    *x8_2 = *(arg2 + 0x18)
    *(x8_2 + 4) = *(arg2 + 0x1c)
    *(x8_2 + 8) = *(arg2 + 0x20)
    *(x8_2 + 0xc) = *(arg2 + 0x24)
    *(x8_2 + 0x10) = *arg2
    *(x8_2 + 0x18) = *(arg2 + 8)
    *(arg2 + 0x10)
    XString::operator=(x8_2 + 0x20)

XString::~XString()
