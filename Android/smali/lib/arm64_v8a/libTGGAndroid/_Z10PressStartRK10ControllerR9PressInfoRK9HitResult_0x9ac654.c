// 函数: _Z10PressStartRK10ControllerR9PressInfoRK9HitResult
// 地址: 0x9ac654
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_30
ControllerCursorPosition(arg1, &var_30)
int64_t* x0
int128_t v0
x0, v0 = GetClient()
int64_t x8 = var_30
*(arg2 + 0x88) = *x0
*(arg2 + 0x90) = x8
*(arg2 + 0x98) = x8
*(arg2 + 0x10) = *(arg3 + 8)
v0 = *(arg3 + 0x18)
*(arg2 + 0x30) = *(arg3 + 0x28)
*(arg2 + 0x20) = v0
*(arg2 + 0x38) = *(arg3 + 0x30)
*(arg2 + 0x50) = *(arg3 + 8)
v0 = *(arg3 + 0x18)
*(arg2 + 0x70) = *(arg3 + 0x28)
*(arg2 + 0x60) = v0
*(arg2 + 0x78) = *(arg3 + 0x30)
int32_t var_24
Cardset* var_18
int64_t result

if ((CardsetIsZoomedAny(&var_18, &var_24) & 1) != 0)
    result = 0x40
else if (*(arg3 + 8) != 3)
    if ((GameDlgManagerDialogActive(5) & 1) == 0 || (*(arg3 + 8) == 2 && *(arg3 + 0x28) == 1))
        result = GameSpecific_HitCalcPressStyle(arg3)
    else
        result = 0xc0
else
    result = 0xc6

*arg2 = 1
*(arg2 + 4) = result.d
return result
