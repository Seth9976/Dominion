// 函数: _Z32TryInvalidatePresubmittedActionsR7DomGame9AbilityID
// 地址: 0xbcd17c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_428 = arg2
int32_t var_28 = 1
int32_t x0 = ActionsAreMinor(arg1, &var_428)

if ((x0 & 1) == 0)
    InvalidateSubmittedActions()

return zx.q(not.d(x0)) & 1
