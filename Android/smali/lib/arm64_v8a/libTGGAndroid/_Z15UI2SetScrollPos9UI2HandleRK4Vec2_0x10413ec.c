// 函数: _Z15UI2SetScrollPos9UI2HandleRK4Vec2
// 地址: 0x10413ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UI2* i = *gUI2 + mulu.dp.d(zx.d(arg1), 0x19a8)
*(i + 0x13a8) = *arg2
int64_t result = UI2ClampScrollDelta(i, nullptr)

do
    *(i + 0x1378) = 2
    i = *(i + 0x17d0)
while (i != 0)

return result
