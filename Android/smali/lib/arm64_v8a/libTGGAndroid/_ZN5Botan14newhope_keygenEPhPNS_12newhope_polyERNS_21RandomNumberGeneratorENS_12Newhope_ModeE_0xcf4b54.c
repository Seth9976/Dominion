// 函数: _ZN5Botan14newhope_keygenEPhPNS_12newhope_polyERNS_21RandomNumberGeneratorENS_12Newhope_ModeE
// 地址: 0xcf4b54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint128_t entry_v15
int64_t var_90 = entry_v15.q
uint128_t entry_v14
int64_t var_88 = entry_v14.q
uint128_t entry_v13
int64_t var_80 = entry_v13.q
uint128_t entry_v11
int64_t var_70 = entry_v11.q
uint128_t entry_v10
int64_t var_68 = entry_v10.q
uint128_t entry_v9
int64_t var_60 = entry_v9.q
uint128_t entry_v8
int64_t var_58 = entry_v8.q
uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
int128_t var_10c0
(*(*arg3 + 0x10))(arg3, &var_10c0, 0x20)
void* x0_1 = operator new(0xa80)
memset(x0_1, 0, 0xa80)
int128_t var_10b0
char var_1098
uint8_t* x23_1
int16_t var_10e0
void* var_10d0
uint8_t* var_10c8

if (arg4 != 1)
    var_1098 = 0x12
    int64_t var_1097_1
    __builtin_strcpy(&var_1097_1, "SHAKE-128")
    var_10e0 = 0
    Botan::StreamCipher::create_or_throw(&var_1098, &var_10e0)
    x23_1 = var_10c8
    
    if ((zx.d(var_10e0.b) & 1) != 0)
        operator delete(var_10d0)
    
    char var_1088
    
    if ((zx.d(var_1098) & 1) != 0)
        operator delete(var_1088.q)
    Botan::SymmetricAlgorithm::set_key(x23_1, &var_10c0)
else
    var_1098 = 0x1e
    int64_t var_1097
    __builtin_strncpy(&var_1097, "CTR-BE(AES-128)", 0x10)
    var_10e0 = 0
    Botan::StreamCipher::create_or_throw(&var_1098, &var_10e0)
    x23_1 = var_10c8
    
    if ((zx.d(var_10e0.b) & 1) != 0)
        operator delete(var_10d0)
    
    char var_1088_1
    
    if ((zx.d(var_1098) & 1) != 0)
        operator delete(var_1088_1.q)
    Botan::SymmetricAlgorithm::set_key(x23_1, &var_10c0)
    (*(*x23_1 + 0x40))(x23_1, &var_10b0, 0x10)
memset(x0_1, 0, 0xa80)
(*(*x23_1 + 0x30))(x23_1, x0_1, x0_1, 0xa80)
int64_t i = 0
int64_t x8_11 = 0
int16_t var_18e0[0x3d8]

do
    char* x10_1 = x0_1 + x8_11
    int32_t x9_2 = (0xffffc0ff & zx.d(*x10_1)) | (0x3f & zx.d(x10_1[1])) << 8
    
    if (x9_2 u<= 0x3000)
        var_18e0[i] = x9_2.w
        i += 1
    
    x8_11 += 2
    
    if (x8_11 u>= 0xa80)
        memset(x0_1, 0, 0xa80)
        (*(*x23_1 + 0x30))(x23_1, x0_1, x0_1, 0xa80)
        x8_11 = 0
while (i u< 0x400)

if (x23_1 != 0)
    (*(*x23_1 + 8))(x23_1)

