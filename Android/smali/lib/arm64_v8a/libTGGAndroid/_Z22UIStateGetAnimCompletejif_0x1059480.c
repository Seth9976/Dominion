// 函数: _Z22UIStateGetAnimCompletejif
// 地址: 0x1059480
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UIState* x19 = *(gUISystem + 0x28) + mulu.dp.d(arg1 & 0xffff, 0x458)
int32_t* x0_1 = UIStateElementGet(x19, arg2, &data_793a18)
int64_t* x21 = *(x19 + 8)
int64_t* x8_1 = *x21

if (x8_1 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21, false, true)
    x8_1 = *x21

void* x8_7

if (x0_1[4] s> *x0_1)
    x8_7 = &x0_1[5]
else
    x8_7 = **x8_1 + muls.dp.d(arg2, 0x178) + 0x44

char x8_8 = *x8_7

if ((arg3 != 0f || zx.d(x8_8) != 0) && (arg3 != fconvert.s(1f) || zx.d(x8_8) == 0))
    return zx.q(x0_1[6] f== arg3 ? 1 : 0)

return 0
