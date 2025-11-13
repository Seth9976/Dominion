// 函数: _ZNK5Botan3TLS25Datagram_Sequence_Numbers12already_seenEm
// 地址: 0xf1bae4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_2 = *(arg1 + 0x28)
int64_t entry_x1
int64_t x8 = x8_2 - entry_x1

if (x8_2 u< entry_x1)
    return 0

if (x8 u<= 0x3f)
    return zx.q((*(arg1 + 0x30) u>> x8).d) & 1

return 1
