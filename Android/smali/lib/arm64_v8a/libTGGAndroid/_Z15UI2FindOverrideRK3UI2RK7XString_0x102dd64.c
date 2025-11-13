// 函数: _Z15UI2FindOverrideRK3UI2RK7XString
// 地址: 0x102dd64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x22 = *(arg1 + 0x1688)
int64_t* x8 = *x22
AttribTable* x20 = *gUI2AttribTable

if (x8 == 0)
    if (x22[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x22, false, true)
    x8 = *x22

char*** result =
    AttribMapGetDef(x20, **x8 + sx.q(*(arg1 + 0x1690)) * 0x18, *macro_ptr_UI2StateOverrides, 0x69)

if (result == 0)
    return result

if (result[1].d s< 1)
    return 0

int64_t x21_1 = 0
int64_t i = 0

do
    if ((operator==(arg2, *(*result + x21_1)) & 1) != 0)
        return *result + x21_1
    
    i += 1
    x21_1 += 0x30
while (i s< sx.q(result[1].d))

return nullptr
