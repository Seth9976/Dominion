// 函数: _Z16ButtonInitFromUIR8UIButtonP6XAssetiRK11UITransform
// 地址: 0x1053258
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *arg2

if (x8 == 0)
    if (*(arg2 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg2, false, true)
    x8 = *arg2

int64_t x23 = **x8
int32_t v0
int32_t v1
int32_t v2
int32_t v3
v0, v1, v2, v3 = UIElementRegionRect(arg2, arg3, arg4)
void* x21_1 = x23 + muls.dp.d(arg3, 0x178)
*(arg1 + 0x50) = *(x21_1 + 0x88)
*(arg1 + 0x58) = *(x21_1 + 0x128)
*(arg1 + 0x60) = *(x21_1 + 0x130)
*(arg1 + 0x68) = *(x21_1 + 0x138)
*(x21_1 + 0x120)
int64_t v0_1
int64_t v1_1
v0_1, v1_1 = XString::operator=(arg1)
char x8_7 = *(x21_1 + 0x90)
v0_1.d = v2 f- v0
v1_1.d = v3 f- v1
*(arg1 + 8) = v0
*(arg1 + 0xc) = v1
*(arg1 + 0x10) = v0_1.d
*(arg1 + 0x14) = v1_1.d
*(arg1 + 0xb4) = x8_7 ^ 1
v0_1.d = *(arg4 + 0xc)
v1_1.d = *(x21_1 + 0xf8)
v0_1.d = v0_1.d f* v1_1.d
*(arg1 + 0x30) = v0_1.d
*(arg1 + 0x70) = *(x21_1 + 0xe8)
*(arg1 + 0x90) = *(x21_1 + 0xf0)
*(arg1 + 0x94) = *(x21_1 + 0xf4)
*(arg1 + 0x9c) = *(x21_1 + 0x140)
*(arg1 + 0xa0) = *(x21_1 + 0x144)
v0_1.d = *(arg4 + 0xc)
v1_1 = *(x21_1 + 0x148)
v0_1.d = v1_1.d f* v0_1.d
v0_1:4.d = v1_1:4.d f* v0_1.d
*(arg1 + 0x20) = v0_1
*(arg1 + 0x34) = *(x21_1 + 0xfc)

if ((zx.d(data_24b7eb8) & 1) == 0 && __cxa_guard_acquire(&data_24b7eb8) != 0)
    data_24b7eb0 = AssetPtrFromPath("res/sound/button_click.sound", 0x15)
    __cxa_guard_release(&data_24b7eb8)

*(arg1 + 0x80) = data_24b7eb0
return arg1
