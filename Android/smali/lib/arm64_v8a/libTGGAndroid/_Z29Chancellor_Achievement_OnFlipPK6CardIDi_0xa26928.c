// 函数: _Z29Chancellor_Achievement_OnFlipPK6CardIDi
// 地址: 0xa26928
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x0 = DomAchievementDataGet()
int32_t x0_1 = CurrentTurnUI()

if (x0_1 == 5)
    x0[2] = 1
label_a26970:
    
    if (zx.d(*x0) != 0)
        goto label_a26978
else if (x0_1 == 4)
    x0[1] = 1
    
    if (zx.d(*x0) != 0)
        goto label_a26978
else
    if (x0_1 != 3)
        goto label_a26970
    
    *x0 = 1
label_a26978:
    
    if (zx.d(x0[1]) != 0)
        return zx.q(zx.d(x0[2]) != 0 ? 1 : 0)

return 0
