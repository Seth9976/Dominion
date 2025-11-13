// 函数: _Z26UIStateOverrideFlagsHiddenjib
// 地址: 0x10586f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x22 = *(*(gUISystem + 0x28) + mulu.dp.d(arg1 & 0xffff, 0x458) + 8)
int64_t* x8_2 = *x22
int32_t x8_3
int64_t* x23

if (x8_2 == 0)
    if (x22[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x22, false, true)
    x23 = **x22
    x8_3 = x23[1].d
    
    if (x8_3 s>= 1)
        goto label_105878c
else
    x23 = *x8_2
    x8_3 = x23[1].d
    
    if (x8_3 s>= 1)
    label_105878c:
        int64_t i = 0
        int64_t x24_1 = 0x40
        
        do
            int32_t x9_2 = *(*x23 + x24_1)
            bool z_1
            
            if (x9_2 != 0xffffffff)
                z_1 = (x9_2 & arg2) == 0
            else
                z_1 = true
            
            if (not(z_1))
                UIStateOverrideElementHidden(arg1, i.d, arg3 & 1)
                x8_3 = x23[1].d
            
            i += 1
            x24_1 += 0x178
        while (i s< sx.q(x8_3))
