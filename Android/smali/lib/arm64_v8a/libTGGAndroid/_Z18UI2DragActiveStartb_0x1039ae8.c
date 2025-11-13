// 函数: _Z18UI2DragActiveStartb
// 地址: 0x1039ae8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_40 = v8
*(gUI2Editor + 0x88068) = 1
*(gUI2Editor + 0x8806c) = 0
int64_t var_48
GetCursorPosition(&var_48)
*(gUI2Editor + 0x88070) = var_48
*(gUI2Editor + 0x88080) = 0
*(gUI2Editor + 0x88078) = *(gUI2Editor + 0x88070)
int64_t x0_2
int128_t v0_1
int128_t v1
x0_2, v0_1, v1 = GetCursorPosition(&var_48)
v0_1.d = var_48.d
v1.d = var_48:4.d
*(gUI2Editor + 0x88084) = UI2TransformCorner(x0_2)
int32_t v0_2
int32_t v1_1
int32_t v2
int32_t v3
v0_2, v1_1, v2, v3 = UI2DragSelectionRect(false)
*(gUI2Editor + 0x8808c) = v0_2
*(gUI2Editor + 0x88090) = v1_1
*(gUI2Editor + 0x88094) = v2
*(gUI2Editor + 0x88098) = v3
int32_t v0_3
int32_t v1_2
int32_t v2_1
int32_t v3_1
v0_3, v1_2, v2_1, v3_1 = UI2DragSelectionRect(true)
*(gUI2Editor + 0x8809c) = v0_3
*(gUI2Editor + 0x880a0) = v1_2
*(gUI2Editor + 0x880a4) = v2_1
*(gUI2Editor + 0x880a8) = v3_1
*(gUI2Editor + 0x88088) = 0
int64_t result
int64_t v0_4
result, v0_4 = GameGetTimeSimulation()

if (*(gUI2Editor + 0x704c) s>= 1)
    int64_t i = 0
    
    do
        void* x0_6 = UI2GetIndex(zx.q(*(gUI2Editor + (i << 2) + 0x604c)))
        int64_t var_60_1 = UI2PropDynamic<float>::Eval(v0_4.d)
        int32_t v0_11 = UI2PropDynamic<float>::Eval(v0_4.d)
        int64_t var_70_1 = UI2PropDynamic<float>::Eval(v0_4.d)
        float128 v0_5
        int128_t v1_3
        float128 v2_3
        result, v0_5, v1_3, v2_3 = UI2PropDynamic<float>::Eval(v0_4.d)
        v1_3.d = *(x0_6 + 0x674)
        v2_3.d = *(x0_6 + 0x664)
        float128 v4_1 = v0_5
        v1_3.d = v0_4.d f- v1_3.d
        v2_3.d = v2_3.d f+ *(x0_6 + 0x660)
        
        if (v1_3.d f< v2_3.d || *(x0_6 + 0x654) s> 1)
            v0_5.d = *(x0_6 + 0x670)
            v0_5.d = v0_4.d f- v0_5.d
            float128 var_90_1 = v4_1
            int32_t v3_2
            result, v0_5, v1_3, v2_3, v3_2, v4_1 =
                PropEval<RectF>(x0_6 + 0x558, x0_6 + 0x5dc, x0_6 + 0x660, v0_5.d, v1_3.d, v1_3.d)
            v4_1 = var_90_1
            v0_5:4.d = v1_3.d
            v0_5:8.d = v2_3.d
            v0_5:0xc.d = v3_2
        else
            v0_5 = *(x0_6 + 0x5dc)
        
        void* x8_4 = gUI2Editor + (i << 4)
        i += 1
        v1_3:4.d = v4_1.d
        v2_3:4.d = v0_11
        float128 v1_5
        v1_5:8.q = vsub_f32(vadd_f32(v2_3, v1_3), v2_3).q
        v2_3:8.q = v2_3.q
        *(x8_4 + 0x880ac) = vaddq_f32(v2_3, vmulq_f32(v1_5, v0_5, 0))
    while (i s< sx.q(*(gUI2Editor + 0x704c)))

return result
