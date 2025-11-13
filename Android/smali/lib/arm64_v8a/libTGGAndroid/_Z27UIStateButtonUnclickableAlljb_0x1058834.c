// 函数: _Z27UIStateButtonUnclickableAlljb
// 地址: 0x1058834
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = zx.q(arg1) & 0xffff
int64_t* x19 = *(*(gUISystem + 0x28) + mulu.dp.d(x22.d, 0x458) + 8)
int64_t* x8_2 = *x19
int32_t x8_3
int64_t* x23

if (x8_2 == 0)
    if (x19[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x19, false, true)
    x23 = **x19
    x8_3 = x23[1].d
    
    if (x8_3 s>= 1)
        goto label_10588d8
else
    x23 = *x8_2
    x8_3 = x23[1].d
    
    if (x8_3 s>= 1)
    label_10588d8:
        int64_t i = 0
        int64_t x25_1 = 4
        
        do
            if (*(*x23 + x25_1) == 5)
                *(UIStateElementGet(*(gUISystem + 0x28) + x22 * 0x458, i.d, &data_793a18) + 0x2e) =
                    arg2 & 1
                x8_3 = x23[1].d
            
            i += 1
            x25_1 += 0x178
        while (i s< sx.q(x8_3))
