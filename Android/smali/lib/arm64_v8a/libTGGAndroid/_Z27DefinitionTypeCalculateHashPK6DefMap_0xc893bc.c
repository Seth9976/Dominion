// 函数: _Z27DefinitionTypeCalculateHashPK6DefMap
// 地址: 0xc893bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* i_1
__builtin_memset(&i_1, 0, 0x14)
int32_t x0 = DefCalcHashFieldType(arg1, 0, &i_1, false)
void* i = i_1

while (i != 0)
    void* i_2 = i
    i = *(i + 8)
    XPooledFree(i_2, 0x18)

return zx.q(x0)
