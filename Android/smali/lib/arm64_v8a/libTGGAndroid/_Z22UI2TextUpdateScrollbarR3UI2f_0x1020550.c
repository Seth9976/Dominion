// 函数: _Z22UI2TextUpdateScrollbarR3UI2f
// 地址: 0x1020550
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_30 = v10
int64_t v9
int64_t var_28 = v9
int64_t v8
int64_t var_20 = v8

if (*(arg1 + 0x1530) == 0)
    return 

int64_t x20_1 = *(arg1 + 0x175c)
int64_t var_38 = x20_1
v9.d = float.s(x20_1.d)
float v0_1 = UI2PropDynamic<float>::Eval(GameGetTimeSimulation())
int64_t v0_3 = DrawStringGetHeightFancy(arg1 + 0x1640, *(arg1 + 0x1548), *(gUI2 + 0x68), nullptr, 
    v9.d, v0_1 * *(arg1 + 0x16b0))
float v1_2 = TextGetLineHeight(arg1)
float temp0_1 = vrndp_f32(v0_3.d f/ v1_2)
float v2_1

if (temp0_1 < 0f)
    v2_1 = fconvert.s(-0.5f)
else
    v2_1 = fconvert.s(0.5f)

float v0_4 = v1_2 * float.s(sx.d(vcvts_s32_f32(temp0_1 + v2_1)))
int32_t var_40 = x20_1.d
float var_3c_1 = v0_4

if (*(arg1 + 0x1528) != 1)
    pthread_kill(pthread_self(), 6)
    UI2* x0_5
    Transform* x1_3
    UI2StateBindings* x2_3
    int32_t x3
    float v0_6
    x0_5, x1_3, x2_3, x3, v0_6 = XNoReturn()
    return UI2TableUpdateScrollbar(x0_5, x1_3, v0_6, x2_3, x3) __tailcall

if (not(v0_4 <= float.s((x20_1 u>> 0x20).d)))
    var_38.d = v9.d f- *V20

UI2UpdateScrollbar(arg1, &var_38, &var_40, arg2.q.d)
