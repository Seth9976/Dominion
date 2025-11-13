// 函数: _Z21GetActiveTutorialStepv
// 地址: 0xae8188
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(GetClient() + 0x5068) != 1)
    return 0

int64_t var_8
int32_t x0_3 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_8)
int64_t x8_1 = sx.q(*(gDomClient + 0x205cc))

if (x8_1.d s< x0_3)
    return var_8 + x8_1 * 0xb0

return 0
