// 函数: _Z18RandomElementIndexR9RandomPCGif26TerrainElementDistribution
// 地址: 0xc140dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_30 = v10
int64_t v9
int64_t var_28 = v9
int64_t v8
int64_t var_20 = v8

if (arg2 s< 2)
    return 0

float v0

if (arg4 == 1)
    int64_t v0_1 = RandomUnit(arg1)
    int64_t x0_4
    int64_t x1
    int32_t n
    float v0_2
    x0_4, x1, n, v0_2 = RandomUnit(arg1)
    
    if (v0_1.d f== 0f)
        v9.d = float.s(0x3727c5ac)
    else
        v9.d = v0_1.d
    
    float v2_1 = 0f
    v0 =
        cosf(x0_4, x1, n, v0_2 * *TWO_PI).d f* sqrt(logf(v9.d) * fconvert.s(-2f)) + v2_1 f+ arg3.q.d
    float temp0_1 = vmin_f32(v0, fconvert.s(1f))
    
    v0 = v0 < 0f ? v2_1 : temp0_1
else
    if (arg4 != 0)
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return CampaignMapCache::~CampaignMapCache() __tailcall
    
    v0 = RandomUnit(arg1)

float temp0_2 = vrndm_f32(v0 * float.s(arg2 - 1))
float v1_1

if (temp0_2 < 0f)
    v1_1 = fconvert.s(-0.5f)
else
    v1_1 = fconvert.s(0.5f)

uint32_t temp0_3 = vcvts_s32_f32(temp0_2 + v1_1)
uint32_t x8_2

if (temp0_3 s< arg2)
    x8_2 = temp0_3
else
    x8_2 = arg2 - 1

if (temp0_3 s< 0)
    return 0

return zx.q(x8_2)