operator delete(x0_1)
int128_t v0
int128_t v1
int128_t v2
int128_t v3
int128_t v5
uint128_t v6
v0, v1, v2, v3, v5, v6 = (*(*arg3 + 0x10))(arg3, &var_1098, 0x1000)
int64_t i_1 = 0
char* x9_3 = &var_1098
v0.b = 1
v0:1.b = 1
v0:2.b = 1
v0:3.b = 1
v0:4.b = 1
v0:5.b = 1
v0:6.b = 1
v0:7.b = 1
v0:8.b = 1
v0:9.b = 1
v0:0xa.b = 1
v0:0xb.b = 1
v0:0xc.b = 1
v0:0xd.b = 1
v0:0xe.b = 1
v0:0xf.b = 1
v1.q = 0xff000000ff
v1:8.q = 0xff000000ff
v2.w = 0x3001
v2:2.w = 0x3001
v2:4.w = 0x3001
v2:6.w = 0x3001

do
    v3 = *x9_3
    x9_3 = &x9_3[0x10]
    v5.d = v3.d u>> 1
    v5:4.d = v3:4.d u>> 1
    v5:8.d = v3:8.d u>> 1
    v5:0xc.d = v3:0xc.d u>> 1
    v6.d = v3.d u>> 2
    v6:4.d = v3:4.d u>> 2
    v6:8.d = v3:8.d u>> 2
    v6:0xc.d = v3:0xc.d u>> 2
    int128_t v5_1
    v5_1.d = v3.d u>> 3
    v5_1:4.d = v3:4.d u>> 3
    v5_1:8.d = v3:8.d u>> 3
    v5_1:0xc.d = v3:0xc.d u>> 3
    int128_t v6_1
    v6_1.d = v3.d u>> 4
    v6_1:4.d = v3:4.d u>> 4
    v6_1:8.d = v3:8.d u>> 4
    v6_1:0xc.d = v3:0xc.d u>> 4
    int128_t v5_2
    v5_2.d = v3.d u>> 5
    v5_2:4.d = v3:4.d u>> 5
    v5_2:8.d = v3:8.d u>> 5
    v5_2:0xc.d = v3:0xc.d u>> 5
    int128_t v4_5 = (v5 & v0) + (v3 & v0) + (v6 & v0) + (v5_1 & v0) + (v6_1 & v0)
    int128_t v6_2
    v6_2.d = v3.d u>> 6
    v6_2:4.d = v3:4.d u>> 6
    v6_2:8.d = v3:8.d u>> 6
    v6_2:0xc.d = v3:0xc.d u>> 6
    v3.d u>>= 7
    v3:4.d u>>= 7
    v3:8.d u>>= 7
    v3:0xc.d u>>= 7
    uint128_t v3_2 = v4_5 + (v5_2 & v0) + (v6_2 & v0) + (v3 & v0)
    int128_t v4_7
    v4_7.d = v3_2.d u>> 8
    v4_7:4.d = v3_2:4.d u>> 8
    v4_7:8.d = v3_2:8.d u>> 8
    v4_7:0xc.d = v3_2:0xc.d u>> 8
    int128_t v6_3
    v6_3.d = v3_2.d u>> 0x10
    v6_3:4.d = v3_2:4.d u>> 0x10
    v6_3:8.d = v3_2:8.d u>> 0x10
    v6_3:0xc.d = v3_2:0xc.d u>> 0x10
    *(arg2 + i_1) =
        (vmovn_s32((v3_2 & v1) + (v4_7 & v1) - vsraq_n_u32(v6_3 & v1, v3_2, 0x18)) + v2).q
    i_1 += 8
while (i_1 != 0x800)

sub_dcafe8(arg2)
int128_t v0_1
int128_t v1_1
int128_t v2_1
int128_t v3_5
int128_t v5_4
uint128_t v6_5
uint128_t v17
int128_t v18
int128_t v19
int128_t v20
int128_t v21
int128_t v22
int128_t v23
int128_t v24
int128_t v25
int128_t v26
int128_t v27
v0_1, v1_1, v2_1, v3_5, v5_4, v6_5, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27 =
    (*(*arg3 + 0x10))(arg3, &var_1098, 0x1000)
