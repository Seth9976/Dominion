// 函数: _Z25DefBinSerializeHashedNamePvPK8DefFieldR21DefBinSerializeBuffer
// 地址: 0xc84b94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = sx.q(*arg2)
void* const x22

if ((zx.d(*(arg2 + 0x50)) & 0x10) == 0)
    x22 = *(arg1 + x8)
else
    x22 = &data_793a18

int32_t x23

if (zx.d(*(arg3 + 0x10)) == 0)
    *(*arg3 + sx.q(*(arg3 + 8)) + x8) = *(arg3 + 0xc)
    int32_t x24_1 = zx.d(*(arg3 + 0x10)) == 0 ? 1 : 0
    x23 = strlen(x22) + 1
    
    if (x24_1 != 0)
        memcpy(*arg3 + sx.q(*(arg3 + 0xc)), x22, sx.q(x23))
else
    x23 = strlen(x22) + 1

*(arg3 + 0xc) += x23
char* x21_1 = *DefinitionGetFieldData(arg1, arg2)
DefinitionGetFieldDataAux(arg1, arg2)
return strcrc32(x21_1, 0) __tailcall
