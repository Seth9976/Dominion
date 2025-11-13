// 函数: _Z12LayoutUpdate9UI2Handle11LayoutStyle
// 地址: 0xaf9d68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t x20 = arg2
int32_t x0_1 = LayoutBaneStyle(zx.q(arg2))

if (x0_1 u<= 5)
    switch (x0_1)
        case 1
            UI2SetState(zx.q(x19), &data_182ad20, 0xffffffff, 0)
        case 2
            UI2SetState(zx.q(x19), &data_182ad38, 0xffffffff, 0)
        case 3
            UI2SetState(zx.q(x19), &data_182ad50, 0xffffffff, 0)
        case 4
            UI2SetState(zx.q(x19), &data_182ad68, 0xffffffff, 0)
        case 5
            UI2SetState(zx.q(x19), &data_182ad80, 0xffffffff, 0)
    
    if (x20 u<= 0x8b)
        uint64_t x21_1 = zx.q(x20)
        int64_t* x1_1
        
        switch (x21_1)
            case 0, 1, 2, 3, 4, 8, 9, 0xa, 0xb, 0x15, 0x16, 0x19, 0x1a, 0x29, 0x2a, 0x3a, 0x3b, 
                    0x3c, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x72, 0x73, 0x74
                goto label_af9e54
            case 0xc, 0xd, 0xe, 0x12, 0x17, 0x18, 0x1b, 0x1d, 0x2b, 0x2e, 0x32, 0x33, 0x36, 0x37, 
                    0x38, 0x39, 0x42, 0x43
                x1_1 = &data_182adb0
                goto label_af9e50
            case 0xf, 0x10, 0x11, 0x20, 0x21, 0x22
                x1_1 = &data_182adc8
                goto label_af9e50
            case 0x23, 0x24, 0x26, 0x27, 0x28, 0x3d, 0x3e, 0x3f, 0x40, 0x6d, 0x6e, 0x6f, 0x70, 
                    0x71, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x82, 0x83, 0x84, 0x85
                x1_1 = &data_182adf8
                goto label_af9e50
            case 0x45, 0x46, 0x47, 0x48
                x1_1 = &data_182ade0
                goto label_af9e50
            case 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x55, 0x56, 
                    0x57, 0x58, 0x59, 0x5a, 0x5d, 0x5e, 0x5f, 0x62, 0x63, 0x64, 0x7b, 0x7c, 0x7d, 
                    0x7e, 0x7f, 0x80, 0x81, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b
                x1_1 = &data_182ae10
            label_af9e50:
                UI2SetState(zx.q(x19), x1_1, 0xffffffff, 0)
            label_af9e54:
                
                if (NumStandardCards() s< 9)
                    if (x20 u<= 0x8b)
                        switch (x21_1)
                            case 0
                                return UI2SetState(zx.q(x19), &data_182ae28, 0xffffffff, 0)
                                    __tailcall
                            case 1
                                return UI2SetState(zx.q(x19), &data_182ae40, 0xffffffff, 0)
                                    __tailcall
                            case 2
                                return UI2SetState(zx.q(x19), &data_182ae58, 0xffffffff, 0)
                                    __tailcall
                            case 3
                                return UI2SetState(zx.q(x19), &data_182ae70, 0xffffffff, 0)
                                    __tailcall
                            case 4, 8, 0x67
                                return UI2SetState(zx.q(x19), &data_182ae88, 0xffffffff, 0)
                                    __tailcall
                            case 9, 0x68
                                return UI2SetState(zx.q(x19), &data_182aea0, 0xffffffff, 0)
                                    __tailcall
                            case 0xc, 0xf, 0x12
                                return UI2SetState(zx.q(x19), &data_182aee8, 0xffffffff, 0)
                                    __tailcall
                            case 0xd, 0x10
                                return UI2SetState(zx.q(x19), &data_182af00, 0xffffffff, 0)
                                    __tailcall
                            case 0xe, 0x11
                                return UI2SetState(zx.q(x19), &data_182af18, 0xffffffff, 0)
                                    __tailcall
                            case 0x15, 0x17, 0x19, 0x1b, 0x6b
                                return UI2SetState(zx.q(x19), &data_182af30, 0xffffffff, 0)
                                    __tailcall
                            case 0x16, 0x18, 0x1a, 0x6c
                                return UI2SetState(zx.q(x19), &data_182af48, 0xffffffff, 0)
                                    __tailcall
                            case 0x1d, 0x20, 0x23, 0x26, 0x6d, 0x6f
                                return UI2SetState(zx.q(x19), &data_182af60, 0xffffffff, 0)
                                    __tailcall
                            case 0x21, 0x24, 0x27, 0x6e, 0x70
                                return UI2SetState(zx.q(x19), &data_182af78, 0xffffffff, 0)
                                    __tailcall
                            case 0x22, 0x71
                                return UI2SetState(zx.q(x19), &data_182af90, 0xffffffff, 0)
                                    __tailcall
                            case 0x29, 0x2b, 0x2e, 0x32, 0x36, 0x3a, 0x3d, 0x45, 0x72, 0x82
                                return UI2SetState(zx.q(x19), &data_182afa8, 0xffffffff, 0)
                                    __tailcall
                            case 0x2a, 0x33, 0x37, 0x3b, 0x3e, 0x42, 0x46, 0x73, 0x75, 0x78
                                return UI2SetState(zx.q(x19), &data_182afc0, 0xffffffff, 0)
                                    __tailcall
                            case 0x38, 0x3c, 0x3f, 0x43, 0x47, 0x74, 0x76, 0x79
                                return UI2SetState(zx.q(x19), &data_182afd8, 0xffffffff, 0)
                                    __tailcall
                            case 0x39, 0x40, 0x48, 0x77, 0x7a
                                return UI2SetState(zx.q(x19), &data_182aff0, 0xffffffff, 0)
                                    __tailcall
                            case 0x49, 0x4a, 0x4b, 0x4c
                                return UI2SetState(zx.q(x19), &data_182b008, 0xffffffff, 0)
                                    __tailcall
                            case 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x7c, 0x7f
                                return UI2SetState(zx.q(x19), &data_182b020, 0xffffffff, 0)
                                    __tailcall
                            case 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x7d, 0x80, 0x86, 0x88, 0x8a
                                return UI2SetState(zx.q(x19), &data_182b038, 0xffffffff, 0)
                                    __tailcall
                            case 0x5d, 0x5e, 0x5f, 0x62, 0x63, 0x64, 0x7b, 0x7e, 0x81, 0x87, 0x89, 
                                    0x8b
                                return UI2SetState(zx.q(x19), &data_182b050, 0xffffffff, 0)
                                    __tailcall
                            case 0x69
                                return UI2SetState(zx.q(x19), &data_182aeb8, 0xffffffff, 0)
                                    __tailcall
                            case 0x6a
                                return UI2SetState(zx.q(x19), &data_182aed0, 0xffffffff, 0)
                                    __tailcall
                else if (x20 u<= 0x8b)
                    switch (x21_1)
                        case 0
                            return UI2SetState(zx.q(x19), &data_182b068, 0xffffffff, 0) __tailcall
                        case 1
                            return UI2SetState(zx.q(x19), &data_182b080, 0xffffffff, 0) __tailcall
                        case 2
                            return UI2SetState(zx.q(x19), &data_182b098, 0xffffffff, 0) __tailcall
                        case 3
                            return UI2SetState(zx.q(x19), &data_182b0b0, 0xffffffff, 0) __tailcall
                        case 4, 8, 0x67
                            return UI2SetState(zx.q(x19), &data_182b0c8, 0xffffffff, 0) __tailcall
                        case 5, 9, 0x68
                            return UI2SetState(zx.q(x19), &data_182b0e0, 0xffffffff, 0) __tailcall
                        case 6, 0xa, 0x69
                            return UI2SetState(zx.q(x19), &data_182b0f8, 0xffffffff, 0) __tailcall
                        case 7, 0xb, 0x6a
                            return UI2SetState(zx.q(x19), &data_182b110, 0xffffffff, 0) __tailcall
                        case 0xc, 0xf, 0x12
                            return UI2SetState(zx.q(x19), &data_182b128, 0xffffffff, 0) __tailcall
                        case 0xd, 0x10, 0x13
                            return UI2SetState(zx.q(x19), &data_182b140, 0xffffffff, 0) __tailcall
                        case 0xe, 0x11, 0x14
                            return UI2SetState(zx.q(x19), &data_182b158, 0xffffffff, 0) __tailcall
                        case 0x15, 0x17, 0x19, 0x1b, 0x6b
                            return UI2SetState(zx.q(x19), &data_182b170, 0xffffffff, 0) __tailcall
                        case 0x16, 0x18, 0x1a, 0x1c, 0x6c
                            return UI2SetState(zx.q(x19), &data_182b188, 0xffffffff, 0) __tailcall
                        case 0x1d, 0x20, 0x23, 0x26, 0x6d, 0x6f
                            return UI2SetState(zx.q(x19), &data_182b1a0, 0xffffffff, 0) __tailcall
                        case 0x1e, 0x21, 0x24, 0x27, 0x6e, 0x70
                            return UI2SetState(zx.q(x19), &data_182b1b8, 0xffffffff, 0) __tailcall
                        case 0x1f, 0x22, 0x25, 0x28, 0x71
                            return UI2SetState(zx.q(x19), &data_182b1d0, 0xffffffff, 0) __tailcall
                        case 0x29, 0x2b, 0x2e, 0x32, 0x36, 0x3a, 0x3d, 0x41, 0x45, 0x72
                            return UI2SetState(zx.q(x19), &data_182b1e8, 0xffffffff, 0) __tailcall
                        case 0x2a, 0x2c, 0x2f, 0x33, 0x37, 0x3b, 0x3e, 0x42, 0x46, 0x73, 0x75, 0x78
                            return UI2SetState(zx.q(x19), &data_182b200, 0xffffffff, 0) __tailcall
                        case 0x2d, 0x30, 0x34, 0x38, 0x3c, 0x3f, 0x43, 0x47, 0x74, 0x76, 0x79
                            return UI2SetState(zx.q(x19), &data_182b218, 0xffffffff, 0) __tailcall
                        case 0x31, 0x35, 0x39, 0x40, 0x44, 0x48, 0x77, 0x7a
                            return UI2SetState(zx.q(x19), &data_182b230, 0xffffffff, 0) __tailcall
                        case 0x49, 0x4a, 0x4b, 0x4c
                            return UI2SetState(zx.q(x19), &data_182b248, 0xffffffff, 0) __tailcall
                        case 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x7c, 0x7f
                            return UI2SetState(zx.q(x19), &data_182b260, 0xffffffff, 0) __tailcall
                        case 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x7d, 0x80
                            return UI2SetState(zx.q(x19), &data_182b278, 0xffffffff, 0) __tailcall
                        case 0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x7b, 
                                0x7e, 0x81, 0x87, 0x89, 0x8b
                            return UI2SetState(zx.q(x19), &data_182b290, 0xffffffff, 0) __tailcall

pthread_kill(pthread_self(), 6)
return GetSpecialPile(XNoReturn()) __tailcall
