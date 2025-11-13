// 函数: _Z22UIStateHideAllElementsjb
// 地址: 0x10584b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *(*(gUISystem + 0x28) + mulu.dp.d(arg1 & 0xffff, 0x458) + 8)
int64_t* x8_2 = *x21
void* x22

if (x8_2 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x21, false, true)
    x22 = **x21
    
    if (*(x22 + 8) s>= 1)
        goto label_1058548
else
    x22 = *x8_2
    
    if (*(x22 + 8) s>= 1)
    label_1058548:
        int32_t i = 0
        
        do
            UIStateOverrideElementHidden(arg1, i, arg2 & 1)
            i += 1
        while (i s< *(x22 + 8))
