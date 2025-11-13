// 函数: _spAnimationState_trackEntry
// 地址: 0xfbd0b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result
int128_t v0
result, v0 = _spCalloc(1, 0xb0, "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0x32e)
*result = arg3
result[5].d = arg2
*(result + 0x2c) = arg4
__builtin_memset(&result[6], 0, 0x14)
v0.d = *(arg3 + 8)
*(result + 0x44) = v0.d
data_71ba00
__builtin_memcpy(&result[9], 
    "\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\xbf\x00\x00\x80\xbf\x"
"00\x00\x00\x4f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00", 
    0x28)
*(result + 0x74) = 0x3f800000

if (arg5 == 0)
    v0.d = 0f
else
    v0 = spAnimationStateData_getMix(*arg1, *arg5, arg3)

result[0xe].d = v0.d
*(result + 0x7c) = 2
result[0x10] = spIntArray_create(0x10)
int64_t* x0_2
int128_t v0_1
x0_2, v0_1 = _spCalloc(1, 0x10, "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0x28)
v0_1.q = 0x1000000000
*x0_2 = 0x1000000000
x0_2[1] = _spCalloc(0x10, 8, "..\..\ExternalCode\spine-c\src\spine\AnimationState.c", 0x28, v0_1)
result[0x11] = x0_2
return result
