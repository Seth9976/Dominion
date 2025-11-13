// 函数: _Z14LayoutExtraIdx11LayoutStylei
// 地址: 0xaf9374
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_6
int32_t x9_2
int32_t x9_19

switch (arg1)
    case 1, 2, 3
        if (arg2 s< 5)
            return 1 | arg2 << 0x20
        
        if (arg2 s<= 9)
            return 1 | zx.q(arg2 + 3) << 0x20
        
        if (arg2 s<= 0xe)
            return 1 | zx.q(arg2 + 6) << 0x20
    case 4, 0x15, 0x29
        if (arg2 s<= 7)
            return zx.q(arg2 * 3) << 0x20
        
        int32_t x9_1 = arg2 * 3
        
        if (arg2 s> 0xf)
            return zx.q(x9_1 - 0x2e) << 0x20
        
        return zx.q(x9_1 - 0x17) << 0x20
    case 8, 0xc, 0x26
        return zx.q(arg2 * 3 + 0xc) << 0x20
    case 9, 0xd, 0x27
        if (arg2 s> 3)
            return 1 | zx.q(arg2 - 4) << 0x20
        
        return zx.q(arg2 * 3 + 0xc) << 0x20
    case 0xe
        if (arg2 s<= 3)
            return zx.q(arg2 * 3 + 0xc) << 0x20
        
        if (arg2 s> 9)
            return 1 | zx.q(arg2 - 2) << 0x20
        
        return 1 | zx.q(arg2 - 4) << 0x20
    case 0x10, 0x37, 0x38, 0x39, 0x46, 0x47, 0x48
        return 1 | arg2 << 0x20
    case 0x11
        int32_t x8_3
        
        if (arg2 s< 0)
            x8_3 = arg2 + 1
        else
            x8_3 = arg2
        
        return 1 | zx.q(((arg2 - (x8_3 & 0x1ffffffe)) << 3) + (x8_3 s>> 1)) << 0x20
    case 0x16
        if (arg2 s<= 7)
            return zx.q(arg2 * 3) << 0x20
        
        if (arg2 s> 0xf)
            return 1 | zx.q(arg2 - 0x10) << 0x20
        
        return zx.q(arg2 * 3 - 0x17) << 0x20
    case 0x17
        x9_2 = arg2 * 3
        
        if (arg2 s<= 3)
            return zx.q(x9_2 + 0xc) << 0x20
        
        return zx.q(x9_2 + 1) << 0x20
    case 0x18, 0x24
        if (arg2 s<= 3)
            return zx.q(arg2 * 3 + 0xc) << 0x20
        
        if (arg2 s> 7)
            return 1 | zx.q(arg2 - 8) << 0x20
        
        return zx.q(arg2 * 3 + 1) << 0x20
    case 0x19
        x9_2 = arg2 * 3
        
        if (arg2 s> 3)
            return zx.q(x9_2 - 0xb) << 0x20
        
        return zx.q(x9_2 + 0xc) << 0x20
    case 0x1a
        if (arg2 s<= 3)
            return zx.q(arg2 * 3 + 0xc) << 0x20
        
        if (arg2 s> 0xb)
            return 1 | zx.q(arg2 - 0xc) << 0x20
        
        return zx.q(arg2 * 3 - 0xb) << 0x20
    case 0x1b
        return sub_af9af8(arg2 * 3 + 0xd) __tailcall
    case 0x1d
        if (arg2 s<= 3)
            return zx.q(arg2 * 3 + 0xc) << 0x20
        
        if (arg2 s> 7)
            return 2 | zx.q(arg2 - 8) << 0x20
        
        return zx.q(arg2 * 3 + 1) << 0x20
    case 0x20
        return 2 | arg2 << 0x20
    case 0x21
        int64_t x8_4
        
        x8_4 = arg2 s< 8 ? 2 : 1
        
        uint64_t x1_10
        
        if (arg2 s< 8)
            x1_10 = zx.q(arg2)
        else
            x1_10 = zx.q(arg2 - 8)
        
        return x8_4 | x1_10 << 0x20
    case 0x22
        if (arg2 s< 8)
            return 2 | arg2 << 0x20
        
        if (arg2 s> 0xe)
            return 1 | zx.q(arg2 - 7) << 0x20
        
        return 1 | zx.q(arg2 - 8) << 0x20
    case 0x23
        int32_t x9_11 = arg2 * 3
        int32_t x9_12
        
        if (arg2 s<= 3)
            x9_12 = x9_11 + 0xc
        else
            x9_12 = x9_11 + 1
        
        return zx.q(x9_12) << 0x20
    case 0x28
        if (arg2 s<= 3)
            return zx.q(arg2 * 3 + 0xc) << 0x20
        
        if (arg2 s<= 0xa)
            return 1 | zx.q(arg2 - 4) << 0x20
        
        return 1 | zx.q(arg2 - 3) << 0x20
    case 0x2a
        uint64_t x1_19
        
        if (arg2 s< 0x19)
            x1_19 = zx.q(arg2)
        else
            x1_19 = zx.q(arg2 - 0x18)
        
        return zx.q(arg2 s> 0x18 ? 1 : 0) | x1_19 << 0x20
    case 0x2b
        if (arg2 s<= 3)
            return zx.q(arg2 * 3 + 0xc) << 0x20
        
        x9_2 = arg2 * 3
        
        if (arg2 s> 7)
            return zx.q(x9_2 - 0x16) << 0x20
        
        return zx.q(x9_2 + 1) << 0x20
    case 0x2e, 0x3d
        if (arg2 s<= 3)
            return zx.q(arg2 * 3 + 0xc) << 0x20
        
        x9_2 = arg2 * 3
        
        if (arg2 s<= 7)
            return zx.q(x9_2 + 1) << 0x20
        
        return zx.q(x9_2 - 0xa) << 0x20
    case 0x32
        return 2 | (arg2 + 4) << 0x20
    case 0x33
        if (arg2 s<= 3)
            return 2 | zx.q(arg2 + 4) << 0x20
        
        return 1 | zx.q(arg2 - 4) << 0x20
    case 0x3a
        if (arg2 s<= 3)
            return zx.q(arg2 * 3 + 0xc) << 0x20
        
        x9_2 = arg2 * 3
        
        if (arg2 s> 0xb)
            return zx.q(x9_2 - 0x22) << 0x20
        
        return zx.q(x9_2 - 0xb) << 0x20
    case 0x3b
        x8_6 = arg2 - 0x14
        
        if (arg2 s<= 0x14)
            return zx.q(arg2 + 4) << 0x20
        
        return 1 | zx.q((x8_6 << 1) s/ 3 + x8_6) << 0x20
    case 0x3c
        x8_6 = arg2 - 0x14
        
        if (arg2 s<= 0x14)
            return zx.q(arg2 + 4) << 0x20
        
        return 1 | zx.q(x8_6 s/ 3 + x8_6) << 0x20
    case 0x3e
        if (arg2 s<= 3)
            return zx.q(arg2 * 3 + 0xc) << 0x20
        
        if (arg2 s<= 7)
            return zx.q(arg2 * 3 + 1) << 0x20
        
        if (arg2 s> 0xb)
            return 1 | zx.q(arg2 - 0xc) << 0x20
        
        return zx.q(arg2 * 3 - 0xa) << 0x20
    case 0x3f
        if (arg2 s<= 4)
            return zx.q(arg2 + 4) << 0x20
        
        if (arg2 s<= 8)
            return zx.q(arg2 + 8) << 0x20
        
        x8_6 = arg2 - 0xc
        
        if (arg2 s<= 0xc)
            return zx.q(arg2 + 0xc) << 0x20
        
        return 1 | zx.q(x8_6 s/ 3 + x8_6) << 0x20
    case 0x40
        if (arg2 s<= 4)
            return zx.q(arg2 + 4) << 0x20
        
        if (arg2 s<= 8)
            return zx.q(arg2 + 8) << 0x20
        
        if (arg2 s> 0xc)
            return 1 | zx.q(arg2 - 0xc) << 0x20
        
        return zx.q(arg2 + 0xc) << 0x20
    case 0x42, 0x43
        if (arg2 s<= 3)
            return sub_af9af8(arg2 * 3 + 0xd) __tailcall
        
        if (arg2 s<= 7)
            return sub_af9af8(arg2 * 3 + 2) __tailcall
        
        return 1 | zx.q(arg2 - 8) << 0x20
    case 0x4a
        x9_19 = 4
    label_af97cc:
        return 1 | ((7 & zx.q(x9_19)) | zx.q((0x1fffffff & arg2) << 3)) << 0x20
    case 0x4b
        if (arg2 s<= 2)
            x9_19 = 3
            goto label_af97cc
        
        if (arg2 s<= 5)
            return 1 | zx.q((arg2 << 3) - 0x14) << 0x20
    case 0x4c
        if (arg2 s<= 2)
            x9_19 = 2
            goto label_af97cc
        
        if (arg2 s<= 5)
            return 1 | zx.q((arg2 << 3) - 0x15) << 0x20
        
        if (arg2 s<= 8)
            return 1 | zx.q((arg2 << 3) - 0x2c) << 0x20
    case 0x4d
        if (arg2 s<= 7)
            return zx.q(arg2 * 3) << 0x20
        
        if (arg2 s<= 0xb)
            return 1 | zx.q((arg2 << 3) - 0x3b) << 0x20

pthread_kill(pthread_self(), 6)
return LayoutBaneStyle(XNoReturn()) __tailcall
