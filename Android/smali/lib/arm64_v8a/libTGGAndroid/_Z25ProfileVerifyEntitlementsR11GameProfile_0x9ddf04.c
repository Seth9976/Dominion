// 函数: _Z25ProfileVerifyEntitlementsR11GameProfile
// 地址: 0x9ddf04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x5748) s< 1)
    return 

GameProfile& x19_1 = arg1
int32_t i = 0
void* __offset(GameProfile, 0x42ac) x26_1 = arg1 + 0x42ac

do
    void* x8_5 = x19_1 + muls.dp.d(i, 0x28)
    int64_t x20_1 = *(x8_5 + 0x4360)
    int64_t i_1 = sx.q(i)
    int64_t x0_1
    int128_t v0_1
    int128_t v1_1
    x0_1, v0_1, v1_1 = CurrentDateTime()
    
    if (x20_1 u>= x0_1)
        int32_t var_80 = *x26_1
        v0_1.q = *(x8_5 + 0x4348)
        void* x8_7 = x19_1 + i_1 * 0x28
        int64_t var_7c_1 = v0_1.q
        int32_t var_74_1 = *(x8_7 + 0x4350)
        int128_t var_70_1 = *(x8_7 + 0x4358)
        arg1, v0_1, v1_1 = CryptoVerify(&var_80, 0x20, x8_7 + 0x4368, GameSpecific_PublicKey())
    
    if (x20_1 u< x0_1 || (arg1.d & 1) == 0)
        i -= 1
        int64_t x8_2 = sx.q(*(x26_1 + 0x149c)) - 1
        *(x26_1 + 0x149c) = x8_2.d
        int128_t* x8_3 = x19_1 + 0x4348 + x8_2 * 0x28
        v1_1 = x8_3[1]
        *(x8_5 + 0x4348) = *x8_3
        *(x8_5 + 0x4358) = v1_1
        XString::operator=(x19_1 + 0x4348 + i_1 * 0x28 + 0x20)
    
    i += 1
while (i s< *(x26_1 + 0x149c))
