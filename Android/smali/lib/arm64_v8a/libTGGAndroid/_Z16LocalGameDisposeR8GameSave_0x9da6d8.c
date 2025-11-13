// 函数: _Z16LocalGameDisposeR8GameSave
// 地址: 0x9da6d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x11b4) s< 1)
    return 

int64_t i = 0
void* __offset(GameSave, 0x54) x21_1 = arg1 + 0x54
void* __offset(GameSave, 0x11c0) x22_1 = arg1 + 0x11c0

do
    *x21_1 = 0
    *(x21_1 + 8) = 0
    XFree(*x22_1)
    __builtin_memset(x22_1, 0, 0x18)
    i += 1
    x21_1 += 0x22c
    x22_1 += 0x18
while (i s< sx.q(*(arg1 + 0x11b4)))
