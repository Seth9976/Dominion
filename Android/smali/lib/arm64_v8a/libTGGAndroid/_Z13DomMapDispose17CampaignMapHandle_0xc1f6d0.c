// 函数: _Z13DomMapDispose17CampaignMapHandle
// 地址: 0xc1f6d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d == 0)
    return 

uint64_t x9_1 = zx.q(arg1.d) & 0xffff
int64_t x8_1 = *gMapGlobals
int32_t* x20_1 = x8_1 + mulu.dp.d(x9_1.d, 0x5118)
int32_t x10_1 = *x20_1

if (x10_1 == 2)
    AssetCatalogPurgeAsset(*(x8_1 + x9_1 * 0x5118 + 0x5080))
    *(*(gMapGlobals + 0x90) + 4) = 0
else if (x10_1 == 1)
    thread_join(*(gMapGlobals + 0x98))
    void* x8_3 = *(gMapGlobals + 0x90)
    *(gMapGlobals + 0x98) = 0
    *(x8_3 + 4) = 0
else if (x10_1 == 0)
    for (int32_t* i = *(gMapGlobals + 0x28); i != 0; i = *(i + 8))
        if (*i == arg1.d)
            void* x9_4 = *(i + 0x10)
            int64_t (* x9_5)()
            
            if (x9_4 == 0)
                x9_5 = gMapGlobals + 0x28
            else
                x9_5 = x9_4 + 8
            
            *x9_5 = *(i + 8)
            void* x9_6 = *(i + 8)
            int64_t (* x9_7)()
            
            if (x9_6 == 0)
                x9_7 = gMapGlobals + 0x30
            else
                x9_7 = x9_6 + 0x10
            
            *x9_7 = *(i + 0x10)
            *(gMapGlobals + 0x38) -= 1
            XPooledFree(i, 0x18)
            break

int32_t x10_2 = *(gMapGlobals + 0x10)
*(gMapGlobals + 0x10) = zx.d(x20_1[0x1444].w)
x20_1[0x1444] = x10_2
*(gMapGlobals + 0x14) -= 1
