// 函数: _Z21GetLocalControlSchemev
// 地址: 0x9e1094
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = zx.q(*(*gGameSettings + 0x24))

if (result.d == 3)
    return 1

if (result.d != 0)
    return result

if (GameSpecific_GameType() == 4)
    return 2

return 1
