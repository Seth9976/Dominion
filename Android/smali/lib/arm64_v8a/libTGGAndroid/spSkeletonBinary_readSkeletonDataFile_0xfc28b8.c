// 函数: spSkeletonBinary_readSkeletonDataFile
// 地址: 0xfc28b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0_1 = _spUtil_readFile()
int32_t var_24

if (x0_1 == 0 || var_24 == 0)
    _spSkeletonBinary_setError(arg1, "Unable to read skeleton file: ", arg2)
    return 0

int64_t result = spSkeletonBinary_readSkeletonData(arg1, x0_1, var_24)
_spFree(x0_1)
return result
