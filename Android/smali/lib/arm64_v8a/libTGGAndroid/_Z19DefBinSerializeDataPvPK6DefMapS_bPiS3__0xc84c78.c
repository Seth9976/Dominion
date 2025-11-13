// 函数: _Z19DefBinSerializeDataPvPK6DefMapS_bPiS3_
// 地址: 0xc84c78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = DefinitionGetSize(arg2)

if ((arg4.d & 1) == 0)
    memcpy(arg3, arg1, sx.q(x0_1))

if (arg6 != 0)
    *arg6 = 0

void* var_70 = arg3
int32_t var_68 = 0
char var_60 = arg4 & 1
int32_t* var_58 = arg6
int64_t result = DefBinSerializeBlock(arg1, arg2, nullptr, &var_70)

if (arg5 != 0)
    *arg5 = x0_1

return result
