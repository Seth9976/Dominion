// 函数: _Z22RandomPileToRandomCardR9RandomPCG11DomCardEnum
// 地址: 0xbf9688
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = arg2
int64_t x19_1

if (arg2 s> 0x1018)
    uint64_t x9_1 = zx.q(x8 - 0x1019)
    
    if (x9_1.d u<= 0x19)
        switch (x9_1)
            case 0
                x19_1 = 8
                goto label_bf977c
            case 5
                x19_1 = 9
                goto label_bf977c
            case 0xa
                x19_1 = 0xa
                goto label_bf977c
            case 0xf
                x19_1 = 0xb
                goto label_bf977c
            case 0x14
                x19_1 = 0xc
                goto label_bf977c
            case 0x19
                x19_1 = 0xd
                goto label_bf977c
    else if (x8 == 0x1305)
        x19_1 = 7
    label_bf977c:
        int32_t x1 = *(x19_1 * 0x48 + &data_802460)
        
        if (x1 != 0)
            x8 = *(&data_80245c + x19_1 * 0x48 + (sx.q(RandomInt(arg1, x1)) << 2) + 8)
else
    uint64_t x9 = zx.q(x8 - 0xc04)
    
    if (x9.d u<= 0xc)
        switch (x9)
            case 0
                x19_1 = 2
                goto label_bf977c
            case 2
                x19_1 = 3
                goto label_bf977c
            case 4
                x19_1 = 4
                goto label_bf977c
            case 6
                x19_1 = 1
                goto label_bf977c
            case 7
                x19_1 = 5
                goto label_bf977c
            case 0xc
                x19_1 = 6
                goto label_bf977c
    else if (x8 == 0x91c)
        x19_1 = 0
        goto label_bf977c
return zx.q(x8)