v2_1.w = 0x3001
v2_1:2.w = 0x3001
v2_1:4.w = 0x3001
v2_1:6.w = 0x3001
int64_t i_2 = 0
char* x9_4 = &var_1098
v0_1.b = 1
v0_1:1.b = 1
v0_1:2.b = 1
v0_1:3.b = 1
v0_1:4.b = 1
v0_1:5.b = 1
v0_1:6.b = 1
v0_1:7.b = 1
v0_1:8.b = 1
v0_1:9.b = 1
v0_1:0xa.b = 1
v0_1:0xb.b = 1
v0_1:0xc.b = 1
v0_1:0xd.b = 1
v0_1:0xe.b = 1
v0_1:0xf.b = 1
v1_1.q = 0xff000000ff
v1_1:8.q = 0xff000000ff
int128_t var_20e0

do
    v3_5 = *x9_4
    x9_4 = &x9_4[0x10]
    v5_4.d = v3_5.d u>> 1
    v5_4:4.d = v3_5:4.d u>> 1
    v5_4:8.d = v3_5:8.d u>> 1
    v5_4:0xc.d = v3_5:0xc.d u>> 1
    v6_5.d = v3_5.d u>> 2
    v6_5:4.d = v3_5:4.d u>> 2
    v6_5:8.d = v3_5:8.d u>> 2
    v6_5:0xc.d = v3_5:0xc.d u>> 2
    int128_t v5_5
    v5_5.d = v3_5.d u>> 3
    v5_5:4.d = v3_5:4.d u>> 3
    v5_5:8.d = v3_5:8.d u>> 3
    v5_5:0xc.d = v3_5:0xc.d u>> 3
    int128_t v6_6
    v6_6.d = v3_5.d u>> 4
    v6_6:4.d = v3_5:4.d u>> 4
    v6_6:8.d = v3_5:8.d u>> 4
    v6_6:0xc.d = v3_5:0xc.d u>> 4
    int128_t v5_6
    v5_6.d = v3_5.d u>> 5
    v5_6:4.d = v3_5:4.d u>> 5
    v5_6:8.d = v3_5:8.d u>> 5
    v5_6:0xc.d = v3_5:0xc.d u>> 5
    int128_t v4_14 = (v5_4 & v0_1) + (v3_5 & v0_1) + (v6_5 & v0_1) + (v5_5 & v0_1) + (v6_6 & v0_1)
    int128_t v6_7
    v6_7.d = v3_5.d u>> 6
    v6_7:4.d = v3_5:4.d u>> 6
    v6_7:8.d = v3_5:8.d u>> 6
    v6_7:0xc.d = v3_5:0xc.d u>> 6
    v3_5.d u>>= 7
    v3_5:4.d u>>= 7
    v3_5:8.d u>>= 7
    v3_5:0xc.d u>>= 7
    uint128_t v3_7 = v4_14 + (v5_6 & v0_1) + (v6_7 & v0_1) + (v3_5 & v0_1)
    int128_t v4_16
    v4_16.d = v3_7.d u>> 8
    v4_16:4.d = v3_7:4.d u>> 8
    v4_16:8.d = v3_7:8.d u>> 8
    v4_16:0xc.d = v3_7:0xc.d u>> 8
    int128_t v6_8
    v6_8.d = v3_7.d u>> 0x10
    v6_8:4.d = v3_7:4.d u>> 0x10
    v6_8:8.d = v3_7:8.d u>> 0x10
    v6_8:0xc.d = v3_7:0xc.d u>> 0x10
    *(&var_20e0 + i_2) =
        (vmovn_s32((v3_7 & v1_1) + (v4_16 & v1_1) - vsraq_n_u32(v6_8 & v1_1, v3_7, 0x18)) + v2_1).q
    i_2 += 8
while (i_2 != 0x800)

