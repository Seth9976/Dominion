// 函数: _Z7HalReadP8HAL_FILEiPv
// 地址: 0x1069c60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FILE* fp = *arg1
int64_t offset = sx.q(*(arg1 + 0x10))

if (fp == 0)
    int64_t result = *(arg1 + 8)
    
    if (result == 0)
        return result
    
    if (AAsset_seek(result, offset, 0) != -1 && AAsset_read(*(arg1 + 8), arg3, sx.q(arg2)) == arg2)
        *(arg1 + 0x10) += arg2
        return 1
else
    if (fseek(fp, offset, 0) != 0)
        return 0
    
    if (fread(arg3, sx.q(arg2), 1, *arg1) == 1)
        *(arg1 + 0x10) += arg2
        return 1

return 0
