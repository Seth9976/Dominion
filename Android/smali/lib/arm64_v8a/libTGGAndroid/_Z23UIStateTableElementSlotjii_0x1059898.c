// 函数: _Z23UIStateTableElementSlotjii
// 地址: 0x1059898
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UIState* x21 = *(gUISystem + 0x28) + mulu.dp.d(arg1 & 0xffff, 0x458)
int32_t* x0_1 = UIStateElementGet(x21, arg2, &data_793a18)
int64_t* x22 = *(x21 + 8)
int64_t* x8_1 = *x22
int32_t x8_3

if (x8_1 == 0)
    if (x22[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x22, false, true)
    
    if (x0_1[0x52] s> *x0_1)
        XString::operator char const*()
        x8_3 = (*(x0_1 + 0x154)).d
    else
        x8_3 = *(***x22 + muls.dp.d(arg2, 0x178) + 0xb0)
else if (x0_1[0x52] s<= *x0_1)
    x8_3 = *(**x8_1 + muls.dp.d(arg2, 0x178) + 0xb0)
else
    XString::operator char const*()
    x8_3 = (*(x0_1 + 0x154)).d

return zx.q(arg3 s% x8_3) | zx.q(arg3 s/ x8_3) << 0x20
