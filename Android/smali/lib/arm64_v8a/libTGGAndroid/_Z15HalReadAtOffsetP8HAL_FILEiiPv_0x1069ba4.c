// 函数: _Z15HalReadAtOffsetP8HAL_FILEiiPv
// 地址: 0x1069ba4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

FILE* fp = *arg1
int64_t result

if (fp == 0)
    result = *(arg1 + 8)
    
    if (result != 0)
        if (AAsset_seek(result, sx.q(arg2), 0) == -1)
            return 0
        
        return zx.q(AAsset_read(*(arg1 + 8), arg4, sx.q(arg3)) == arg3 ? 1 : 0)
else
    result = 0
    
    if (fseek(fp, sx.q(arg2), 0) == 0)
        return zx.q(fread(arg4, sx.q(arg3), 1, *arg1) == 1 ? 1 : 0)

return result
