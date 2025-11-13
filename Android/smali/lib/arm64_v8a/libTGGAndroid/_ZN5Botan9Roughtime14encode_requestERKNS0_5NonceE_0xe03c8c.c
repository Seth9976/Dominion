// 函数: _ZN5Botan9Roughtime14encode_requestERKNS0_5NonceE
// 地址: 0xe03c8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v4 = data_83a9b4
int128_t v1 = *(arg1 + 0x30)
int128_t v2 = *arg1
int128_t v3 = *(arg1 + 0x10)
int128_t* entry_x8
entry_x8[3] = *(arg1 + 0x20)
entry_x8[4] = v1
entry_x8[2] = v3
*entry_x8 = v4
entry_x8[1] = v2
return memset(&entry_x8[5], 0, 0x3b0) __tailcall
