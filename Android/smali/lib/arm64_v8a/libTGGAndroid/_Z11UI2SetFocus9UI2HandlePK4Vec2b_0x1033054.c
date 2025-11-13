// 函数: _Z11UI2SetFocus9UI2HandlePK4Vec2b
// 地址: 0x1033054
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_40 = v8
int32_t x20 = arg1
int32_t x8 = *(gUI2 + 0x50)

if (x8 != 0 && x8 != x20)
    UI2ClearFocus(zx.q(x8), false, true)

*(gUI2 + 0x50) = x20
int64_t result
float v0
int64_t v1
result, v0, v1 = GameGetTimeSimulation()
uint64_t x8_1 = zx.q(*(gUI2 + 0x50))
int64_t x9 = *gUI2
UI2* x20_1 = x9 + x8_1 * 0x19a8

if (*(x20_1 + 0x167c) == 3 && (zx.d(*(x9 + x8_1 * 0x19a8 + 0x15b4)) != 0 || (arg3.d & 1) != 0))
    void* x22_1 = x9 + x8_1 * 0x19a8
    float v7_1 = *(x22_1 + 0x16c0)
    float v16_1 = *(x22_1 + 0x16b4)
    float v17_1 = *(x22_1 + 0x16b8)
    float v18_1 = *(x22_1 + 0x16bc)
    float v6_1 = *(x22_1 + 0x16b0)
    float v21_1 = v7_1 * v7_1
    float v22_1 = v16_1 * v16_1
    v1.d = 0f
    float v23_1 = v17_1 * v17_1
    float v25_1 = v16_1 * v17_1
    float v26_1 = v7_1 * v18_1
    float v27_1 = v7_1 * v17_1
    float v28_1 = v16_1 * v18_1
    float v2_1 = *V20 * v6_1
    float v3_1 = *(V20 + 4) * v6_1
    v1.d = v6_1 f* v1.d
    float v24_1 = v18_1 * v18_1
    float v4_1 = *(x22_1 + 0x175c) * v6_1
    float v5_1 = *(x22_1 + 0x1760) * v6_1
    float v19_1 = *(x22_1 + 0x16c4)
    float v20_1 = *(x22_1 + 0x16c8)
    float v29_1 = v25_1 - v26_1
    v1.d = v1.d f+ v1.d
    v25_1 = v25_1 + v26_1
    v7_1 = v17_1 * v18_1 - v7_1 * v16_1
    v16_1 = v21_1 + v22_1 - v23_1 - v24_1
    v21_1 = v21_1 - v22_1 + v23_1 - v24_1
    v18_1 = (v3_1 + v3_1) * v29_1
    v26_1 = v1.d f* (v27_1 + v28_1)
    v1.d = v1.d f* v7_1
    v3_1 = v1.d f+ (v2_1 + v2_1) * v25_1 + v3_1 * v21_1
    v1.d = v1.d f+ (v4_1 + v4_1) * v25_1 + v5_1 * v21_1
    v2_1 = v19_1 + v26_1 + v2_1 * v16_1 + v18_1
    v3_1 = v20_1 + v3_1
    v1.d = v20_1 f+ v1.d
    *(x22_1 + 0x17f4) = v2_1
    v1.d = v1.d f- v3_1
    *(x22_1 + 0x17f8) = v3_1
    *(x22_1 + 0x17fc) = v19_1 + v26_1 + v4_1 * v16_1 + (v5_1 + v5_1) * v29_1 - v2_1
    *(x22_1 + 0x1800) = v1.d
    v1 = *(x22_1 + 0x155c)
    v8.d = v1.d f* v6_1
    v8:4.d = v1:4.d f* v6_1
    int128_t v0_1
    v0_1.d = v8.d f* UI2PropDynamic<float>::Eval(v0).d
    v0_1:4.d = v8:4.d f* v0_1.d
    *(x22_1 + 0x1804) = v0_1.q
    int32_t v1_1 = *(x22_1 + 0x1558)
    *(x22_1 + 0x1820) = *(x22_1 + 0x1548)
    *(x22_1 + 0x1830) = v1_1
    XString::operator=(x22_1 + 0x17e0)
    *(x22_1 + 0x17f0) = 0
    *(x22_1 + 0x17e8) = XString::Length()
    AndroidDisplayKeyboard(true)
    *(x22_1 + 0x1859) = 1
    result = UI2SetState(x20_1, UIS_TEXT_ACTIVE, 0xfffffc18, 0, fconvert.s(1f))
    
    if (arg2 != 0)
        return UITextBox::Update((x22_1 + 0x17e0).b, 1) __tailcall

return result
