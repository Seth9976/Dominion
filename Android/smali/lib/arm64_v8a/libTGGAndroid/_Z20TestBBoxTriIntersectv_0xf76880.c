// 函数: _Z20TestBBoxTriIntersectv
// 地址: 0xf76880
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.d = fconvert.s(-1f)
v0:4.d = fconvert.s(-1f)
int128_t v3
v3.d = fconvert.s(1f)
v3:4.d = fconvert.s(1f)
int128_t v1
v1.q = *V0
float v4 = *(V0 + 8)
double v0_1 = vadd_f32(v1, v0)
double v1_1 = vadd_f32(v1, v3)
v3.d = fconvert.s(1f)
v3.d = v4 f+ v3.d
double var_58 = v0_1
int64_t var_80 = 0
int64_t var_78 = 0
int32_t var_68 = 0
float var_50 = v4 + fconvert.s(-1f)
double var_4c = v1_1
int32_t var_44 = v3.d
var_80 = 0x400000003f666666
int64_t var_70 = 0x3f66666640000000
int64_t var_64 = 0x4000000040000000
IntersectBBoxTri(&var_58, &var_80)
var_78 = 0
var_80 = 0
int64_t var_64_1 = 0x4000000000000000
var_80.d = 0x40000000
int64_t var_78_1
__builtin_strncpy(&var_78_1, "fff?fff?", 8)
var_70 = 0x4000000040000000
IntersectBBoxTri(&var_58, &var_80)
int64_t var_78_2 = 0
int64_t var_70_1 = 0
var_64_1:4.d = 0
var_80 = 0x400000003f666666
var_78_2 = 0x3f66666640000000
var_68.q = 0x4000000040000000
IntersectBBoxTri(&var_58, &var_80)
var_80 = 0
int64_t var_78_3 = 0
int32_t var_68_1 = 0
var_80 = 0x4000000040000000
int64_t var_70_2 = 0x400000003f666666
int64_t var_64_2 = 0x3f66666640000000
IntersectBBoxTri(&var_58, &var_80)
var_78_3 = 0
var_80 = 0
int64_t var_64_3 = 0x4000000000000000
var_80.d = 0x40000000
int64_t var_78_4 = 0x4000000040000000
__builtin_strncpy(&var_70_2:4, "fff?fff?", 8)
IntersectBBoxTri(&var_58, &var_80)
int64_t var_78_5 = 0
int64_t var_70_3 = 0
var_64_3:4.d = 0
var_80 = 0x4000000040000000
var_78_5 = 0x400000003f666666
var_68_1.q = 0x3f66666640000000
IntersectBBoxTri(&var_58, &var_80)
var_80 = 0
int64_t var_78_6 = 0
int32_t var_68_2 = 0
var_80 = 0x3f66666640000000
int64_t var_70_4 = 0x4000000040000000
int64_t var_64_4 = 0x400000003f666666
IntersectBBoxTri(&var_58, &var_80)
__builtin_strncpy(&var_80, "fff?", 0x14)
int64_t var_78_7 = 0x4000000040000000
int64_t var_64_5 = 0x3f66666600000000
var_70_4 = 0x4000000040000000
IntersectBBoxTri(&var_58, &var_80)
int64_t var_78_8 = 0
int64_t var_70_5 = 0
var_64_5:4.d = 0
var_80 = 0x3f66666640000000
var_78_8 = 0x4000000040000000
var_68_2.q = 0x400000003f666666
IntersectBBoxTri(&var_58, &var_80)
int64_t var_78_9
__builtin_memset(&var_78_9, 0, 0x1c)
var_78_9:4.d = 0x3f99999a
var_80 = 0x3dcccccd3fa66666
int64_t var_70_6 = 0x3f8ccccd3dcccccd
IntersectBBoxTri(&var_58, &var_80)
__builtin_memcpy(&var_80, 
    "\xcd\xcc\x8c\x3f\x00\x00\x80\x3f\xec\x51\x78\x3f\x00\x00\x80\x3f\xec\x51\x78\x3f\xcd\xcc\x8c\x3f\x"
"ec\x51\x78\x3f\xcd\xcc\x8c\x3f\x00\x00\x80\x3f", 
    0x24)
return IntersectBBoxTri(&var_58, &var_80)
