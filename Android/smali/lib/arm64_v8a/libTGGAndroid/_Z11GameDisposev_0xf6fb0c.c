// 函数: _Z11GameDisposev
// 地址: 0xf6fb0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(**gAppInterface + 0x20))()
SpineDispose()
FlanimDisposeForGame()
AttachmentDisposeForGame()
ParticleDisposeForGame()
StructureDisposeForGame()
AnimationDisposeForGame()
SoundDisposeForGame()
void* result = *gpGameData

if (result != 0)
    result = XPooledFree(result, 0x58)
    *gpGameData = 0

return result
