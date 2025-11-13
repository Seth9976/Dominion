// 函数: spAnimationState_create
// 地址: 0xfbb958
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (data_2422590 == 0)
    data_2422590 = 1
    data_2422590 = spAnimation_create("<empty>", 0)

int64_t* result = _spCalloc(1, 0x68, "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0xe4)
*result = arg1
result[4].d = 0x3f800000
int64_t** x0_1
int128_t v0
x0_1, v0 = _spCalloc(1, 0x20, "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0x45)
v0.q = 0x1000000000
*x0_1 = result
x0_1[2] = 0x1000000000
x0_1[1] = _spCalloc(0x10, 8, "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0x49, v0)
x0_1[3].d = 0
result[9] = x0_1
result[8] = _spCalloc(0x80, 8, "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0xeb)
int64_t x0_4 = _spCalloc(0x80, 4, "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0xed)
*(result + 0x5c) = 0x80
result[0xa] = x0_4
return result
