// 函数: _Z16ButtonStatesBindP11ButtonStateP6XAssetPK13ButtonBindingi
// 地址: 0x105bb8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 s< 1)
    return 

uint64_t i_1 = zx.q(arg4)
void* __offset(ButtonBinding, 0x8) x22_1 = arg3 + 8
uint64_t i

do
    XAsset** x23_1 = arg1 + (sx.q(*(x22_1 - 8)) << 5)
    *x23_1 = arg2
    char* x1 = *x22_1
    x22_1 += 0x10
    i = i_1
    i_1 -= 1
    x23_1[1].d = UILayoutGetElementIndex(arg2, x1).d
while (i != 1)
