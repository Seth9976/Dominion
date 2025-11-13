// 函数: _Z13DefBinGetSizePvPK6DefMapPiS3_
// 地址: 0xc840dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = DefinitionGetSize(arg2)

if (arg4 != 0)
    *arg4 = 0

int32_t var_48 = 0
int64_t var_50 = 0
char var_40 = 1
int32_t* var_38 = arg4
int64_t result = DefBinSerializeBlock(arg1, arg2, nullptr, &var_50)

if (arg3 != 0)
    *arg3 = x0_1

return result
