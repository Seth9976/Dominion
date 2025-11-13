// 函数: _Z26DefBinReadPackFileHWBufferP6XAssetPvii
// 地址: 0xc868e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

HAL_FILE var_38
int32_t x19_1

if ((BinFileHandleOpenAsset(arg1, &var_38) & 1) == 0)
    x19_1 = 0
else
    x19_1 = HalReadAtOffset(&var_38, arg3, arg4, arg2)
    HalClose(&var_38)

return zx.q(x19_1) & 1
