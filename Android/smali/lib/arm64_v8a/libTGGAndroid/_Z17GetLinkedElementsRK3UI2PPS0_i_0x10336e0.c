// 函数: _Z17GetLinkedElementsRK3UI2PPS0_i
// 地址: 0x10336e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_44 = 1
*arg2 = arg1
char* x22_1

if (*(arg1 + 0x17d0) == 0)
    x22_1 = nullptr
    
    if (zx.d(*nullptr) != 0)
    label_103379c:
        int32_t x23_1 = *(arg1 + 0x1970)
        
        if (x23_1 != 0)
            uint64_t x26_1 = 0
            bool cond:0_1
            
            do
                GetLinkedElementsRec(
                    *gUI2 + zx.q(*(arg1 + (x26_1 << 0x20 s>> 0x1e) + 0x1870)) * 0x19a8, &var_44, 
                    arg2, arg3, x22_1)
                cond:0_1 = x23_1 != x26_1.d + 1
                x26_1 = zx.q(x26_1.d + 1)
            while (cond:0_1)
            return zx.q(var_44)
else
    int64_t* x22 = *(arg1 + 0x1688)
    int64_t* x8_1 = *x22
    
    if (x8_1 == 0)
        if (x22[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        AssetCatalogLoadAsset(x22, false, true)
        x8_1 = *x22
    
    x22_1 = AttribMapGetString(*gUI2AttribTable, **x8_1 + sx.q(*(arg1 + 0x1690)) * 0x18, 0x6f)
    
    if (zx.d(*x22_1) != 0)
        goto label_103379c
return 1
