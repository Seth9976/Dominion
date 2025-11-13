// 函数: _Z12HasSplitPile11DomCardEnumRS_
// 地址: 0xb1b930
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(arg1 - 0xc04)
int64_t result = 0

if (x9.d u<= 0xc)
    switch (x9)
        case 0
            result = 1
            *arg2 = 0xc05
        case 2
            result = 1
            *arg2 = 0xc07
        case 4
            result = 1
            *arg2 = 0xc09
        case 7
            result = 1
            *arg2 = 0xc0c
        case 0xc
            result = 1
            *arg2 = 0xc11
else if (arg1 == 0x1305)
    result = 1
    *arg2 = 0x1306

return result
