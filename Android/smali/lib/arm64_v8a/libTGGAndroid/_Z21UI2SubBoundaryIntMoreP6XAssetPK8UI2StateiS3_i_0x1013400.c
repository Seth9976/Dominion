// 函数: _Z21UI2SubBoundaryIntMoreP6XAssetPK8UI2StateiS3_i
// 地址: 0x1013400
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg1
int64_t* x8_1
int128_t v0
int128_t v1
int128_t v2
int128_t v3

if (x8 == 0)
    int64_t*** x23_1 = arg1
    
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    arg1, v0, v1, v2, v3 = AssetCatalogLoadAsset(x23_1, false, true)
    x8_1 = **x23_1
    
    if (x8_1[1].d != 0)
        goto label_1013434
    
    goto label_10134a4

x8_1 = *x8

if (x8_1[1].d == 0)
label_10134a4:
    v0.d = *RECT1
    v1.d = *(RECT1 + 4)
    v2.d = *(RECT1 + 8)
    v3.d = *(RECT1 + 0xc)
else
label_1013434:
    AttribMap* x0 = *x8_1
    UI2State const* var_40 = arg2
    UI2State const* var_38_1 = arg4
    int32_t var_48 = arg3
    int32_t var_44_1 = arg5
    UI2SubBoundaryItemMore(x0, &var_40, &var_48, 2)
