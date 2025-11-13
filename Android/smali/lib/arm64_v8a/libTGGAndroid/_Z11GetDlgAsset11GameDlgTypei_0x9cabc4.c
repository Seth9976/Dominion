// 函数: _Z11GetDlgAsset11GameDlgTypei
// 地址: 0x9cabc4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(arg1.d - 1)
void* x0
int64_t* x8_1

if (x8.d u>= 0x26 || ((0x23bff5f9bf u>> x8).d & 1) == 0)
    x0 = GameSpecific_GetDlgDef(arg1)
    x8_1 = *(x0 + 8)
    
    if (x8_1 != 0)
        return *x8_1
else
    x0 = (&data_11231f8)[sx.q(x8.d)]
    x8_1 = *(x0 + 8)
    
    if (x8_1 != 0)
        return *x8_1
return **(*(x0 + 0x28) + (sx.q(arg2) << 3))
