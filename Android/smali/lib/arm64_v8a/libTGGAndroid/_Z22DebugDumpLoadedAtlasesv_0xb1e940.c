// 函数: _Z22DebugDumpLoadedAtlasesv
// 地址: 0xb1e940
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(data_182aa70) & 1) == 0 && __cxa_guard_acquire(&data_182aa70) != 0)
    data_182aa68 = AssetPtrFromPath("xbin/atlases/res/atlas-box_art-0.texture", 3)
    __cxa_guard_release(&data_182aa70)

if ((zx.d(data_182aa80) & 1) == 0 && __cxa_guard_acquire(&data_182aa80) != 0)
    data_182aa78 = AssetPtrFromPath("xbin/atlases/res/atlas-campaign-0.texture", 3)
    __cxa_guard_release(&data_182aa80)

if ((zx.d(data_182aa90) & 1) == 0 && __cxa_guard_acquire(&data_182aa90) != 0)
    data_182aa88 = AssetPtrFromPath("xbin/atlases/res/atlas-campaign_masks-0.texture", 3)
    __cxa_guard_release(&data_182aa90)

if ((zx.d(data_182aaa0) & 1) == 0 && __cxa_guard_acquire(&data_182aaa0) != 0)
    data_182aa98 = AssetPtrFromPath("xbin/atlases/res/atlas-campaign_terrain-0.texture", 3)
    __cxa_guard_release(&data_182aaa0)

if ((zx.d(data_182aab0) & 1) == 0 && __cxa_guard_acquire(&data_182aab0) != 0)
    data_182aaa8 = AssetPtrFromPath("xbin/atlases/res/atlas-card_gen-0.texture", 3)
    __cxa_guard_release(&data_182aab0)

if ((zx.d(data_182aac0) & 1) == 0 && __cxa_guard_acquire(&data_182aac0) != 0)
    data_182aab8 = AssetPtrFromPath("xbin/atlases/res/atlas-images-0.texture", 3)
    __cxa_guard_release(&data_182aac0)

XTrace("Atlases: Begin dump")

if (*data_182aa68 != 0)
    XTrace("Atlases: Box art loaded")

if (*data_182aa78 != 0)
    XTrace("Atlases: Campaign doodads loaded")

if (*data_182aa98 != 0)
    XTrace("Atlases: Campaign terrain loaded")

if (*data_182aa88 != 0)
    XTrace("Atlases: Campaign masks loaded")

if (*data_182aaa8 != 0)
    XTrace("Atlases: Cardgen loaded")

if (*data_182aab8 != 0)
    XTrace("Atlases: Images loaded")

return XTrace("Atlases: End dump") __tailcall
