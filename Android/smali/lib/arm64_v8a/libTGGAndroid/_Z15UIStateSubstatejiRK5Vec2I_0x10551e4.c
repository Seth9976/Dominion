// 函数: _Z15UIStateSubstatejiRK5Vec2I
// 地址: 0x10551e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UIState* x21 = *(gUISystem + 0x28) + mulu.dp.d(arg1 & 0xffff, 0x458)
UIStateElement* x0_1 = UIStateElementGet(x21, arg2, &data_793a18)
int64_t* x22 = *(x21 + 8)
int64_t* x8_1 = *x22

if (x8_1 == 0)
    if (x22[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x22, false, true)
    x8_1 = *x22

return zx.q(*(UIStateSubstate(**x8_1 + muls.dp.d(arg2, 0x178), x0_1, arg3) + 0x450))
