// 函数: _Z21MaterialDisposeForAppv
// 地址: 0xf7c094
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = *pgMaterialGlobals

if (result != 0)
    result = XPooledFree(result, 1)
    *pgMaterialGlobals = 0

return result
