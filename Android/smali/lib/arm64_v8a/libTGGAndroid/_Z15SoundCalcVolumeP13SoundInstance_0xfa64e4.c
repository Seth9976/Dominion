// 函数: _Z15SoundCalcVolumeP13SoundInstance
// 地址: 0xfa64e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *arg1
int64_t x9

if (zx.d(*(arg1 + 0x73)) == 0)
    x9 = 0x28
else
    x9 = 0x2c

int64_t* x8_1 = *x20
int64_t v8
v8.d = *(*gpSoundGlobals + x9)
int64_t* x9_1
int64_t* x20_1
void* x22

if (x8_1 == 0)
    if (x20[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x20, false, true)
    x20_1 = *(arg1 + 8)
    x22 = **x20
    x9_1 = *x20_1
    
    if (x9_1 != 0)
        goto label_fa6538
    
    goto label_fa65f4

x20_1 = *(arg1 + 8)
x22 = *x8_1
x9_1 = *x20_1
float v0
void* x8_2

if (x9_1 == 0)
label_fa65f4:
    
    if (x20_1[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x20_1, false, true)
    x8_2 = **x20_1
    v0 = *(x22 + 4)
    
    if (x8_2 != x22)
        v0 = v0 * *(x8_2 + 4)
else
label_fa6538:
    x8_2 = *x9_1
    v0 = *(x22 + 4)
    
    if (x8_2 != x22)
        v0 = v0 * *(x8_2 + 4)
float v3 = fconvert.s(1f)
float v1

if (zx.d(*(arg1 + 0x75)) == 0)
    v1 = *(*gpSoundGlobals + 0x30)
else
    v1 = v3

vmin_f32(*(arg1 + 0x4c) * v1 * v0 * v8.d f* *(arg1 + 0x54), v3)
