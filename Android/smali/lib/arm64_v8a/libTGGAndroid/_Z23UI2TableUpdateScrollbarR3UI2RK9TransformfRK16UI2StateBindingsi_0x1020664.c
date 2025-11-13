// 函数: _Z23UI2TableUpdateScrollbarR3UI2RK9TransformfRK16UI2StateBindingsi
// 地址: 0x1020664
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_30 = v8

if (*(arg1 + 0x1970) == 0 || *(arg1 + 0x1530) == 0)
    return 

int64_t v1 = *(arg1 + 0x175c)
int64_t var_28 = (v1:4.d f* v1.d f* *(arg1 + 0x16b0)).q
int32_t x8_2 = *(arg1 + 0x1528)
int64_t x8_3

if (x8_2 == 1 || x8_2 == 3)
    x8_3 = 0x14fc
else
    if (x8_2 != 2)
        pthread_kill(pthread_self(), 6)
        UI2* x0_4
        UI2StateBindings* x1_2
        bool x2_3
        float v0_4
        x0_4, x1_2, x2_3, v0_4 = XNoReturn()
        return UI2TableUpdate(x0_4, x1_2, v0_4, x2_3) __tailcall
    
    x8_3 = 0x1500

int32_t x20_1 = *(arg1 + x8_3)
RectF var_50
RectF var_40
UI2TableTransform(arg1, 0, &var_40, &var_50, false)
int128_t v0
int128_t v1_1
int128_t v2_1
v0, v1_1, v2_1 = UI2TableTransform(arg1, x20_1, &var_40, &var_50, false)
int64_t var_7c
v0.q = var_7c
int64_t var_5c
v1_1.q = var_5c
v2_1.q = *(arg1 + 0x14fc)
double var_98 = vmul_f32(vsub_f32(v0, v1_1), vcvt_f32_s32(v2_1), 0)
UI2UpdateScrollbar(arg1, &var_28, &var_98, arg3.q.d)