uint128_t v0_2
int128_t v1_2
uint128_t v2_2
uint128_t v3_10
int128_t v4_19
uint128_t v5_8
uint128_t v6_10
uint128_t v7
v0_2, v1_2, v2_2, v3_10, v4_19, v5_8, v6_10, v7 = sub_dcafe8(&var_20e0)
int64_t i_3 = 0
v0_2.d = 0x2fff
v0_2:4.d = 0x2fff
v0_2:8.d = 0x2fff
v0_2:0xc.d = 0x2fff
v1_2.d = 0x3ffff
v1_2:4.d = 0x3ffff
v1_2:8.d = 0x3ffff
v1_2:0xc.d = 0x3ffff
v2_2.w = 0xc72
v2_2:2.w = 0xc72
v2_2:4.w = 0xc72
v2_2:6.w = 0xc72
v3_10.d = 0x255538e
v3_10:4.d = 0x255538e
v3_10:8.d = 0x255538e
v3_10:0xc.d = 0x255538e
v4_19.d = 0x3fffe
v4_19:4.d = 0x3fffe
v4_19:8.d = 0x3fffe
v4_19:0xc.d = 0x3fffe
v5_8.d = 0x3001
v5_8:4.d = 0x3001
v5_8:8.d = 0x3001
v5_8:0xc.d = 0x3001
void var_28e0
uint128_t v16_3

do
    v6_10 = *(&var_18e0 + i_3)
    v7 = *(arg2 + i_3)
    v17.d = zx.d(v6_10.w)
    v17:4.d = zx.d(v6_10:2.w)
    v17:8.d = zx.d(v6_10:4.w)
    v17:0xc.d = zx.d(v6_10:6.w)
    uint128_t v17_3 = vmulq_s32(vmulq_s32(v17, v3_10) & v4_19, v5_8)
    uint128_t v16_1 = vextq_s8(v6_10, v6_10, 8)
    uint128_t v17_4 = vmlal_u16(v17_3, v6_10, v2_2)
    v6_10.d = zx.d(v6_10:8.w)
    v6_10:4.d = zx.d(v6_10:0xa.w)
    v6_10:8.d = zx.d(v6_10:0xc.w)
    v6_10:0xc.d = zx.d(v6_10:0xe.w)
    uint128_t v6_14 = vmlal_u16(vmulq_s32(vmulq_s32(v6_10, v3_10) & v4_19, v5_8), v16_1, v2_2)
    v16_1.d = zx.d(v7:8.w)
    v16_1:4.d = zx.d(v7:0xa.w)
    v16_1:8.d = zx.d(v7:0xc.w)
    v16_1:0xc.d = zx.d(v7:0xe.w)
    v7.d = zx.d(v7.w)
    v7:4.d = zx.d(v7:2.w)
    v7:8.d = zx.d(v7:4.w)
    v7:0xc.d = zx.d(v7:6.w)
    v17_4.d u>>= 0x12
    v17_4:4.d u>>= 0x12
    v17_4:8.d u>>= 0x12
    v17_4:0xc.d u>>= 0x12
    v6_14.d u>>= 0x12
    v6_14:4.d u>>= 0x12
    v6_14:8.d u>>= 0x12
    v6_14:0xc.d u>>= 0x12
    uint128_t v7_1 = vmulq_s32(v17_4, v7)
    uint128_t v6_15 = vmulq_s32(v6_14, v16_1)
    uint128_t v17_5 = vmulq_s32(v7_1, v0_2)
    v16_3 = vmulq_s32(v6_15, v0_2) & v1_2
    uint128_t v7_2
    v7_2.d = vmlaq_s32(v7_1, v17_5 & v1_2, v5_8).d u>> 0x12
    v7_2:4.d u>>= 0x12
    v7_2:8.d u>>= 0x12
    v7_2:0xc.d u>>= 0x12
    v6_10.d = vmlaq_s32(v6_15, v16_3, v5_8).d u>> 0x12
    v6_10:4.d u>>= 0x12
    v6_10:8.d u>>= 0x12
    v6_10:0xc.d u>>= 0x12
    vmovn_s32(v7_2)
    *(&var_28e0 + i_3) = vmovn_high_s32(v6_10)
    i_3 += 0x10
while (i_3 != 0x800)

