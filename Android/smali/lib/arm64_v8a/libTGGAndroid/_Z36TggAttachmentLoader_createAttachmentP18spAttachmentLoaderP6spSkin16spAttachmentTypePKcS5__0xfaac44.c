// 函数: _Z36TggAttachmentLoader_createAttachmentP18spAttachmentLoaderP6spSkin16spAttachmentTypePKcS5_
// 地址: 0xfaac44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 != 0)
    pthread_kill(pthread_self(), 6)
    spAttachmentLoader* x0_9
    spAttachment* x1_2
    x0_9, x1_2 = XNoReturn()
    return TggAttachmentLoader_configureAttachment(x0_9, x1_2) __tailcall

int64_t* x0_1 = AssetPtrFromRelativePath(*(arg1 + 0x18), arg5, 3)
void* result
int128_t v0
int128_t v3
result, v0, v3 = spRegionAttachment_create(arg4)
*(result + 0x60) = x0_1
int64_t* x8 = *x0_1

if (x8 == 0)
    if (x0_1[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    v0, v3 = AssetCatalogLoadAsset(x0_1, false, true)
    x8 = *x0_1

v3.d = fconvert.s(1f)
int64_t* x8_3 = **x8
v0.q = *x8_3
float v2 = x8_3[1].d
float v1 = *(x8_3 + 0xc)
double v0_1 = vcvt_f32_u32(v0)
v1 = v1 * v2
int128_t v8
v8.d = v0_1.d f* v1
v8:4.d = v0_1:4.d f* v1
v0_1.d = 0f
spRegionAttachment_setUVs(result, 0, v0_1, 0f, fconvert.s(1f), v3)
int128_t v0_2
v0_2:8.q = vcvt_s32_f32(v8).q
*(result + 0x68) = 0
*(result + 0x70) = v0_2
return result
