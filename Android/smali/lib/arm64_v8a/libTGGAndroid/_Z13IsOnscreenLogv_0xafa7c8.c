// 函数: _Z13IsOnscreenLogv
// 地址: 0xafa7c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*(GetLocalSettings() + 0x38)) == 0)
    return 0

if (*(GetClient() + 0x5068) != 1)
    return 1

int64_t var_8
int32_t x0_4 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_8)
return zx.q(*(gDomClient + 0x205cc) s>= x0_4 ? 1 : 0) | zx.q(var_8 == 0 ? 1 : 0)
