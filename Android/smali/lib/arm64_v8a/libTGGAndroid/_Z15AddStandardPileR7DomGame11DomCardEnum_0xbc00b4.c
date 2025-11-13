// 函数: _Z15AddStandardPileR7DomGame11DomCardEnum
// 地址: 0xbc00b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
int64_t x1

if (*(arg1 + 0x159c) == 0)
    x1 = 7
else if (*(arg1 + 0x15ac) == 0)
    x1 = 8
else if (*(arg1 + 0x15bc) == 0)
    x1 = 9
else if (*(arg1 + 0x15cc) == 0)
    x1 = 0xa
else if (*(arg1 + 0x15dc) == 0)
    x1 = 0xb
else if (*(arg1 + 0x15ec) == 0)
    x1 = 0xc
else if (*(arg1 + 0x15fc) == 0)
    x1 = 0xd
else if (*(arg1 + 0x160c) == 0)
    x1 = 0xe
else if (*(arg1 + 0x161c) == 0)
    x1 = 0xf
else if (*(arg1 + 0x162c) == 0)
    x1 = 0x10
else
    if (*(arg1 + 0x163c) != 0)
        pthread_kill(pthread_self(), 6)
        DomGame* x0_4
        ExtraSetup* x1_2
        bool x2_2
        x0_4, x1_2, x2_2 = XNoReturn()
        return AddExtraStandardPiles(x0_4, x1_2, x2_2) __tailcall
    
    x1 = 0x11

ExtraSetup var_70
AddPileNoSetup(arg1, x1, zx.q(x20), &var_70, 0, 0)
return RunPileSetup(arg1, zx.q(x20), &var_70, 0)
