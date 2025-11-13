// 函数: _Z17HasActiveTutorialv
// 地址: 0xae8144
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(GetClient() + 0x5068) != 1)
    return 0

DomTutorial* var_8
return zx.q(GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_8) s> 0 ? 1 : 0)
