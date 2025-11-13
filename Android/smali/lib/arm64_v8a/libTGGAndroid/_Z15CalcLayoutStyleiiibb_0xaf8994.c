// 函数: _Z15CalcLayoutStyleiiibb
// 地址: 0xaf8994
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(arg1 - 0xa)

if (x8.d u<= 3)
    int32_t x9_2 = (arg4.d ^ 1) & arg5.d
    int32_t x8_1 = (arg5.d ^ 1) & arg4.d
    int64_t result
    
    switch (x8)
        case 0
            switch (arg2)
                case 0
                    if (((x8_1 | not.d(x9_2)) & 1) == 0)
                        if (arg3 s< 6)
                            return 1
                        
                        if (arg3 s< 0xb)
                            return 2
                        
                        if (arg3 s< 0x10)
                            return 3
                    else
                        if (arg3 == 0)
                            return 0
                        
                        if (arg3 s< 9)
                            return 4
                    
                    if (arg3 s< 0x11)
                        return 0x15
                    
                    if (arg3 s< 0x18)
                        return 0x16
                    
                    if (arg3 == 0x18)
                        return 0x29
                    
                    if (arg3 s< 0x21)
                        return 0x2a
                case 1
                    if (((arg3 s< 0xa ? 1 : 0) & x9_2 & 1) != 0)
                        return 0x4c
                    
                    if (arg3 s< 5)
                        return 0xc
                    
                    int32_t x8_11 = x8_1 ^ 1
                    
                    if (((arg3 s< 0xb ? 1 : 0) & x8_11 & 1) != 0)
                        return 0xd
                    
                    if (arg3 s< 9)
                        return 0x17
                    
                    if (arg3 s< 0xd)
                        return 0x1d
                    
                    if (((arg3 s< 0x11 ? 1 : 0) & x8_11 & 1) != 0)
                        return 0xe
                    
                    result = arg3 s< 0x10 ? 0x18 : 0x2b
                    
                    if (arg3 s< 0x11)
                        return result
                    
                    if (arg3 s< 0x15)
                        return 0x50
                    
                    if (arg3 s< 0x20)
                        return 0x58
                case 2
                    if (((arg3 s< 7 ? 1 : 0) & x9_2 & 1) != 0)
                        return 0x4b
                    
                    result = arg3 != 0 ? 0x10 : 0xf
                    
                    if (arg3 s< 7)
                        return result
                    
                    if (((arg3 s< 0xd ? 1 : 0) & (x8_1 ^ 1) & 1) != 0)
                        return 0x11
                    
                    result = arg3 s< 9 ? 0x20 : 0x2e
                    
                    if (arg3 s< 0xd)
                        return result
                    
                    if (arg3 s< 0x10)
                        return 0x21
                    
                    if (arg3 s< 0x17)
                        return 0x22
                    
                    if (arg3 s< 0x1d)
                        return 0x57
                    
                    if (arg3 s< 0x28)
                        return 0x5f
                case 3
                    if (((x8_1 | not.d(x9_2)) & 1) == 0)
                        if (arg3 s< 4)
                            return 0x4a
                        
                        if (arg3 s< 0xf)
                            return 0x4e
                    else
                        if (arg3 s< 5)
                            return 0x32
                        
                        if (arg3 s< 0xd)
                            return 0x33
                        
                        if (arg3 s< 0xf)
                            return 0x4e
                    
                    if (arg3 s< 0x1a)
                        return 0x56
                    
                    if (arg3 s< 0x25)
                        return 0x5e
                case 4
                    if (((x8_1 | not.d(x9_2)) & 1) == 0)
                        if (arg3 == 0)
                            return 0x49
                        
                        if (arg3 s< 0xc)
                            return 0x4d
                    else
                        if (arg3 == 0)
                            return 0x36
                        
                        if (arg3 s< 9)
                            return 0x37
                    
                    if (arg3 s< 0x11)
                        return 0x38
                    
                    if (arg3 s< 0x19)
                        return 0x39
                    
                    if (arg3 s< 0x22)
                        return 0x5d
        case 1
            switch (arg2)
                case 0
                    if (((x8_1 | not.d(x9_2)) & 1) == 0)
                        if (arg3 s< 0xb)
                            return 9
                        
                        if (arg3 s< 0x11)
                            return 0xa
                        
                        if (arg3 s< 0x17)
                            return 0xb
                    else
                        if (arg3 s< 5)
                            return 8
                        
                        if (arg3 s<= 0xa && ((x8_1 ^ 1) & 1) != 0)
                            return 9
                        
                        if (arg3 s< 0xd)
                            return 0x19
                        
                        if (arg3 s< 0x14)
                            return 0x1a
                        
                        if (arg3 == 0x14)
                            return 0x3a
                    
                    if (arg3 s< 0x1d)
                        return 0x3b
                    
                    if (arg3 s< 0x25)
                        return 0x3c
                case 1
                    if (arg3 s< 1)
                        return 0x12
                    
                    if (arg3 s< 5)
                        return 0x1b
                    
                    if (arg3 s< 9)
                        return 0x23
                    
                    if (arg3 s< 0x10)
                        return 0x24
                    
                    if (arg3 s< 0x15)
                        return 0x3e
                    
                    if (arg3 s< 0x1d)
                        return 0x3f
                    
                    if (arg3 s< 0x25)
                        return 0x40
                case 2
                    if (arg3 s< 5)
                        return 0x26
                    
                    if (arg3 s< 0xc)
                        return 0x27
                    
                    if (arg3 s<= 0x12 && ((x8_1 ^ 1) & 1) != 0)
                        return 0x28
                    
                    if (arg3 s< 0x11)
                        return 0x42
                    
                    if (arg3 s< 0x19)
                        return 0x43
                    
                    if (arg3 s< 0x24)
                        return 0x64
                case 3
                    if (((arg3 s< 0xb ? 1 : 0) & x9_2 & 1) != 0)
                        return 0x52
                    
                    if (arg3 s< 1)
                        return 0x45
                    
                    if (arg3 s< 9)
                        return 0x46
                    
                    if (arg3 s< 0x11)
                        return 0x47
                    
                    if (arg3 s< 0x19)
                        return 0x48
                    
                    if (arg3 s< 0x21)
                        return 0x63
                case 4
                    if (arg3 s< 8)
                        return 0x51
                    
                    if (arg3 s< 0x13)
                        return 0x59
                    
                    if (arg3 s< 0x1e)
                        return 0x62
        case 2
            switch (arg2)
                case 0
                    if (((x8_1 | not.d(x9_2)) & 1) == 0)
                        if (arg3 s< 7)
                            return 0x68
                        
                        if (arg3 s< 0xd)
                            return 0x69
                        
                        if (arg3 s< 0x13)
                            return 0x6a
                    else
                        if (arg3 s< 1)
                            return 0x67
                        
                        if (arg3 s<= 6 && ((x8_1 ^ 1) & 1) != 0)
                            return 0x68
                        
                        if (arg3 s< 9)
                            return 0x6b
                        
                        if (arg3 s< 0x10)
                            return 0x6c
                        
                        if (arg3 == 0x10)
                            return 0x72
                    
                    if (arg3 s< 0x19)
                        return 0x73
                    
                    if (arg3 s< 0x21)
                        return 0x74
                case 1
                    if (arg3 s< 5)
                        return 0x6d
                    
                    if (arg3 s< 0xc)
                        return 0x6e
                    
                    if (arg3 s< 0x11)
                        return 0x75
                    
                    if (arg3 s< 0x19)
                        return 0x76
                    
                    if (arg3 s< 0x21)
                        return 0x77
                case 2
                    if (arg3 s< 1)
                        return 0x6f
                    
                    if (arg3 s< 8)
                        return 0x70
                    
                    if (arg3 s<= 0xe && ((x8_1 ^ 1) & 1) != 0)
                        return 0x71
                    
                    if (arg3 s< 9)
                        return 0x78
                    
                    if (arg3 s< 0x11)
                        return 0x79
                    
                    if (arg3 s< 0x19)
                        return 0x7a
                    
                    if (arg3 s< 0x1c)
                        return 0x7b
                case 3
                    if (arg3 s< 7)
                        return 0x7c
                    
                    if (arg3 == 7)
                        return 0x7d
                    
                    if (arg3 s< 0x1d)
                        return 0x7e
                case 4
                    if (arg3 s< 4)
                        return 0x7f
                    
                    if (arg3 s< 0xf)
                        return 0x80
                    
                    if (arg3 s< 0x1a)
                        return 0x81
        case 3
            switch (arg2)
                case 1
                    if (arg3 s< 5)
                        return 0x82
                    
                    if (arg3 s< 0xd)
                        return 0x83
                    
                    if (arg3 s< 0x15)
                        return 0x84
                    
                    if (arg3 s< 0x1d)
                        return 0x85
                case 2
                    if (arg3 s< 0x11)
                        return 0x86
                    
                    if (arg3 s< 0x1c)
                        return 0x87
                case 3
                    if (arg3 s< 0xe)
                        return 0x88
                    
                    if (arg3 s< 0x1c)
                        return 0x89
                case 4
                    if (arg3 s< 0xb)
                        return 0x8a
                    
                    if (arg3 s< 0x1c)
                        return 0x8b

pthread_kill(pthread_self(), 6)
int64_t x0_107
int32_t x1
x0_107, x1 = XNoReturn()
return LayoutExtraIdx(x0_107, x1) __tailcall
