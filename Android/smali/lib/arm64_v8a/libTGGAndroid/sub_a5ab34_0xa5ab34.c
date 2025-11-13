// 函数: sub_a5ab34
// 地址: 0xa5ab34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x8 = *(arg1 + 8)
int32_t x19 = *arg2
uint64_t x0 = zx.q(x8[1])

if (x0.d == 0)
    goto label_a5ab68

if ((CanDoCardStamp(x0, zx.q(x19)) & 1) != 0)
    x8 = *(arg1 + 8)
label_a5ab68:
    
    if ((CanDoCardStamp(zx.q(*x8), zx.q(x19)) & 1) != 0)
        return (zx.q(IsLandscape(zx.q(x19))) ^ 1) & 1

return 0
