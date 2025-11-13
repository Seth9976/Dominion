// 函数: _Z5Pixiev
// 地址: 0xa957e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Card(1, 0, 0, nullptr)
Action(1, 0)
int32_t x0 = RevealBoon(0x3ee)
int64_t result = MayTrashSelf(0x3e9, true, 0x15)

if ((result.d & 1) == 0)
    if (x0 != 0)
        return DiscardBoon(zx.q(x0), 0x3ee, 0x17) __tailcall
else if (x0 != 0)
    PlayBoon(zx.q(x0), 2, 0)
    return DiscardBoon(zx.q(x0), 0x3ee, 8) __tailcall

return result
