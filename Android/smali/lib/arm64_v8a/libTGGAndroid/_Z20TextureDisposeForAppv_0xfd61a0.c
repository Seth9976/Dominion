// 函数: _Z20TextureDisposeForAppv
// 地址: 0xfd61a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = *gpTextureAppData

if (result != 0)
    result = XPooledFree(result, 0xd0)
    *gpTextureAppData = 0

return result
