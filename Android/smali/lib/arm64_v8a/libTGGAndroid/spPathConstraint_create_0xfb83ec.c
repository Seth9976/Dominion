// 函数: spPathConstraint_create
// 地址: 0xfb83ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = _spCalloc(1, 0xb0, "..\..\ExternalCode\spine-c\src\spine\PathConstraint.c", 0x29)
*result = arg1
int64_t x8 = sx.q(*(arg1 + 0x10))
result[1].d = x8.d
int64_t x0_1 = _spMalloc(x8 << 3, "..\..\ExternalCode\spine-c\src\spine\PathConstraint.c", 0x2c)
int32_t x8_1 = result[1].d
result[2] = x0_1

if (x8_1 s>= 1)
    int64_t i = 0
    
    do
        i += 1
        result[2][i] = spSkeleton_findBone(arg2, *((*(*result + 0x18))[i] + 8))
    while (i s< sx.q(result[1].d))

result[3] = spSkeleton_findSlot(arg2, *(*(*result + 0x20) + 8))
result[4].d = *(arg1 + 0x38)
*(result + 0x24) = *(arg1 + 0x3c)
result[5].d = *(arg1 + 0x40)
int32_t v0 = *(arg1 + 0x44)
result[6].d = 0
result[7] = 0
result[8].d = 0
result[9] = 0
result[0xa].d = 0
result[0xb] = 0
result[0xc].d = 0
result[0xd] = 0
result[0xe].d = 0
*(result + 0x2c) = v0
result[0xf] = 0
return result
