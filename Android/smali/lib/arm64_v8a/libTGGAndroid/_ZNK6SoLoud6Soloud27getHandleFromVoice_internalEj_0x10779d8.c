// 函数: _ZNK6SoLoud6Soloud27getHandleFromVoice_internalEj
// 地址: 0x10779d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1
void* x8 = *(arg1 + (zx.q(entry_x1) << 3) + 0x98)

if (x8 == 0)
    return 0

return zx.q(entry_x1 + 1) | zx.q(*(x8 + 8) << 0xc)
