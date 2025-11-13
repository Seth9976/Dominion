// 函数: _Z22UI2EditorSyncSelection9UI2Handle
// 地址: 0x1031be4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t entry_x22
uint64_t var_20 = entry_x22
int64_t entry_result
int64_t entry_result_1 = entry_result
uint32_t x9 = zx.d(UI2SelectByName(zx.q(*(gUI2Editor + 0x6038)), "layersTable", 0xffffffff))
int64_t result = UI2TableGetRangeInt(*gUI2 + mulu.dp.d(x9, 0x19a8), 0xffffffff)
uint64_t x9_1 = zx.q(*(gUI2Editor + 0x6000))
int64_t (* const x8_8)()
void* x10_4

if (x9_1.d s< 1)
label_1031da8:
    pthread_kill(pthread_self(), 6)
    result, x8_8, x10_4 = XNoReturn()
else
    int64_t x8_2 = *gUI2
    entry_result = result
    entry_x22 = result u>> 0x20
    void* i = x8_2 + mulu.dp.d(zx.d(arg1), 0x19a8)
    int64_t (* x10_2)() = gUI2Editor + 0x10
    uint64_t x11_1 = x9_1
    
    while (*(x10_2 - 0x10) != i)
        uint64_t temp0_1 = x11_1
        x11_1 -= 1
        x10_2 += 0x18
        
        if (temp0_1 == 1)
            goto label_1031da8
    
    if (*x10_2 == 2)
        if (x8_2 != 0)
            void* i_1 = i
            
            do
                if (zx.d(*(i_1 + 0x17)) != 0)
                    int64_t* x21_1 = *(i_1 + 0x1688)
                    *(i_1 + 0x17) = 0
                    int64_t* x8_4 = *x21_1
                    
                    if (x8_4 == 0)
                        if (x21_1[1].d == 0x15)
                            XString::GetString()
                            XTrace("Unpreloaded sound %s")
                        
                        AssetCatalogLoadAsset(x21_1, false, true)
                        x8_4 = *x21_1
                    
                    AttribMapSetBool(*gUI2AttribTable, **x8_4 + sx.q(*(i_1 + 0x1690)) * 0x18, 0x8b, 
                        false)
                    void* j = i_1
                    
                    do
                        *(j + 0x1378) = 2
                        j = *(j + 0x17d0)
                    while (j != 0)
                    
                    void* j_1 = i_1
                    
                    do
                        *(j_1 + 0x1370) = 0
                        *(j_1 + 0x1710) = 0x3f800000
                        j_1 = *(j_1 + 0x17d0)
                    while (j_1 != 0)
                
                i_1 = *(i_1 + 0x17d0)
            while (i_1 != 0)
        
        result = UI2EditorSyncDisplayTree()
        x9_1 = zx.q(*(gUI2Editor + 0x6000))
    
    if (x9_1.d s< 1)
        goto label_1031da8
    
    x8_8 = gUI2Editor
    uint64_t x9_3 = zx.q(x9_1.d)
    x10_4 = gUI2Editor
    
    while (*x10_4 != i)
        uint64_t temp3_1 = x9_3
        x9_3 -= 1
        x10_4 += 0x18
        
        if (temp3_1 == 1)
            goto label_1031da8

int32_t x9_4 = *(x10_4 + 0xc)

if (x9_4 s>= entry_result.d && x9_4 s<= entry_x22.d)
    return result

int32_t x10_5 = entry_x22.d - entry_result.d
int32_t x11_3 = *(x8_8 + 0x6004)
int32_t x12_2

if (x10_5 s< 0)
    x12_2 = x10_5 + 1
else
    x12_2 = x10_5

int32_t x9_5 = x9_4 - (x12_2 s>> 1)
int32_t x10_6

if (x9_4 - (x12_2 s>> 1) s< 0)
    x9_5 = 0
    
    x10_6 = x10_5 s> x11_3 ? x11_3 : x10_5
else
    x10_6 = x9_5 + x10_5
    
    if (x11_3 s< x10_6)
        int32_t x9_6 = x11_3 - x10_6 + x9_5
        x9_5 = x9_6 & not.d(x9_6 s>> 0x1f)
        x10_6 = x11_3

uint64_t x0_8 = zx.q(*(x8_8 + 0x6038))
uint64_t var_68 = zx.q(x9_5) | zx.q(x10_6) << 0x20
return UI2TableSetRange(UI2SelectByName(x0_8, "layersTable", 0xffffffff), &var_68, false)
