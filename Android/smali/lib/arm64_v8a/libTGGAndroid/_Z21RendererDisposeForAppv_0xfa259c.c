// 函数: _Z21RendererDisposeForAppv
// 地址: 0xfa259c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Draw3DDispose()
MaterialCacheDispose()
MaterialDisposeForApp()
SpriteDisposeForApp()
void* result = *gpRenderAppData

if (result != 0)
    result = XPooledFree(result, 0x3c0)
    *gpRenderAppData = 0

return result
