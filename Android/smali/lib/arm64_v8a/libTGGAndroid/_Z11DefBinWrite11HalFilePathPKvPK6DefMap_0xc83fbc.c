// 函数: _Z11DefBinWrite11HalFilePathPKvPK6DefMap
// 地址: 0xc83fbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = DefinitionGetSize(arg3)
int32_t var_58 = 0
void* var_60 = nullptr
char var_50 = 1
int64_t var_48 = 0
DefBinSerializeBlock(arg2, arg3, nullptr, &var_60)
void* x0_4 = XMalloc(x0_1)
memset(x0_4, 0xfa, sx.q(x0_1))
int32_t x0_6 = DefinitionGetSize(arg3)
memcpy(x0_4, arg2, sx.q(x0_6))
var_60 = x0_4
int32_t var_58_1 = 0
int32_t var_54_1 = x0_6
char var_50_1 = 0
int64_t var_48_1 = 0
DefBinSerializeBlock(arg2, arg3, nullptr, &var_60)
int32_t x19_1

if ((HalOpen(&var_60, arg1, 1) & 1) == 0)
    XString::GetString()
    XTrace("DefBinWrite failed to open %s")
    x19_1 = 0
else
    x19_1 = HalWrite(&var_60, x0_1, x0_4)
    HalClose(&var_60)
    XFree(x0_4)

return zx.q(x19_1) & 1
