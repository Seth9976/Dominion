// 函数: _Z21GameSpecific_BgUpdate9UI2Handle
// 地址: 0xb45924
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
void* result = GetClient()

if (*(result + 0x5068) == 0)
    return result

int32_t var_44

if ((IsCampaignMission(zx.q(*ActiveGame()), &var_44) & 1) == 0)
    return UI2SetState(zx.q(x19), GetBackground(ActiveGame(), gDomClient + 0x20728), 0xffffffff, 0)

void* x0_4 = DomMapGet(zx.q(*(gCampaignDlg + 8)))
UI2GetTransform(UI2GetHandle(zx.q(x19), "bg_image_placer"))
int128_t v0_1
float v1_1
int128_t v2_1
int128_t v3_1
int64_t v5_1
v0_1, v1_1, v2_1, v3_1, v5_1 = RectScreen()
vadd_f32(v0_1, v2_1)
int32_t var_58
v0_1:4.d = var_58
v1_1 = v1_1 f+ v3_1.d
v3_1.d = fconvert.s(0.5f)
v1_1 = v1_1 f* v3_1.d
v3_1.q = 0x3fc000003f000000
v2_1:4.d = v1_1
int128_t v4_1
v4_1:4.d = vsub_f32(v0_1, v2_1):4.d
int32_t var_54
v5_1.d = var_54
int128_t v0_3 = vmul_f32(v4_1, v3_1, 0)
int32_t var_70
v4_1.d = var_70
float v6_1 = fconvert.s(1.5f)
v2_1.d = 0f
v5_1.d = v5_1.d f* v6_1
v4_1.d = v4_1.d f* v6_1
v5_1.d = v5_1.d f+ v2_1.d
v2_1.d = v4_1.d f* v2_1.d
int32_t var_5c
v3_1.d = var_5c
v2_1.d = v2_1.d f+ v2_1.d
void* x8_2 = x0_4 + 0x5078 + (sx.q(var_44) << 3)
var_70 = v4_1.d
v2_1.d = v5_1.d f+ v2_1.d
v2_1.d = v5_1.d f- v2_1.d
v5_1 = *(x8_2 + 8)
v3_1.d = v3_1.d f- v0_3.d
v3_1.d = v3_1.d f* v6_1
v3_1:4.d = v1_1
v4_1.d = v5_1.d f* v4_1.d
v4_1:4.d = v5_1:4.d f* v4_1.d
int128_t v3_2 = vadd_f32(v0_3, v3_1)
v0_3:4.d = v1_1
var_5c.q = vsub_f32(v3_2, vsub_f32(vadd_f32(v3_2, vadd_f32(v4_1, v4_1)), v0_3))
int32_t var_54_1 = v2_1.d
UI2SetTransform(UI2GetHandle(zx.q(x19), "itemTitleBg"), &var_70)
UI2SetState(zx.q(x19), &data_1831ad0, 0xffffffff, 0)
UI2SetImage(zx.q(x19), &data_1831ba8, *(x0_4 + 0x5078), 0xffffffff)
int32_t x8_3 = *(x0_4 + 0x50f8)
uint32_t x9_2 = x8_3 u>> 0x18
uint32_t x8_10 = ((((0x80 + (x8_3 u>> 0x10 & 0xff) * 0x56) u/ 0xff) << 0x10
    | (zx.d((x9_2 << 8).w - x9_2.w + 0x80) u/ 0xff) << 0x18) & 0xffff0000) | (
    zx.d(((mulu.dp.d(0x80 + (x8_3 u>> 8 & 0xff) * 0x65, 0x80808081) u>> 0x20).d << 1).w) & 0xff00)
    | zx.d(((0x80 + (x8_3 & 0xff) * 0x70) u/ 0xff).w)
uint32_t var_48 = x8_10
UI2SetColor(zx.q(x19), &data_1831bc0, &var_48, 0xffffffff)
int32_t x8_11 = *(x0_4 + 0x50f8)
uint32_t x9_13 = (
    zx.d(((mulu.dp.d(0x80 + (x8_11 u>> 8 & 0xff) * 0x65, 0x80808081) u>> 0x20).d << 1).w) & 0xff00)
    | zx.d(((0x80 + (x8_11 & 0xff) * 0x70) u/ 0xff).w)
    | zx.d(((0x80 + (x8_11 u>> 0x10 & 0xff) * 0x56) u/ 0xff).w) << 0x10
