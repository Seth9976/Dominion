// 函数: _ZNK5Botan9Roughtime5Chain10next_nonceERKNS0_5NonceE
// 地址: 0xe08288
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9_1 = *(arg1 + 8)
Botan::Roughtime::Nonce* entry_x1

if (*arg1 != x9_1)
    return Botan::Roughtime::nonce_from_blind(x9_1 - 0x78, entry_x1) __tailcall

int128_t v0 = *(entry_x1 + 0x30)
int128_t v3 = *entry_x1
int128_t v2 = *(entry_x1 + 0x10)
int128_t* entry_x8
entry_x8[2] = *(entry_x1 + 0x20)
entry_x8[3] = v0
*entry_x8 = v3
entry_x8[1] = v2
