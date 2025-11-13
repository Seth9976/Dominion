// 函数: spIkConstraint_create
// 地址: 0xfb79a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = _spCalloc(1, 0x38, "..\..\ExternalCode\spine-c\src\spine\IkConstraint.c", 0x26)
*result = arg1
result[4].d = *(arg1 + 0x28)
*(result + 0x24) = *(arg1 + 0x2c)
result[5].d = *(arg1 + 0x30)
*(result + 0x2c) = *(arg1 + 0x38)
result[6].d = *(arg1 + 0x3c)
int64_t x8_3 = sx.q(*(arg1 + 0x10))
result[1].d = x8_3.d
int64_t x0_1 = _spMalloc(x8_3 << 3, "..\..\ExternalCode\spine-c\src\spine\IkConstraint.c", 0x2f)
int32_t x8_4 = result[1].d
result[2] = x0_1

if (x8_4 s>= 1)
    int64_t i = 0
    
    do
        i += 1
        result[2][i] = spSkeleton_findBone(arg2, *((*(*result + 0x18))[i] + 8))
    while (i s< sx.q(result[1].d))

result[3] = spSkeleton_findBone(arg2, *(*(*result + 0x20) + 8))
return result
