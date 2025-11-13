// 函数: _Z14CalcPressStyleRK9HitResult
// 地址: 0x9ac5c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_1c
Cardset* var_18

if ((CardsetIsZoomedAny(&var_18, &var_1c) & 1) != 0)
    return 0x40

if (*(arg1 + 8) == 3)
    return 0xc6

if ((GameDlgManagerDialogActive(5) & 1) != 0 && (*(arg1 + 8) != 2 || *(arg1 + 0x28) != 1))
    return 0xc0

return GameSpecific_HitCalcPressStyle(arg1)
