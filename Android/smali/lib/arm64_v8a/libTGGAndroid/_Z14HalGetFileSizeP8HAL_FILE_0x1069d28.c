// 函数: _Z14HalGetFileSizeP8HAL_FILE
// 地址: 0x1069d28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FILE* fp = *arg1

if (fp != 0)
    fseek(fp, 0, 2)
    return ftell(*arg1)

int64_t result = *(arg1 + 8)

if (result == 0)
    return result

return AAsset_getLength(result)
