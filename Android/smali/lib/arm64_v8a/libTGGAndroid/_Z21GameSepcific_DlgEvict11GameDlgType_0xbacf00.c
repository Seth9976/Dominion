// 函数: _Z21GameSepcific_DlgEvict11GameDlgType
// 地址: 0xbacf00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19
char const* const x0_3

if (arg1.d u> 0x16 || (1 << arg1.d & 0x600008) == 0)
    if (arg1.d != 0x7e3)
        return 
    
    x19 = &data_182ab20
    
    if ((zx.d(data_182ab28) & 1) == 0 && __cxa_guard_acquire(&data_182ab28) != 0)
        x0_3 = "xbin/atlases/res/atlas-campaign-0.texture"
        goto label_bacf98
else
    x19 = &data_182ab10
    
    if ((zx.d(data_182ab18) & 1) == 0 && __cxa_guard_acquire(&data_182ab18) != 0)
        x0_3 = "xbin/atlases/res/atlas-box_art-0.texture"
    label_bacf98:
        *x19 = AssetPtrFromPath(x0_3, 3)
        __cxa_guard_release(x19 + 8)
        return AssetCatalogPurgeAsset(*x19) __tailcall
return AssetCatalogPurgeAsset(*x19) __tailcall
