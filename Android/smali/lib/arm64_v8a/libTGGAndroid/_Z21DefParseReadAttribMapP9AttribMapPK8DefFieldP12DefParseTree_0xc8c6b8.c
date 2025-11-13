// 函数: _Z21DefParseReadAttribMapP9AttribMapPK8DefFieldP12DefParseTree
// 地址: 0xc8c6b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

AttribMap* x19 = arg1
int32_t x8_1

if (arg3 != 0)
    x8_1 = *(arg3 + 0x18)
    *(arg3 + 0x20) = 0

if (arg3 == 0 || x8_1 == 0)
    *x19 = 0
    *(x19 + 8) = 0
    return 

AttribTable* x20_1 = *(arg2 + 0x38)
AttribTagValuePair* x0_1
uint32_t x2
x0_1, x2 = XCalloc(x8_1 << 4)
void* __offset(AttribMap, 0x8) x22_1 = x19 + 8
*x22_1 = x0_1
int64_t* x8_2 = *(arg3 + 8)

if (x8_2 == 0)
    *x19 = 0
    XFree(*x22_1)
    *x22_1 = 0
    return 

DefParseItem** i_1 = x8_2[1]
uint32_t x2_1
arg1, x2_1 = DefParseReadTagValue(x20_1, x0_1, x2, *x8_2)
int32_t x21_2 = arg1.d & 1

if (i_1 != 0)
    DefParseItem** i
    
    do
        i = i_1[1]
        arg1, x2_1 = DefParseReadTagValue(x20_1, *x22_1 + (zx.q(x21_2) << 4), x2_1, *i_1)
        x21_2 += arg1.d & 1
        i_1 = i
    while (i != 0)

*x19 = x21_2

if (x21_2 == 0)
    XFree(*x22_1)
    *x22_1 = 0
