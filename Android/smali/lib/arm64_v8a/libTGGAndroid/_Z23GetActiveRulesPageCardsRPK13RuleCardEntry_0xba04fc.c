// 函数: _Z23GetActiveRulesPageCardsRPK13RuleCardEntry
// 地址: 0xba04fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = GameDlgCurrentDlg()
int32_t x0_1 = GameDlgCurrentPage()
uint64_t x8 = zx.q(x0 - 0x7d0)

if (x8.d u<= 0x10)
    switch (x8)
        case 0
            uint64_t x8_1 = zx.q(x0_1 - 1)
            
            if (x8_1.d u<= 7)
                switch (x8_1)
                    case 0
                        *arg1 = &data_114fbd8
                        return 0x11
                    case 1
                        *arg1 = &data_114fce8
                        return 3
                    case 2
                        *arg1 = &data_114fd18
                        return 0xa
                    case 4
                        *arg1 = &data_114fdb8
                        return 2
                    case 7
                        *arg1 = &data_114fdd8
                        return 6
        case 1
            if (x0_1 != 0)
                return 0
            
            *arg1 = &data_114fe38
            return 4
        case 2
            if (x0_1 == 1)
                *arg1 = &data_114fe98
                return 2
            
            if (x0_1 != 0)
                return 0
            
            *arg1 = &data_114fe78
            return 2
        case 3
            if (x0_1 == 1)
                *arg1 = &data_114fed8
                return 2
            
            if (x0_1 != 0)
                return 0
            
            *arg1 = &data_114feb8
            return 2
        case 4
            if (x0_1 != 0)
                return 0
            
            *arg1 = &data_114fef8
            return 2
        case 5
            if (x0_1 != 0)
                return 0
            
            *arg1 = &data_114ff18
            return 6
        case 6
            if (x0_1 != 0)
                return 0
            
            *arg1 = &data_114ff78
            return 1
        case 7
            if (x0_1 == 1)
                *arg1 = &data_114ffe8
                return 0xf
            
            if (x0_1 != 0)
                return 0
            
            *arg1 = &data_114ff88
            return 6
        case 8
            if (x0_1 != 0)
                return 0
            
            *arg1 = &data_11500d8
            return 2
        case 9
            if (x0_1 u> 3)
                return 0
            
            switch (x0_1)
                case 0
                    *arg1 = &data_11500f8
                    return 1
                case 1
                    *arg1 = &data_1150108
                    return 3
                case 2
                    *arg1 = &data_1150138
                    return 3
                case 3
                    *arg1 = &data_1150168
                    return 0xa
        case 0xa
            if (x0_1 u> 4)
                return 0
            
            switch (x0_1)
                case 0
                    *arg1 = &data_1150208
                    return 1
                case 1
                    *arg1 = &data_1150218
                    return 0xa
                case 2
                    *arg1 = &data_11502b8
                    return 8
                case 3
                    *arg1 = &data_1150338
                    return 3
                case 4
                    *arg1 = &data_1150368
                    return 3
        case 0xb
            if (x0_1 u> 3)
                return 0
            
            switch (x0_1)
                case 0
                    *arg1 = &data_1150398
                    return 0xd
                case 1
                    *arg1 = &data_1150468
                    return 0xd
                case 2
                    *arg1 = &data_1150538
                    return 4
                case 3
                    *arg1 = &data_1150578
                    return 3
        case 0xc
            if (x0_1 == 2)
                *arg1 = &data_11505e8
                return 3
            
            if (x0_1 == 1)
                *arg1 = &data_11505b8
                return 3
            
            if (x0_1 != 0)
                return 0
            
            *arg1 = &data_11505a8
            return 1
        case 0xd
            if (x0_1 u> 4)
                return 0
            
            switch (x0_1)
                case 0
                    *arg1 = &data_1150618
                    return 1
                case 1
                    *arg1 = &data_1150628
                    return 2
                case 2
                    *arg1 = &data_1150648
                    return 3
                case 3
                    *arg1 = &data_1150678
                    return 3
                case 4
                    *arg1 = &data_11506a8
                    return 2
        case 0xe
            if (x0_1 == 1)
                *arg1 = &data_11506d8
                return 4
            
            if (x0_1 != 0)
                return 0
            
            *arg1 = &data_11506c8
            return 1
        case 0xf
            if (x0_1 == 1)
                *arg1 = &data_1150748
                return 2
            
            if (x0_1 != 0)
                return 0
            
            *arg1 = &data_1150718
            return 3
        case 0x10
            if (x0_1 != 0)
                return 0
            
            *arg1 = &data_1150768
            return 2

return 0
