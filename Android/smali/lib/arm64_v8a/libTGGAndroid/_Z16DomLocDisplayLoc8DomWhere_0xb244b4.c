// 函数: _Z16DomLocDisplayLoc8DomWhere
// 地址: 0xb244b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 - 0x454 u> 0x1e)
label_b244f0:
    uint64_t x8 = zx.q(arg1 - 0x3e9)
    
    if (x8.d u> 3)
        if (arg1 == 2)
            return 0xa
        
        int64_t lr
        int64_t var_10 = lr
        pthread_kill(pthread_self(), 6)
        int64_t x0_7
        DomGfx* x1
        DomGfx* x2
        DomPileLoc* x3
        bool x4
        x0_7, x1, x2, x3, x4 = XNoReturn()
        return DomMoveDisplay(x0_7, x1, x2, x3, x4) __tailcall
    
    switch (x8)
        case 1
            return 0xb
        case 2
            return 0xc
        case 3
            return 0xd
else if ((1 << (arg1 - 0x454) & 0x44006001) == 0)
    if (arg1 == 0x45f)
        return 0xe
    
    goto label_b244f0

return 0xf
