// 函数: _Z20UIStateAnimHiddenAlljbf
// 地址: 0x1058944
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = zx.q(arg1) & 0xffff
uint32_t x19 = arg1
int64_t* x21 = *(*(gUISystem + 0x28) + mulu.dp.d(x24.d, 0x458) + 8)
int64_t* x8_2 = *x21
int32_t x8_3
int64_t* x25

if (x8_2 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21, false, true)
    x25 = **x21
    x8_3 = x25[1].d
    
    if (x8_3 s>= 1)
        goto label_10589ec
    
    return 

x25 = *x8_2
x8_3 = x25[1].d

if (x8_3 s< 1)
    return 

label_10589ec:
int64_t i = 0
int64_t x26_1 = 4

if (arg3 < 0f)
    do
        if (*(*x25 + x26_1) == 6)
            UIStateOverrideElementHidden(x19, i.d, arg2 & 1)
            UIStateElementGet(*(gUISystem + 0x28) + x24 * 0x458, i.d, &data_793a18)
            x8_3 = x25[1].d
        
        i += 1
        x26_1 += 0x178
    while (i s< sx.q(x8_3))
else
    do
        if (*(*x25 + x26_1) == 6)
            UIStateOverrideElementHidden(x19, i.d, arg2 & 1)
            arg1 = UIStateElementGet(*(gUISystem + 0x28) + x24 * 0x458, i.d, &data_793a18)
            *(arg1 + 0x18) = arg3
            *(arg1 + 0x1c) = arg3
            x8_3 = x25[1].d
        
        i += 1
        x26_1 += 0x178
    while (i s< sx.q(x8_3))
