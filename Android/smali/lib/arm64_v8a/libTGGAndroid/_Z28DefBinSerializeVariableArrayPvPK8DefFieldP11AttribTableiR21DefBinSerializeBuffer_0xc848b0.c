// 函数: _Z28DefBinSerializeVariableArrayPvPK8DefFieldP11AttribTableiR21DefBinSerializeBuffer
// 地址: 0xc848b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg2 + 0x50)
int32_t x22

if ((x8 & 0x10) == 0)
    x22 = arg4
else
    x22 = 0

if ((x8 & 0x100) != 0)
    int32_t* x8_1 = *(arg5 + 0x18)
    
    if (x8_1 != 0 && *x8_1 == 0)
        *x8_1 = *(arg5 + 0xc)

uint64_t x8_2 = zx.q(*arg2)
int64_t x9_4 = *arg5 + sx.q(*(arg5 + 8))

if (x22 != 0)
    uint32_t x11_1 = zx.d(*(arg5 + 0x10))
    int32_t x10_3 = (*(arg5 + 0xc) + 3) & 0xfffffffc
    *(arg5 + 0xc) = x10_3
    
    if (x11_1 == 0)
        *(x9_4 + x8_2) = x10_3
    
    int32_t x0_1 = DefinitionGetSize(*(arg2 + 0x30))
    int64_t x25_1 = *arg5
    int64_t x26_1 = sx.q(*(arg5 + 0xc))
    int32_t x24_1 = x0_1 * x22
    void* x23_1 = *DefinitionGetFieldData(arg1, arg2)
    
    if (zx.d(*(arg5 + 0x10)) == 0)
        memcpy(x25_1 + x26_1, x23_1, sx.q(x24_1))
    
    int32_t x25_2 = *(arg5 + 8)
    int32_t x8_4 = *(arg5 + 0xc)
    *(arg5 + 8) = x8_4
    *(arg5 + 0xc) = x8_4 + x24_1
    DefBinSerializeArray(x23_1, x22, arg2, arg3, arg5)
    *(arg5 + 8) = x25_2
else if (zx.d(*(arg5 + 0x10)) == 0)
    *(x9_4 + x8_2) = 0
