// 函数: _Z21TwitterExportCampaignRK14CampaignStatusPKc
// 地址: 0xb9d1f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = zx.q(*(gCampaignDlg + 8))
int128_t var_80 = data_71be00
int64_t var_88 = 0x4448000044bb0000
CampaignMap* x0_1 = DomMapTryGet(x0)
int32_t var_8c = 1
int32_t var_138[0x2b]
UI2Begin("twitter-campaign", &var_138, *UI2_CAMPAIGN_SHARE, &var_80, &var_80, 0, 0, false)
UI2SetImage(zx.q(var_138[0]), &data_18323a0, *(x0_1 + 0x5078), 0xffffffff)
CampaignName(gCampaignDlg + 0xc)
XString var_140
UI2SetText(zx.q(var_138[0]), &data_1832370, &var_140, 0xffffffff)
UI2SetText(zx.q(var_138[0]), &data_182c718, GetActiveProfile(), 0xffffffff)
int64_t v8
v8.d = 0f
int128_t v0_2
int128_t v7
v0_2, v7 = UI2UpdateRoot(zx.q(var_138[0]), false, 0f)
int64_t i = 0
int32_t x21_1 = 0
v0_2.q = 0
v0_2:8.q = 0
void* __offset(CampaignStatus, 0x8) x22_1 = arg1 + 8
int128_t v9
v9.d = 0x3f3b0000
v9:4.d = 0x3f3b0000
int128_t var_1a0
__builtin_memset(&var_1a0, 0, 0x58)
int64_t var_150
var_150.d = 0x3f3b0000

do
    v0_2.q = *(x0_1 + 0x5080 + i)
    *(&var_1a0 + i) = vmul_f32(v0_2, v9, 0)
    
    if (*(x22_1 + 4) u>= 2)
        var_150:4.d = x21_1
    
    float v1_1 = *QI
    double v0_3
    v0_3.d = *(QI + 4)
    float v2_1 = *(QI + 8)
    float v3_1 = *(QI + 0xc)
    float v5_1 = float.s(0xc2ae0000)
    float v4_1 = *(x0_1 + 0x5080 + i) + v5_1
    v5_1 = *(x0_1 + 0x5084 + i) + v5_1
    int32_t var_1c0
    *(&var_1c0 | 4) = *QI
    float v6_1 = v3_1 * v3_1
    v7.d = v1_1 * v1_1
    float v18_1 = v1_1 f* v0_3.d
    float v19_1 = v2_1 * v3_1
    float v20_1 = v0_3.d f* v3_1
    float v21_1 = v1_1 * v2_1
    float v22_1 = v0_3.d f* v2_1
    float v23_1 = v1_1 * v3_1
    int64_t x8_1 = sx.q(var_8c)
    float v16_1 = v0_3.d f* v0_3.d
    float v24_1 = v7.d f+ v6_1
    float v27_1 = v21_1 + v20_1
    float v28_1 = v4_1 + v4_1
    v6_1 = v6_1 f- v7.d
    v7.d = v22_1 - v23_1
    float v17_1 = v2_1 * v2_1
    float v25_1 = v5_1 + v5_1
    v4_1 = v25_1 * (v18_1 - v19_1) + v4_1 * (v24_1 - v16_1 - v17_1)
    v5_1 = v28_1 * (v18_1 + v19_1) + v5_1 * (v16_1 + v6_1 - v17_1)
    v6_1 = v28_1 * (v21_1 - v20_1) + v25_1 * (v22_1 + v23_1) + (v17_1 + v6_1 - v16_1) f* v8.d
    float var_1b8
    v18_1 = v0_3.d f* var_1b8
    float var_1b4
    v25_1 = v0_3.d f* var_1b4
    v28_1 = v3_1 * var_1b8
    float v29_1 = v1_1 * var_1b4
    float var_1b0
    v22_1 = v0_3.d f* var_1b0
    float var_1bc
    v0_3.d = v0_3.d f* var_1bc
    v7.d = v7.d f* v8.d
    var_8c = x8_1.d + 1
    v5_1 = v7.d f+ v5_1
    v7.d = v3_1 * var_1b0 - v1_1 * var_1bc
    v20_1 = v1_1 * var_1b0 + v3_1 * var_1bc
    v24_1 = float.s(0x3f3b0000)
    XAsset* x2_4 = *UI2_CAMPAIGN_MISSION_BUTTON
    v7.d = v7.d f- v18_1
    v1_1 = v1_1 * var_1b8 + v2_1 * var_1b0 + v3_1 * var_1b4
    void* x24_1 = &var_138[x8_1]
    v6_1 = *(V0 + 8) + v6_1 * v24_1
    v3_1 = *V0 + (v27_1 f* v8.d + v4_1) * v24_1
    v4_1 = *(V0 + 4) + v5_1 * v24_1
    v5_1 = v7.d f- v2_1 * var_1b4
    v7.d = v20_1 + v25_1 - v2_1 * var_1b8
    v2_1 = v2_1 * var_1bc + v22_1 + v28_1 - v29_1
    v0_3.d = v1_1 f- v0_3.d
    var_1c0 = 0x3f3b0000
    float var_1a8_1 = v4_1
    float var_1a4_1 = v6_1
    var_1bc = v7.d
    var_1b8 = v2_1
    var_1b4 = v0_3.d
    var_1b0 = v5_1
    float var_1ac_1 = v3_1
    UI2Begin("twitter-campaign-button", x24_1, x2_4, &var_80, &var_80, 0, 0, false)
    UI2SetTransform(zx.q(*x24_1), &var_1c0)
    DeclareMission(zx.q(*x24_1), x0_1, x22_1, x21_1, 2)
    v0_2, v7 = UI2UpdateRoot(zx.q(*x24_1), false, 0f)
    i += 8
    x21_1 += 1
    x22_1 += 0xc
while (i != 0x50)

int64_t* x0_12 = UI2SetToTexture(&var_138, var_8c, &var_88, sub_bad19c, &var_1a0)

if (var_8c s>= 1)
    int64_t i_1 = 0
    int32_t (* x21_2)[0x2b] = &var_138
    
    do
        UI2Free(x21_2)
        i_1 += 1
        x21_2 = &(*x21_2)[1]
    while (i_1 s< sx.q(var_8c))

int64_t* x8_6 = *x0_12

if (x8_6 == 0)
    if (x0_12[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x0_12, false, true)
    x8_6 = *x0_12

int32_t* x8_8 = **x8_6
int32_t x21_3 = *x8_8
int32_t x22_2 = x8_8[1]
int32_t x0_18 = TextureFormatLinearImageSize(x21_3, x22_2, 1)
*(gTwitterExport + 0x48) = TextureFormatPitch(x21_3, 1)
*(gTwitterExport + 0x4c) = 1
*(gTwitterExport + 0x40) = x21_3
*(gTwitterExport + 0x44) = x22_2
int64_t x0_22 = XMalloc(x0_18)
uint32_t x8_9 = zx.d(*gTwitterExport)
*(gTwitterExport + 0x38) = x0_22

if (x8_9 == 0)
    MutexInit(gTwitterExport + 4)
    *gTwitterExport = 1

MutexLock(gTwitterExport + 4)
TextureGetRenderData(x0_12, gTwitterExport + 0x38)
AssetCatalogPurgeAsset(x0_12)
XString::operator=(gTwitterExport + 0x30)
*(gTwitterExport + 1) = 1
*(gTwitterExport + 0x50) = thread_create(TwitterWriteFile, nullptr)
return XString::~XString()
