// 函数: _Z16UIStateGetHiddenji
// 地址: 0x1059584
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UIState* x20 = *(gUISystem + 0x28) + mulu.dp.d(arg1 & 0xffff, 0x458)
int32_t* x0_1 = UIStateElementGet(x20, arg2, &data_793a18)
int64_t* x21 = *(x20 + 8)
int64_t* x8_1 = *x21

if (x8_1 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21, false, true)
    x8_1 = *x21

char* x8_7

if (x0_1[4] s> *x0_1)
    x8_7 = &x0_1[5]
else
    x8_7 = **x8_1 + muls.dp.d(arg2, 0x178) + 0x44

return zx.q(zx.d(*x8_7) != 0 ? 1 : 0)
