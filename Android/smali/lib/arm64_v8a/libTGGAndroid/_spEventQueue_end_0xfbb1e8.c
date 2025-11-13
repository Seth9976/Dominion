// 函数: _spEventQueue_end
// 地址: 0xfbb1e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = arg1[2].d
int32_t x9 = *(arg1 + 0x14)
int32_t* x21

if (x8 s>= x9)
    int32_t x8_1 = x9 << 1
    *(arg1 + 0x14) = x8_1
    int32_t* x0_1 =
        _spCalloc(sx.q(x8_1), 8, "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0x57)
    x21 = x0_1
    memcpy(x0_1, arg1[1], sx.q(arg1[2].d) << 3)
    _spFree(arg1[1])
    x8 = arg1[2].d
    arg1[1] = x21
else
    x21 = arg1[1]

arg1[2].d = x8 + 1
*(x21 + (zx.q(x8) << 0x20 s>> 0x1d)) = 2
int32_t x8_4 = arg1[2].d
int32_t x9_2 = *(arg1 + 0x14)
int64_t x21_1

if (x8_4 s>= x9_2)
    int32_t x8_5 = x9_2 << 1
    *(arg1 + 0x14) = x8_5
    int64_t x0_4 =
        _spCalloc(sx.q(x8_5), 8, "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0x57)
    x21_1 = x0_4
    memcpy(x0_4, arg1[1], sx.q(arg1[2].d) << 3)
    _spFree(arg1[1])
    x8_4 = arg1[2].d
    arg1[1] = x21_1
else
    x21_1 = arg1[1]

arg1[2].d = x8_4 + 1
*(x21_1 + (sx.q(x8_4) << 3)) = arg2
*(*arg1 + 0x60) = 1
