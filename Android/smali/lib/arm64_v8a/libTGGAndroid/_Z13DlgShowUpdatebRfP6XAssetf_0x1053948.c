// 函数: _Z13DlgShowUpdatebRfP6XAssetf
// 地址: 0x1053948
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg3

if (x8 == 0)
    if (*(arg3 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg3, false, true)
    x8 = *arg3

if ((arg1.d & 1) != 0)
    arg4 = arg4
else
    arg4 = fneg(arg4)

arg4 = *arg2 + arg4 * float.s(0x447a0000) / float.s(*(**x8 + 0x6c))
float temp0 = vmin_f32(arg4, fconvert.s(1f))

arg4 = arg4 < 0f ? 0f : temp0

*arg2 = arg4
return zx.q(arg4 > 0f ? 1 : 0)
