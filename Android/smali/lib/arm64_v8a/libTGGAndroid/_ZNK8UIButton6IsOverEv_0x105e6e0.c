// 函数: _ZNK8UIButton6IsOverEv
// 地址: 0x105e6e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0

if (zx.d(*(entry_x0 + 0xab)) != 0)
    return 1

if (zx.d(*(entry_x0 + 0xac)) == 0)
    return zx.q(zx.d(*(entry_x0 + 0xad)) != 0 ? 1 : 0)

return 1
