// 函数: _Z25Transform2FromPosRotScaleRK4Vec2ff
// 地址: 0x1002440
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = *V21
int64_t* entry_x8
entry_x8[1] = *R2I
entry_x8[2] = x9
*entry_x8 = *arg1
int64_t result
int32_t v0
int32_t v1
result, v0, v1 = Rot2FromAngle(arg2)
entry_x8[1].d = v0
*(entry_x8 + 0xc) = v1
entry_x8[2].d = arg3
*(entry_x8 + 0x14) = arg3
return result
