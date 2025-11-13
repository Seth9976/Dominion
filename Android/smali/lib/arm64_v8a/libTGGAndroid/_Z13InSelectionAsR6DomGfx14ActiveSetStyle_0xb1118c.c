// 函数: _Z13InSelectionAsR6DomGfx14ActiveSetStyle
// 地址: 0xb1118c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_14

if ((IsCardInActiveSet(arg1, &var_14, false) & 1) == 0)
    return 0

if (arg2 == 1 && var_14 - 1 u< 3)
    return 1

return 0
