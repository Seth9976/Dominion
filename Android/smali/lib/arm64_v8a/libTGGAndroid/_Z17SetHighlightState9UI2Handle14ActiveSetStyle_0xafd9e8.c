// 函数: _Z17SetHighlightState9UI2Handle14ActiveSetStyle
// 地址: 0xafd9e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 u<= 0x22)
    int32_t x19_1 = arg1.d
    UI2StateDecl* x20_1
    
    switch (arg2)
        case 0
            return 
        case 1, 4, 0x22
            return UI2SetState(zx.q(x19_1), &data_182b2a8, 0xffffffff, 0) __tailcall
        case 2
            return UI2SetState(zx.q(x19_1), &data_182b398, 0xffffffff, 0) __tailcall
        case 3, 6
            return UI2SetState(zx.q(x19_1), &data_182b380, 0xffffffff, 0) __tailcall
        case 5, 7
            return UI2SetState(zx.q(x19_1), &data_182b2c0, 0xffffffff, 0) __tailcall
        case 8, 0x11, 0x13, 0x15, 0x1e
            UI2SetState(zx.q(x19_1), &data_182b368, 0xffffffff, 0)
            return UI2SetState(zx.q(x19_1), &data_182b3c8, 0xffffffff, 0) __tailcall
        case 9
            return UI2SetState(zx.q(x19_1), &data_182b2f0, 0xffffffff, 0) __tailcall
        case 0xa
            x20_1 = &data_182b2f0
            goto label_afda50
        case 0xb, 0xc, 0xe, 0x17, 0x19, 0x1b
            return UI2SetState(zx.q(x19_1), &data_182b320, 0xffffffff, 0) __tailcall
        case 0xd, 0xf, 0x18, 0x1a, 0x1c
            x20_1 = &data_182b320
        label_afda50:
            UI2SetState(zx.q(x19_1), x20_1, 0xffffffff, 0)
            return UI2SetState(zx.q(x19_1), x20_1 + 0xc0, 0xffffffff, 0) __tailcall
        case 0x10, 0x14, 0x16, 0x1d, 0x1f, 0x20
            return UI2SetState(zx.q(x19_1), &data_182b368, 0xffffffff, 0) __tailcall
        case 0x12
            return UI2SetState(zx.q(x19_1), &data_182b2d8, 0xffffffff, 0) __tailcall

pthread_kill(pthread_self(), 6)
return DomCurrentTransform(XNoReturn()) __tailcall
