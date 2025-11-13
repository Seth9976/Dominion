// 函数: _Z13GetBackgroundR8GameSaveR7DomGame
// 地址: 0xb4536c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x34))
int32_t var_24
int32_t x0_1 = DomCardExp(
    zx.q(*(arg2 + (zx.q(x8.d - ((x8 * 0xcccccccd) u>> 0x23).d * 0xa) << 2) + 0xd54)), &var_24)

if (x0_1 == 2)
    int32_t x9_6
    
    if (*(arg1 + 0x14) == 0)
        GetClient()
        x9_6 = *(gDomClient + 0x81e18)
    
    if (*(arg1 + 0x14) == 0 && (x9_6 == 0 || (x9_6 == 2 && *(gDomClient + 0x81e28) == 0)))
        uint64_t x8_12 = zx.q(*(arg1 + 0x34))
        x0_1 = x8_12.d - ((x8_12 * 0x88888889) u>> 0x23).d * 0xf + 2
    else
        x0_1 = 2

int32_t x9_2 = *(arg1 + 0x1c)
uint64_t x8_4 = zx.q(data_182a738)
int32_t x20

if (x9_2 - 0x6d u< 0x10)
    x20 = x9_2 - 0x6a
else
    x20 = x0_1

if (x8_4.d != x20)
    int64_t* x9_5 = *(x8_4 * 0x30 + &data_1837180)
    
    if (x9_5 != 0)
        AssetCatalogPurgeAsset(*x9_5)
        x8_4 = zx.q(data_182a738)
    
    int64_t* x8_6 = *(x8_4 * 0x30 + &data_1837188)
    
    if (x8_6 != 0)
        int64_t* x19_1 = *x8_6
        int64_t* x8_7 = *x19_1
        
        if (x8_7 == 0)
            if (x19_1[1].d == 0x15)
                XString::GetString()
                XTrace("Unpreloaded sound %s")
            
            AssetCatalogLoadAsset(x19_1, false, true)
            x8_7 = *x19_1
        
        XAsset* x0_6 = *(**x8_7 + 0x28)
        
        if (x0_6 != 0)
            AssetCatalogPurgeAsset(x0_6)
        
        AssetCatalogPurgeAsset(x19_1)
    
    data_182a738 = x20

return &data_1837168 + mulu.dp.d(x20, 0x30)
