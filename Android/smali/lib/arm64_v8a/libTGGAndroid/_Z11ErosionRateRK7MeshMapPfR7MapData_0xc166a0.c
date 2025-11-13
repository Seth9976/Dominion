// 函数: _Z11ErosionRateRK7MeshMapPfR7MapData
// 地址: 0xc166a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_10040[0x2000]
float entry_v0

for (int64_t i = 0; i != 0x4000; )
    int64_t x17_1 = i << 2
    var_10040[i] = i.d
    *(arg3 + x17_1 + 0x175fd0) = 0x38800000
    int64_t x17_3 = sx.q(*(arg1 + x17_1 + 0xeffc0))
    int32_t j = *(arg1 + (x17_3 << 2) + 0xfffc0)
    int32_t j_1
    
    if (j == 0xffffffff)
        j_1 = -1
    else
        void* x1 = arg1 + 0xfffc4 + (x17_3 << 2)
        j_1 = -1
        entry_v0 = float.s(0x47c34f80)
        
        do
            float v1 = *(arg1 + muls.dp.d(j, 0xc) + 8)
            v1 - entry_v0
            
            if (not(v1 > entry_v0))
                j_1 = j
            
            j = *x1
            x1 += 4
            
            if (not(v1 > entry_v0))
                entry_v0 = v1
        while (j != 0xffffffff)
    
    void* x0 = arg3 + (i << 2)
    i += 1
    *(x0 + 0x185fd0) = j_1

MeshMap const& var_38 = arg1
int64_t __saved_fp
int64_t result
int128_t v0
uint128_t v1_1
float128 v2
float128 v3
v0, result, v1_1, v2, v3 = sub_c209e4(&var_10040, &__saved_fp, &var_38, entry_v0)

for (int64_t i_1 = 0; i_1 != 0x10000; i_1 += 4)
    int64_t x11_1 = sx.q(*(&var_10040 + i_1))
    uint64_t x12_2 = zx.q(*(arg3 + (x11_1 << 2) + 0x185fd0))
    
    if ((x12_2.d & 0x80000000) == 0)
        v0.d = *(arg3 + 0x175fd0 + (x11_1 << 2))
        uint64_t x11_2 = x12_2 << 2
        v1_1.d = *(arg3 + 0x175fd0 + x11_2)
        v0.d = v0.d f+ v1_1.d
        *(arg3 + 0x175fd0 + x11_2) = v0.d

void* __offset(MeshMap, 0x8) x8 = arg1 + 8
*(arg3 + 0x175fcc) = 1
void* __offset(MapData, 0x185fd0) x14 = arg3 + 0x185fd0
int64_t i_6 = -0x10000
int64_t i_2

do
    uint64_t x16_2 = zx.q(*x14)
    
    if ((x16_2.d & 0x80000000) == 0)
        v1_1.d = *x8
        v0.d = 0f
        
        if (not(v1_1.d f<= 0f))
            int64_t* x16_3 = arg1 + x16_2 * 0xc
            v0.q = *(x8 - 8)
            v2.q = *x16_3
            v3.d = x16_3[1].d
            int128_t v0_1 = vsub_f32(v0, v2)
            v1_1.d = v1_1.d f- v3.d
            v0 = vmul_f32(v0_1, v0_1, 0)
            v0.d = v0.d f+ v0:4.d
            v2.d = v1_1.d f* v1_1.d
            v0.d = v0.d f+ v2.d
            v0.d = sqrt(v0.d)
            v0.d = v1_1.d f/ v0.d
        
        v1_1.d = *(x14 - 0x10000)
        v2.d = v0.d f* v0.d
        v3.d = float.s(0x447a0000)
        v1_1.d = sqrt(v1_1.d)
        v0.d = v0.d f* v1_1.d
        v0.d = v0.d f* v3.d
        v0.d = v2.d f+ v0.d
        v0.d = vmin_f32(v0.d, float.s(0x43480000))
        *(arg2 + i_6 + 0x10000) = v0.d
    
    i_2 = i_6
    i_6 += 4
    x14 += 4
    x8 += 0xc
while (i_2 != -4)
v1_1.d = *arg2
int64_t i_3 = 4
uint128_t v0_2 = v1_1

do
    v2.d = *(arg2 + i_3)
    i_3 += 4
    
    if (v2.d f> v0_2.d)
        v0_2.d = v2.d
    else
        v0_2.d = v0_2.d
while (i_3 != 0x10000)

v2.d = fconvert.s(1f)
v0_2.d = v2.d f/ v0_2.d
int64_t i_5 = -0xffe0
v2.d = v0_2.d f* v1_1.d
uint128_t v1_2 = vdupq_laneq_s32(v0_2, 0)
*arg2 = v2.d
int64_t i_4

do
    void* x11_3 = arg2 + i_5
    v3 = *(x11_3 + 0xfff4)
    i_4 = i_5
    i_5 += 0x20
    v2 = vmulq_f32(v1_2, *(x11_3 + 0xffe4), 0)
    v3 = vmulq_f32(v1_2, v3, 0)
    *(x11_3 + 0xffe4) = v2
    *(x11_3 + 0xfff4) = v3
while (i_4 != -0x20)
v1_2.d = arg2[0x3ff9]
v2.d = arg2[0x3ffa]
v3.d = arg2[0x3ffb]
v1_2.d = v0_2.d f* v1_2.d
v2.d = v0_2.d f* v2.d
v3.d = v0_2.d f* v3.d
float v4_1 = v0_2.d f* arg2[0x3ffc]
float v5 = v0_2.d f* arg2[0x3ffd]
float v6 = v0_2.d f* arg2[0x3ffe]
v0_2.d = v0_2.d f* arg2[0x3fff]
arg2[0x3ff9] = v1_2.d
arg2[0x3ffa] = v2.d
arg2[0x3ffb] = v3.d
arg2[0x3ffc] = v4_1
arg2[0x3ffd] = v5
arg2[0x3ffe] = v6
arg2[0x3fff] = v0_2.d
return result
