// 函数: _Z12DidDotAppearff
// 地址: 0xb94ee0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
int128_t v0
int128_t v1
result, v0, v1 = DomMapTryGet(zx.q(*(gCampaignDlg + 8)))

if (result == 0)
    return result

float v3_1 = fconvert.s(0.5f)
void* x8_2 = result + (sx.q(*gCampaignDlg) << 3)
v0.q = *(x8_2 + 0x5078)
v1.q = *(x8_2 + 0x5080)
int128_t v0_1 = vsub_f32(v0, v1)
double v0_2 = vmul_f32(v0_1, v0_1, 0)
v0_2.d = v0_2.d f+ v0_2:4.d
v0_2.d = sqrt(v0_2.d)
v0_2.d = v0_2.d f/ fconvert.s(26f)
v0_2.d = v0_2.d f+ v3_1
uint32_t temp0_1 = vcvts_s32_f32(v0_2.d)
v0_2.d = float.s(temp0_1)
float v2_1 = v0_2.d f* arg1
v0_2.d = v0_2.d f* arg2
float temp0_2 = vrndm_f32(v2_1)
v1.d = fconvert.s(-0.5f)
v0_2.d = vrndm_f32(v0_2.d)
float v4_1

v4_1 = temp0_2 < 0f ? v1.d : v3_1

if (v0_2.d f< 0f)
    v1.d = v1.d
else
    v1.d = v3_1

v0_2.d = v0_2.d f+ v1.d
uint32_t temp0_4 = vcvts_s32_f32(temp0_2 + v4_1)

if (temp0_4 != vcvts_s32_f32(v0_2.d))
    return zx.q(temp0_4 s> 2 ? 1 : 0) & zx.q(temp0_1 - 5 s>= temp0_4 ? 1 : 0)

return 0
