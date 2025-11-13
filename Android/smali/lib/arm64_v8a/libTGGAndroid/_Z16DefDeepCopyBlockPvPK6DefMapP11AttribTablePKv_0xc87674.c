// 函数: _Z16DefDeepCopyBlockPvPK6DefMapP11AttribTablePKv
// 地址: 0xc87674
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = *(arg2 + 0x10)

if (x23 == 0)
    return 

DefDeepCopyField(arg1, *(arg2 + 8), arg3, arg4)

if (x23 s< 2)
    return 

int32_t x23_1 = 1
int64_t x24_1 = 0x68
int32_t x25_1

do
    x25_1 = *(arg2 + 0x10)
    x23_1 += 1
    DefDeepCopyField(arg1, *(arg2 + 8) + x24_1, arg3, arg4)
    x24_1 += 0x68
while (x23_1 s< x25_1)
