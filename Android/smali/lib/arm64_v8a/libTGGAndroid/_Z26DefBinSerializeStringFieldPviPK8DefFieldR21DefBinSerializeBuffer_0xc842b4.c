// 函数: _Z26DefBinSerializeStringFieldPviPK8DefFieldR21DefBinSerializeBuffer
// 地址: 0xc842b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = sx.q(arg2)
void* const x20

if ((zx.d(*(arg3 + 0x50)) & 0x10) == 0)
    x20 = *(arg1 + x8)
else
    x20 = &data_793a18

size_t result
int32_t x21

if (zx.d(*(arg4 + 0x10)) == 0)
    *(*arg4 + sx.q(*(arg4 + 8)) + x8) = *(arg4 + 0xc)
    int32_t x22_1 = zx.d(*(arg4 + 0x10)) == 0 ? 1 : 0
    result = strlen(x20)
    x21 = result.d + 1
    
    if (x22_1 != 0)
        result = memcpy(*arg4 + sx.q(*(arg4 + 0xc)), x20, sx.q(x21))
else
    result = strlen(x20)
    x21 = result.d + 1

*(arg4 + 0xc) += x21
return result
