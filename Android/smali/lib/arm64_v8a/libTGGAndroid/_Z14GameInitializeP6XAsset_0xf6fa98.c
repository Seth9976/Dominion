// 函数: _Z14GameInitializeP6XAsset
// 地址: 0xf6fa98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = XPooledCalloc(0x58)
*gpGameData = x0
*(x0 + 0x50) = 0x3b83126f
*(x0 + 0x3c) = 0
AnimationInitForGame()
StructureInitForGame()
FlanimInitForGame()
SpineInit()
ParticleInitForGame()
int64_t result = AttachmentInitForGame()

if (zx.d(*gIsBuildingAssets) == 0)
    jump(*(**gAppInterface + 0x10))

return result
