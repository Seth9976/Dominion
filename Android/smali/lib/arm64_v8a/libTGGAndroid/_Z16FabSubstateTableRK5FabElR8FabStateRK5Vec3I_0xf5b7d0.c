// 函数: _Z16FabSubstateTableRK5FabElR8FabStateRK5Vec3I
// 地址: 0xf5b7d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

ElBox(arg1, arg2)
int128_t var_80
int128_t v0
int128_t v1
v0, v1 = OBBoxTransform(&var_80, arg2 + 0x40)
int128_t var_b0
var_80 = var_b0
int128_t var_a0
int128_t var_70 = var_a0
int64_t var_90
int64_t var_60 = var_90
int32_t x8_2 = *arg3 + (*(arg3 + 4) + *(arg1 + 0x98) * *(arg3 + 8)) * *(arg1 + 0x94)
int32_t x9_2 = *(arg2 + (sx.q(x8_2) << 2) + 0x88)
int64_t x24 = sx.q(x8_2)
FabState* result
int32_t x8_3
uint64_t x27_1

if (x9_2 == 0)
    x8_3 = *(gFabs + 8)
    x27_1 = zx.q(*(gFabs + 0x10))
    uint64_t x8_4
    int64_t x9_3
    int32_t x10_3
    
    if (x27_1.d == x8_3)
    label_f5b880:
        x9_3 = *gFabs
        x10_3 = x8_3 + 1
        *(gFabs + 8) = x10_3
        x8_4 = zx.q(x8_3)
    else
    label_f5b8a4:
        x9_3 = *gFabs
        x10_3 = *(x9_3 + x27_1 * 0x4e8 + 0x4e0)
        x8_4 = x27_1
    
    *(gFabs + 0x10) = x10_3
    result = x9_3 + x8_4 * 0x4e8
    v0, v1 = memset(result, 0, 0x4e0)
    *(result + 0x4e0) = x27_1.d | *(gFabs + 0x18) << 0x10
    int32_t x8_8 = *(gFabs + 0x18)
    int32_t x8_9
    
    if (x8_8 == 0xffff)
        x8_9 = 1
    else
        x8_9 = x8_8 + 1
    
    *(gFabs + 0x14) += 1
    *(gFabs + 0x18) = x8_9
    *(arg2 + (sx.q(x8_2) << 2) + 0x88) = *(result + 0x4e0)
else
    x8_3 = *(gFabs + 8)
    uint64_t x10_1 = zx.q(x9_2.w)
    
    if (x10_1.d u< x8_3)
        result = *gFabs + x10_1 * 0x4e8
    
    if (x10_1.d u>= x8_3 || *(result + 0x4e0) != x9_2)
        x27_1 = zx.q(*(gFabs + 0x10))
        
        if (x27_1.d != x8_3)
            goto label_f5b8a4
        
        goto label_f5b880
v0 = *(arg2 + 0x50)
*(result + 0x40) = *(arg2 + 0x40)
*(result + 0x50) = v0
int64_t x8_11 = sx.q(*(arg1 + 0xb0))
int64_t x8_12

if (x24.d s< x8_11.d)
    x8_12 = x24
else
    x8_12 = x8_11 - 1

FabEl**** x23_1 = *(*(arg1 + 0xa8) + (x8_12 << 3))
*result = x23_1

if (x23_1 == 0)
label_f5b9a4:
    v1 = *(OBBOX_ONE + 0x10)
    int64_t x8_17 = *(OBBOX_ONE + 0x20)
    var_b0 = *OBBOX_ONE
    int128_t var_a0_1 = v1
    int64_t var_90_1 = x8_17
else
    FabEl*** x8_13 = *x23_1
    FabEl** x8_14
    
    if (x8_13 == 0)
        if (x23_1[1].d == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        v0, v1 = AssetCatalogLoadAsset(x23_1, false, true)
        x8_14 = **x23_1
        
        if (x8_14[1].d == 0)
            goto label_f5b9a4
        
        ElBox(*x8_14, result)
    else
        x8_14 = *x8_13
        
        if (x8_14[1].d == 0)
            goto label_f5b9a4
        
        ElBox(*x8_14, result)

int32_t x9_9 = *(arg2 + 0x78)
int32_t x10_5 = *(arg2 + 0x60)
void* __offset(FabEl, 0x94) x8_19

if (x9_9 s> x10_5)
    x8_19 = arg2 + 0x7c
else
    x8_19 = arg1 + 0x94

void* __offset(FabEl, 0x9c) x9_10

if (x9_9 s> x10_5)
    x9_10 = arg2 + 0x84
else
    x9_10 = arg1 + 0x9c

int32_t x9_11 = *x9_10
int64_t var_c0 = *x8_19
int32_t var_b8 = x9_11
int128_t v0_1
int128_t v1_1
v0_1, v1_1 = DistBox(&var_c0, zx.q(*(arg1 + 0xa0)), arg3, &var_80, &var_b0)
int128_t var_e0
*(result + 0x40) = var_e0
int128_t var_d0
*(result + 0x50) = var_d0
return result
