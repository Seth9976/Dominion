// 函数: _Z26SoundStorageFormatFromPathPKc
// 地址: 0xfa9114
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = strrchr(arg1, 0x2e)

if (result != 0)
    result = SymbolMapLookupValue(gpSoundStorageFormatSymbolMap, result + 1)
    
    if (result != 0)
        return zx.q(*result)

return result
