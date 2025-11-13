// 函数: _Z13CardsetAddSetR7CardsetP6XAssetPPK12UI2StateDecli
// 地址: 0x9a9b70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x1520) = 0

if (arg4 s< 1)
    return 

*(arg1 + 0x1520) = 1
UI2StateDecl const* x9_1 = *arg3
*(arg1 + 0x278) = 1
*(arg1 + 0x268) = arg2
*(arg1 + 0x260) = x9_1
*(arg1 + 0x270) = 0

if (arg4 == 1)
    return 

int64_t i_1 = zx.q(arg4) - 1
void* x10_1 = &arg3[1]
int64_t i

do
    int64_t x11_1 = sx.q(*(arg1 + 0x1520))
    i = i_1
    i_1 -= 1
    *(arg1 + 0x1520) = x11_1.d + 1
    int64_t x12_2 = *x10_1
    x10_1 += 8
    void* x11_2 = arg1 + (x11_1 << 5)
    *(x11_2 + 0x278) = 1
    *(x11_2 + 0x268) = arg2
    *(x11_2 + 0x260) = x12_2
    *(x11_2 + 0x270) = 0
while (i != 1)
