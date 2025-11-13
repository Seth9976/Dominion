// 函数: _Z28DefBinSerializeAssetPtrFieldPviR21DefBinSerializeBuffer
// 地址: 0xc84364
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = sx.q(arg2)

if (*(arg1 + x21) == 0)
    return 

void* x22_1 = *arg3
int64_t x23_1 = sx.q(*(arg3 + 8))
char* x0_1 = XString::operator char const*()
int32_t x21_1

if (zx.d(*(arg3 + 0x10)) == 0)
    *(x22_1 + x23_1 + x21) = *(arg3 + 0xc)
    int32_t x22_2 = zx.d(*(arg3 + 0x10)) == 0 ? 1 : 0
    x21_1 = strlen(x0_1).d + 1
    
    if (x22_2 != 0)
        memcpy(*arg3 + sx.q(*(arg3 + 0xc)), x0_1, sx.q(x21_1))
else
    x21_1 = strlen(x0_1).d + 1

*(arg3 + 0xc) += x21_1
