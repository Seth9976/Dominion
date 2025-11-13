// 函数: spTransformConstraintData_create
// 地址: 0xfba998
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result =
    _spCalloc(1, 0x58, "..\..\ExternalCode\spine-c\src\spine\TransformConstraintData.c", 0x22)
int64_t x0_3 = _spMalloc(strlen(arg1) + 1, 
    "..\..\ExternalCode\spine-c\src\spine\TransformConstraintData.c", 0x23)
*result = x0_3
strcpy(x0_3, arg1)
return result