var_48 = x9_13
UI2SetColor(zx.q(x19), &data_1831bd8, &var_48, 0xffffffff)
int32_t x8_16 = *(x0_4 + 0x50fc)
uint32_t x9_14 = x8_16 u>> 0x18
uint32_t x8_23 = ((((0x80 + (x8_16 u>> 0x10 & 0xff) * 0x56) u/ 0xff) << 0x10
    | (zx.d((x9_14 << 8).w - x9_14.w + 0x80) u/ 0xff) << 0x18) & 0xffff0000) | (
    zx.d(((mulu.dp.d(0x80 + (x8_16 u>> 8 & 0xff) * 0x65, 0x80808081) u>> 0x20).d << 1).w) & 0xff00)
    | zx.d(((0x80 + (x8_16 & 0xff) * 0x70) u/ 0xff).w)
var_48 = x8_23
UI2SetColor(zx.q(x19), &data_1831bf0, &var_48, 0xffffffff)
int32_t x8_24 = *(x0_4 + 0x50fc)
uint32_t x9_25 = (
    zx.d(((mulu.dp.d(0x80 + (x8_24 u>> 8 & 0xff) * 0x65, 0x80808081) u>> 0x20).d << 1).w) & 0xff00)
    | zx.d(((0x80 + (x8_24 & 0xff) * 0x70) u/ 0xff).w)
    | zx.d(((0x80 + (x8_24 u>> 0x10 & 0xff) * 0x56) u/ 0xff).w) << 0x10
var_48 = x9_25
UI2SetColor(zx.q(x19), &data_1831c08, &var_48, 0xffffffff)
int32_t x8_29 = *(x0_4 + 0x5100)
uint32_t x9_26 = x8_29 u>> 0x18
uint32_t x8_36 = ((((0x80 + (x8_29 u>> 0x10 & 0xff) * 0x56) u/ 0xff) << 0x10
    | (zx.d((x9_26 << 8).w - x9_26.w + 0x80) u/ 0xff) << 0x18) & 0xffff0000) | (
    zx.d(((mulu.dp.d(0x80 + (x8_29 u>> 8 & 0xff) * 0x65, 0x80808081) u>> 0x20).d << 1).w) & 0xff00)
    | zx.d(((0x80 + (x8_29 & 0xff) * 0x70) u/ 0xff).w)
var_48 = x8_36
UI2SetColor(zx.q(x19), &data_1831c20, &var_48, 0xffffffff)
int32_t x8_37 = *(x0_4 + 0x5100)
uint32_t x9_37 = (
    zx.d(((mulu.dp.d(0x80 + (x8_37 u>> 8 & 0xff) * 0x65, 0x80808081) u>> 0x20).d << 1).w) & 0xff00)
    | zx.d(((0x80 + (x8_37 & 0xff) * 0x70) u/ 0xff).w)
    | zx.d(((0x80 + (x8_37 u>> 0x10 & 0xff) * 0x56) u/ 0xff).w) << 0x10
var_48 = x9_37
UI2SetColor(zx.q(x19), &data_1831c38, &var_48, 0xffffffff)
int32_t x8_42 = *(x0_4 + 0x5104)
uint32_t x9_38 = x8_42 u>> 0x18
uint32_t x8_49 = ((((0x80 + (x8_42 u>> 0x10 & 0xff) * 0x56) u/ 0xff) << 0x10
    | (zx.d((x9_38 << 8).w - x9_38.w + 0x80) u/ 0xff) << 0x18) & 0xffff0000) | (
    zx.d(((mulu.dp.d(0x80 + (x8_42 u>> 8 & 0xff) * 0x65, 0x80808081) u>> 0x20).d << 1).w) & 0xff00)
    | zx.d(((0x80 + (x8_42 & 0xff) * 0x70) u/ 0xff).w)
var_48 = x8_49
UI2SetColor(zx.q(x19), &data_1831c50, &var_48, 0xffffffff)
int32_t x8_50 = *(x0_4 + 0x5104)
uint32_t x9_49 = (
    zx.d(((mulu.dp.d(0x80 + (x8_50 u>> 8 & 0xff) * 0x65, 0x80808081) u>> 0x20).d << 1).w) & 0xff00)
    | zx.d(((0x80 + (x8_50 & 0xff) * 0x70) u/ 0xff).w)
    | zx.d(((0x80 + (x8_50 u>> 0x10 & 0xff) * 0x56) u/ 0xff).w) << 0x10
var_48 = x9_49
return UI2SetColor(zx.q(x19), &data_1831c68, &var_48, 0xffffffff)
