// 函数: _Z20Riverboat_SetupFiter11DomCardEnum
// 地址: 0xac3260
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d

if ((PregameIsLandscape(arg1) & 1) == 0)
    if (x19 s<= 0xb12)
        if (x19 != 0x716 && x19 != 0x91e)
        label_ac32c0:
            
            if ((PregameCostExactly(zx.q(x19), 5) & 1) != 0
                    && (PregameCardIs(zx.q(x19), 4) & 1) != 0
                    && (PregameCardIs(zx.q(x19), 0x400000000000) & 1) == 0)
                return (zx.q(PregameCardIs(zx.q(x19), 0x80)) ^ 1) & 1
    else if (x19 != 0xb13 && x19 != 0xb18 && x19 != 0xc2c)
        goto label_ac32c0

return 0
