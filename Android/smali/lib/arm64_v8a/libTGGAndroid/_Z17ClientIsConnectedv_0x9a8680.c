// 函数: _Z17ClientIsConnectedv
// 地址: 0x9a8680
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gClient

if (x8 == 0)
    return 0

return zx.q(*(x8 + 0x18) == 3 ? 1 : 0)
