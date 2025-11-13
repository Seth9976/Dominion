// 函数: _ZNK5Botan6ChaCha15valid_iv_lengthEm
// 地址: 0xd010b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x1
int64_t x8_1 = ror.q(entry_x1, 2)

if (x8_1 u> 6)
    return 0

return zx.q(0x4d u>> x8_1.d) & 1