int64_t i_4 = 0
v0_2.w = 5
v0_2:2.w = 5
v0_2:4.w = 5
v0_2:6.w = 5
int128_t v1_3 = not.o(zx.o(0x3000))
void var_30e0
uint128_t v6_18
uint128_t v7_6

do
    v2_2 = *(&var_20e0 + i_4)
    void var_20d0
    v3_10 = *(&var_20d0 + i_4)
    v4_19 = *(&var_28e0 + i_4)
    void var_28d0
    v5_8 = *(&var_28d0 + i_4)
    void* x14_1 = &var_30e0 + i_4
    i_4 += 0x20
    uint128_t v2_3 = v4_19 + v2_2
    uint128_t v3_11 = v5_8 + v3_10
    uint128_t v4_20 = vextq_s8(v2_3, v2_3, 8)
    v5_8 = mulu.dp.o(vextq_s8(v3_11, v3_11, 8), v0_2)
    vshrn_n_u32(mulu.dp.o(v2_3, v0_2), 0x10)
    vshrn_n_u32(mulu.dp.o(v3_11, v0_2), 0x10)
    v6_18 = vshrn_high_n_u32(mulu.dp.o(v4_20, v0_2), 0x10)
    v7_6 = vshrn_high_n_u32(v5_8, 0x10)
    v2_2 = vmlaq_s16(v2_3, v6_18, v1_3)
    v3_10 = vmlaq_s16(v3_11, v7_6, v1_3)
    *x14_1 = v2_2
    *(x14_1 + 0x10) = v3_10
while (i_4 != 0x800)

v0_2.q = 0x7ffffffffff0f06
int64_t i_5 = 0
v27.w = 5
v27:2.w = 5
v27:4.w = 5
v27:6.w = 5
v0_2.q = -0xf0f80001
int128_t v28 = not.o(zx.o(0x3000))
uint128_t var_3100 = data_71b200
data_71c3b0
v6_18 = data_71b970
v7_6 = data_71c200
v16_3 = data_71bb60
v17 = data_71c3c0
v18 = data_71c550
v19 = data_71bb70
v20 = data_71b800
v21 = data_71a910
v22 = data_71b0c0
v23 = data_71b400
v24 = data_71afb0
v25 = data_71cbc0
v26 = data_71ac20
void* x9_5 = &var_30e0
int128_t var_3130
__builtin_memcpy(&var_3130, 
    "\xff\xff\x04\x0d\xff\xff\xff\xff\xff\x05\x0e\xff\xff\xff\xff\xff\x00\x01\x02\x03\x14\x15\x16\x07\x"
"ff\xff\xff\xff\xff\xff\xff\xff", 
    0x20)

