// 函数: _Z14DomMapCompleteR13MapThreadData
// 地址: 0xc14988
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
int128_t v0
int128_t v1
result, v0, v1 = DomMapRender(arg1 + 0x5028, arg1 + 0x5110, arg1 + 0x21b0f8, false)
int64_t* entry_x8
*entry_x8 = result
void* x12 = *(gMapGlobals + 0x90)
void* x8_1 = *(gMapGlobals + 0x90)
v0.q = *(x12 + 0x5120 + sx.q(*(x12 + 0x1750b0)) * 0xc)
v1.d = 0x44800000
v1:4.d = 0x44800000
entry_x8[1] = vmul_f32(v0, v1, 0).q
entry_x8[0xb].d = *(x12 + 0x5058)
int128_t v0_1
v0_1.q = *(x12 + 0x5120 + sx.q(*(x12 + 0x1750b4)) * 0xc)
entry_x8[2] = vmul_f32(v0_1, v1, 0).q
*(entry_x8 + 0x5c) = *(x12 + 0x505c)
int128_t v0_2
v0_2.q = *(x12 + 0x5120 + sx.q(*(x12 + 0x1750b8)) * 0xc)
entry_x8[3] = vmul_f32(v0_2, v1, 0).q
entry_x8[0xc].d = *(x12 + 0x5060)
int128_t v0_3
v0_3.q = *(x12 + 0x5120 + sx.q(*(x12 + 0x1750bc)) * 0xc)
entry_x8[4] = vmul_f32(v0_3, v1, 0).q
*(entry_x8 + 0x64) = *(x12 + 0x5064)
int128_t v0_4
v0_4.q = *(x12 + 0x5120 + sx.q(*(x12 + 0x1750c0)) * 0xc)
entry_x8[5] = vmul_f32(v0_4, v1, 0).q
entry_x8[0xd].d = *(x12 + 0x5068)
int128_t v0_5
v0_5.q = *(x12 + 0x5120 + sx.q(*(x12 + 0x1750c4)) * 0xc)
entry_x8[6] = vmul_f32(v0_5, v1, 0).q
*(entry_x8 + 0x6c) = *(x12 + 0x506c)
int128_t v0_6
v0_6.q = *(x12 + 0x5120 + sx.q(*(x12 + 0x1750c8)) * 0xc)
entry_x8[7] = vmul_f32(v0_6, v1, 0).q
entry_x8[0xe].d = *(x12 + 0x5070)
int128_t v0_7
v0_7.q = *(x12 + 0x5120 + sx.q(*(x12 + 0x1750cc)) * 0xc)
entry_x8[8] = vmul_f32(v0_7, v1, 0).q
*(entry_x8 + 0x74) = *(x12 + 0x5074)
int128_t v0_8
v0_8.q = *(x12 + 0x5120 + sx.q(*(x12 + 0x1750d0)) * 0xc)
entry_x8[9] = vmul_f32(v0_8, v1, 0).q
entry_x8[0xf].d = *(x12 + 0x5078)
int128_t v0_9
v0_9.q = *(x12 + 0x5120 + sx.q(*(x12 + 0x1750d4)) * 0xc)
entry_x8[0xa] = vmul_f32(v0_9, v1, 0).q
*(entry_x8 + 0x7c) = *(x12 + 0x507c)
*(entry_x8 + 0x80) = *(x8_1 + 0x21b0e8)
return result
