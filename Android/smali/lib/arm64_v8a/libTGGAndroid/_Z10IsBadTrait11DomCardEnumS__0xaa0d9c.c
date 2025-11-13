// 函数: _Z10IsBadTrait11DomCardEnumS_
// 地址: 0xaa0d9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(arg1 - 0x1147)

if (x8.d u<= 6)
    switch (x8)
        case 0
            if (arg2 - 0xc00 u< 4 || arg2 - 0x501 u< 2)
                return 1
        case 2
            if (arg2 s> 0xe02)
                uint64_t x8_3 = zx.q(arg2 - 0x1100)
                
                if ((x8_3.d u<= 0x21 && (1 << x8_3 & 0x200008001) != 0) || arg2 == 0xe03
                        || arg2 == 0xe05)
                    return 1
            else if (arg2 == 0x21c || arg2 == 0xb13 || arg2 == 0xb1d)
                return 1
        case 3
            if (arg2 == 0x1309)
                return 1
        case 6
            if (arg2 == 0x1103)
                return 1

return 0
