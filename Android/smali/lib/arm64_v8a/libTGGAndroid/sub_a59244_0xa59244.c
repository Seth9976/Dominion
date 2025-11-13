// 函数: sub_a59244
// 地址: 0xa59244
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *arg2

if (*(DomDefGet(zx.q(x19), 0x17) + 0xc4) - 3 u> 3)
    return 0

if ((IsLandscape(zx.q(x19)) & 1) == 0)
    return zx.q(zx.d(*(DomDefGet(zx.q(x19), 0x17) + 0xc8)) u>> 2) & 1

return 0