do
    entry_v8.w = *x9_5
    entry_v9.w = *(x9_5 + 2)
    entry_v10.w = *(x9_5 + 4)
    entry_v11.w = *(x9_5 + 6)
    entry_v8:2.w = *(x9_5 + 8)
    entry_v9:2.w = *(x9_5 + 0xa)
    entry_v10:2.w = *(x9_5 + 0xc)
    entry_v11:2.w = *(x9_5 + 0xe)
    entry_v8:4.w = *(x9_5 + 0x10)
    entry_v9:4.w = *(x9_5 + 0x12)
    entry_v10:4.w = *(x9_5 + 0x14)
    entry_v11:4.w = *(x9_5 + 0x16)
    entry_v8:6.w = *(x9_5 + 0x18)
    entry_v9:6.w = *(x9_5 + 0x1a)
    entry_v10:6.w = *(x9_5 + 0x1c)
    entry_v11:6.w = *(x9_5 + 0x1e)
    entry_v8:8.w = *(x9_5 + 0x20)
    entry_v9:8.w = *(x9_5 + 0x22)
    entry_v10:8.w = *(x9_5 + 0x24)
    entry_v11:8.w = *(x9_5 + 0x26)
    entry_v8:0xa.w = *(x9_5 + 0x28)
    entry_v9:0xa.w = *(x9_5 + 0x2a)
    entry_v10:0xa.w = *(x9_5 + 0x2c)
    entry_v11:0xa.w = *(x9_5 + 0x2e)
    entry_v8:0xc.w = *(x9_5 + 0x30)
    entry_v9:0xc.w = *(x9_5 + 0x32)
    entry_v10:0xc.w = *(x9_5 + 0x34)
    entry_v11:0xc.w = *(x9_5 + 0x36)
    entry_v8:0xe.w = *(x9_5 + 0x38)
    entry_v9:0xe.w = *(x9_5 + 0x3a)
    entry_v10:0xe.w = *(x9_5 + 0x3c)
    entry_v11:0xe.w = *(x9_5 + 0x3e)
    x9_5 += 0x40
    void* x10_4 = &arg1[i_5]
    i_5 += 0x38
    int128_t v29_2 = mulu.dp.o(vextq_s8(entry_v8, entry_v8, 8), v27)
    vshrn_n_u32(mulu.dp.o(entry_v8, v27), 0x10)
    uint128_t v8 = vmlaq_s16(entry_v8, vshrn_high_n_u32(v29_2, 0x10), v28)
    int128_t v29_4 = mulu.dp.o(vextq_s8(entry_v9, entry_v9, 8), v27)
    vshrn_n_u32(mulu.dp.o(entry_v9, v27), 0x10)
    uint128_t v9 = vmlaq_s16(entry_v9, vshrn_high_n_u32(v29_4, 0x10), v28)
    int128_t v29_6 = mulu.dp.o(vextq_s8(entry_v10, entry_v10, 8), v27)
    vshrn_n_u32(mulu.dp.o(entry_v10, v27), 0x10)
    uint128_t v10 = vmlaq_s16(entry_v10, vshrn_high_n_u32(v29_6, 0x10), v28)
    int128_t v29_8 = mulu.dp.o(vextq_s8(entry_v11, entry_v11, 8), v27)
    vshrn_n_u32(mulu.dp.o(entry_v11, v27), 0x10)
    uint128_t v11 = vmlaq_s16(entry_v11, vshrn_high_n_u32(v29_8, 0x10), v28)
    int128_t v29_9 = v8 + v28
    uint128_t v31_1 = v10 + v28
    entry_v13.w = v29_9.w s>> 0xf
    entry_v13:2.w = v29_9:2.w s>> 0xf
    entry_v13:4.w = v29_9:4.w s>> 0xf
    entry_v13:6.w = v29_9:6.w s>> 0xf
    entry_v13:8.w = v29_9:8.w s>> 0xf
    entry_v13:0xa.w = v29_9:0xa.w s>> 0xf
    entry_v13:0xc.w = v29_9:0xc.w s>> 0xf
    entry_v13:0xe.w = v29_9:0xe.w s>> 0xf
    uint128_t v30_13 = v9 + v28
    uint128_t v12_1 = v11 + v28
    entry_v15.w = v31_1.w s>> 0xf
    entry_v15:2.w = v31_1:2.w s>> 0xf
    entry_v15:4.w = v31_1:4.w s>> 0xf
    entry_v15:6.w = v31_1:6.w s>> 0xf
    entry_v15:8.w = v31_1:8.w s>> 0xf
    entry_v15:0xa.w = v31_1:0xa.w s>> 0xf
    entry_v15:0xc.w = v31_1:0xc.w s>> 0xf
    entry_v15:0xe.w = v31_1:0xe.w s>> 0xf
    entry_v14.w = v30_13.w s>> 0xf
    entry_v14:2.w = v30_13:2.w s>> 0xf
    entry_v14:4.w = v30_13:4.w s>> 0xf
    entry_v14:6.w = v30_13:6.w s>> 0xf
    entry_v14:8.w = v30_13:8.w s>> 0xf
    entry_v14:0xa.w = v30_13:0xa.w s>> 0xf
    entry_v14:0xc.w = v30_13:0xc.w s>> 0xf
    entry_v14:0xe.w = v30_13:0xe.w s>> 0xf
    v0_2.w = v12_1.w s>> 0xf
    v0_2:2.w = v12_1:2.w s>> 0xf
    v0_2:4.w = v12_1:4.w s>> 0xf
    v0_2:6.w = v12_1:6.w s>> 0xf
    v0_2:8.w = v12_1:8.w s>> 0xf
    v0_2:0xa.w = v12_1:0xa.w s>> 0xf
    v0_2:0xc.w = v12_1:0xc.w s>> 0xf
    v0_2:0xe.w = v12_1:0xe.w s>> 0xf
    uint128_t v1_5 = vbslq_s8(entry_v13, v8, v29_9)
    uint128_t v30_14 = vbslq_s8(entry_v14, v9, v30_13)
    uint128_t v29_11 = vbslq_s8(entry_v15, v10, v31_1)
    uint128_t v0_3 = vbslq_s8(v0_2, v11, v12_1)
    v31_1.w = v1_5.w u>> 8
    v31_1:2.w = v1_5:2.w u>> 8
    v31_1:4.w = v1_5:4.w u>> 8
    v31_1:6.w = v1_5:6.w u>> 8
    v31_1:8.w = v1_5:8.w u>> 8
    v31_1:0xa.w = v1_5:0xa.w u>> 8
    v31_1:0xc.w = v1_5:0xc.w u>> 8
    v31_1:0xe.w = v1_5:0xe.w u>> 8
    v11.w = v30_14.w << 6
    v11:2.w = v30_14:2.w << 6
    v11:4.w = v30_14:4.w << 6
    v11:6.w = v30_14:6.w << 6
    v11:8.w = v30_14:8.w << 6
    v11:0xa.w = v30_14:0xa.w << 6
    v11:0xc.w = v30_14:0xc.w << 6
    v11:0xe.w = v30_14:0xe.w << 6
    v2_2.w = v29_11.w u>> 0xc
    v2_2:2.w = v29_11:2.w u>> 0xc
    v2_2:4.w = v29_11:4.w u>> 0xc
    v2_2:6.w = v29_11:6.w u>> 0xc
    v2_2:8.w = v29_11:8.w u>> 0xc
    v2_2:0xa.w = v29_11:0xa.w u>> 0xc
    v2_2:0xc.w = v29_11:0xc.w u>> 0xc
    v2_2:0xe.w = v29_11:0xe.w u>> 0xc
    v3_10.w = v0_3.w << 2
    v3_10:2.w = v0_3:2.w << 2
    v3_10:4.w = v0_3:4.w << 2
    v3_10:6.w = v0_3:6.w << 2
    v3_10:8.w = v0_3:8.w << 2
    v3_10:0xa.w = v0_3:0xa.w << 2
    v3_10:0xc.w = v0_3:0xc.w << 2
    v3_10:0xe.w = v0_3:0xe.w << 2
    entry_v13 = vshrn_n_u16(v0_3, 6)
    v12_1.w = v30_14.w u>> 0xa
    v12_1:2.w = v30_14:2.w u>> 0xa
    v12_1:4.w = v30_14:4.w u>> 0xa
    v12_1:6.w = v30_14:6.w u>> 0xa
    v12_1:8.w = v30_14:8.w u>> 0xa
    v12_1:0xa.w = v30_14:0xa.w u>> 0xa
    v12_1:0xc.w = v30_14:0xc.w u>> 0xa
    v12_1:0xe.w = v30_14:0xe.w u>> 0xa
    entry_v14.w = v29_11.w << 4
    entry_v14:2.w = v29_11:2.w << 4
    entry_v14:4.w = v29_11:4.w << 4
    entry_v14:6.w = v29_11:6.w << 4
    entry_v14:8.w = v29_11:8.w << 4
    entry_v14:0xa.w = v29_11:0xa.w << 4
    entry_v14:0xc.w = v29_11:0xc.w << 4
    entry_v14:0xe.w = v29_11:0xe.w << 4
    vshrn_n_u16(v29_11, 4)
    entry_v15 = vorrq_s8(v11, v31_1)
    uint128_t v31_2 = vorrq_s8(v3_10, v2_2)
    vshrn_n_u16(v30_14, 2)
    uint128_t v12_2 = vorrq_s8(entry_v14, v12_1)
    entry_v11 = vmovn_high_s16(v1_5)
    entry_v10 = vmovn_high_s16(v31_2)
    vmovn_s16(v1_5)
    uint128_t v9_2 = vmovn_high_s16(v12_2)
    int128_t v1_6 = vqtbl1q_s8(entry_v10, v20)
    int128_t v14 = vmovn_s16(entry_v15)
    int128_t v2_4 = vqtbl1q_s8(entry_v11, v22)
    int128_t v0_4 = vqtbl1q_s8(v9_2, v21)
    int128_t v3_12 = vqtbl1q_s8(v14, v23)
    int128_t v0_5 = vqtbl2q_s8(v0_4, v1_6, v7_6)
    uint128_t v8_2 = vmovn_high_s16(entry_v15)
    int128_t v1_7 = vqtbl2q_s8(v2_4, v3_12, v18)
    v2_4 = var_3130
    int128_t v5_10 = vqtbl1q_s8(v9_2, v24)
    int128_t v4_21 = vqtbl1q_s8(v8_2, v25)
    int128_t v8_3 = vqtbl1q_s8(entry_v10, v26)
    uint128_t v9_3 = vdupq_laneq_s16(entry_v13, 0)
    entry_v14 = vshrn_high_n_u16(v30_14, 2)
    int128_t v30_15 = vmovn_s16(v12_2)
    int128_t v4_22 = vqtbl2q_s8(v4_21, v5_10, v7_6)
    int128_t v5_11 = vqtbl2q_s8(v8_3, v9_3, v18)
    int128_t v9_4 = vqtbl1q_s8(v30_15, v16_3)
    uint128_t v30_16 = vshrn_high_n_u16(v29_11, 4)
    v29_11.q = 0x7ffffffffff0f06
    int128_t v3_13 = vqtbl1q_s8(entry_v11, v2_4)
    int128_t v2_6 = vqtbl2q_s8(vqtbl1q_s8(entry_v10, v6_18), v3_13, v7_6)
    v3_10 = vqtbl2q_s8(vqtbl1q_s8(entry_v14, v17), v9_4, v18)
    entry_v8 = vtbl1_s8(entry_v11, v29_11)
    v29_11.q = -0xf0f80001
    int128_t v0_6 = vqtbl2q_s8(v0_5, v1_7, v19)
    int128_t v1_8 = vqtbl2q_s8(v4_22, v5_11, v19)
    entry_v9 = vtbl1_s8(entry_v14, v29_11)
    v29_11.q = -0xf0f800000001
    *x10_4 = v1_8
    *(x10_4 + 0x10) = v0_6
    int128_t v4_23 = vqtbl2q_s8(entry_v8, entry_v9, var_3100)
    uint128_t v0_7 = vmovn_s16(v31_2)
    vtbl1_s8(v30_16, v29_11)
    int128_t v5_12
    v5_12:6.b = vdup_laneq_s8(v0_7, 7):6.b
    *(x10_4 + 0x20) = vqtbl2q_s8(v2_6, v3_10, v19)
    int128_t var_3120
    *(x10_4 + 0x30) = vqtbl2q_s8(v4_23, v5_12, var_3120).q
while (i_5 != 0x700)

*(arg1 + 0x700) = var_10c0
*(arg1 + 0x710) = var_10b0
memset(&var_30e0, 0, 0x800)
memset(&var_28e0, 0, 0x800)
memset(&var_20e0, 0, 0x800)
int64_t result = memset(&var_18e0, 0, 0x800)

if (*(x24 + 0x28) != x8)
    __stack_chk_fail()
    noreturn

entry_v9.q = var_60
entry_v8.q = var_58
entry_v11.q = var_70
entry_v10.q = var_68
entry_v13.q = var_80
entry_v15.q = var_90
entry_v14.q = var_88
return result
