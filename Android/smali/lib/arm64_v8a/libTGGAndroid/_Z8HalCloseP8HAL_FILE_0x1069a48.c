// 函数: _Z8HalCloseP8HAL_FILE
// 地址: 0x1069a48
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FILE* fp = *arg1

if (fp != 0)
    fclose(fp)
    *arg1 = 0

int64_t result = *(arg1 + 8)

if (result != 0)
    result = AAsset_close(result)
    *(arg1 + 8) = 0

return result
