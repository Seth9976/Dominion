// 函数: _Z27DefinitionDeleteBlockFieldsPvPK6DefMapP11AttribTable
// 地址: 0xc87d54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = *(arg2 + 0x10)

if (x22 == 0)
    return 

DefinitionDeleteField(arg1, *(arg2 + 8), arg3)

if (x22 s< 2)
    return 

int32_t x22_1 = 1
int64_t x23_1 = 0x68
int32_t x24_1

do
    x24_1 = *(arg2 + 0x10)
    x22_1 += 1
    DefinitionDeleteField(arg1, *(arg2 + 8) + x23_1, arg3)
    x23_1 += 0x68
while (x22_1 s< x24_1)
