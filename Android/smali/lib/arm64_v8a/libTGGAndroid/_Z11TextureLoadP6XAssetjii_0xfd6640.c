// 函数: _Z11TextureLoadP6XAssetjii
// 地址: 0xfd6640
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = arg1
int64_t var_68 = TimerStart()
int64_t* x8

if (arg1 == 0)
    x19 = AssetPtrGetNull(3)
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19
else
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19

*(x19 + 0x24) += 1
int64_t* x25 = *x8
int64_t* fp = *x25
int32_t x22 = fp[2].d
int64_t* x0_1 = *gGraphicsInterface
int64_t x27 = fp[9]
int128_t v8
v8.q = *fp
int32_t var_78 = 1
int32_t var_74
uint8_t* x0_2
int128_t v0
int128_t v2
x0_2, v0, v2 = (*(*x0_1 + 0x30))(x0_1, arg1, zx.q(arg2), zx.q(arg4), zx.q(arg3), &var_74, &var_78)
char* x25_1 = x25[3]
uint8_t* x24 = x0_2

if (x25_1 == 0 || zx.d(*x25_1) == 0)
    v0.d = arg4
    v0:4.d = arg4
    int32_t x9_2 = *(fp + 0x14)
    uint64_t x1_3 = zx.q(fp[3].d)
    int128_t v0_2 = vshl_u32(v8, vneg_s32(v0))
    int32_t x8_4 = arg4 + x22 * arg3
    v2.d = 1
    v2:4.d = 1
    int64_t x28_1 = sx.q(x8_4)
    int32_t* x26_1 = x27 + (sx.q(x8_4) << 4)
    uint64_t v0_3 = vbsl_s8(vceqz_u32(v0_2, 0), v2, v0_2)
    
    if (x9_2 != 8)
        if ((TextureFormatIsCompressed(zx.q(x1_3.d)) & 1) == 0)
            uint8_t* var_90 = x24
            uint64_t var_88_1 = v0_3
            int32_t var_80_1 = var_74
            int32_t var_7c_1 = fp[3].d
            uint8_t* x0_16 = XMalloc(*x26_1)
            AssetCatalogLoadHWBuffer(arg1, x0_16, 0, *x26_1, *(x27 + (x28_1 << 4) + 8))
            
            if ((TextureLoadImage(zx.q(*(fp + 0x14)), &var_90, x0_16, *x26_1, var_78) & 1) == 0)
                XString::operator char const*()
                XTrace("Failed to read texture %s")
            
            XFree(x0_16)
        else
            AssetCatalogLoadHWBuffer(arg1, x24, 0, *x26_1, *(x27 + (x28_1 << 4) + 8))
    else
        int32_t x0_7 = TextureFormatPitch(v0_3.d, x1_3)
        
        if (var_74 == x0_7)
            AssetCatalogLoadHWBuffer(arg1, x24, 0, *x26_1, *(x27 + (x28_1 << 4) + 8))
        else if (*(fp + 4) s>= 1)
            int32_t x26_2 = 0
            int32_t i = 0
            uint8_t* x27_1 = x24
            
            do
                AssetCatalogLoadHWBuffer(arg1, x27_1, x26_2, x0_7, *(x27 + (x28_1 << 4) + 8))
                i += 1
                x26_2 += x0_7
                x27_1 = &x27_1[sx.q(var_74)]
            while (i s< *(fp + 4))
        
        if (fp[3].d s<= 0x6e)
            int32_t x10_1 = *(fp + 4)
            
            if (x10_1 != 0)
                int32_t x9_4 = *fp
                int32_t x8_12 = 0
                
                do
                    if (x9_4 != 0)
                        int32_t x10_2 = 0
                        void* x11_2 = &x24[2]
                        
                        do
                            char x12_1 = *x11_2
                            x10_2 += 1
                            *x11_2 = *(x11_2 - 2)
                            *(x11_2 - 2) = x12_1
                            x9_4 = *fp
                            x11_2 += 4
                        while (x10_2 u< x9_4)
                        
                        x10_1 = *(fp + 4)
                    
                    x8_12 += 1
                    x24 = &x24[sx.q(var_74)]
                while (x8_12 u< x10_1)
else
    int32_t x0_4 = TextureFormatLinearImageSize(*fp, *(fp + 4), zx.q(fp[3].d))
    memcpy(x24, *(x25_1 + 0x10), sx.q(x0_4))

if (TimerStop(&var_68) s>= 0x65)
    XString::operator char const*()
    TimerStop(&var_68)
    XTrace("slow loading texture %s %d ms")

int64_t* x0_29 = *gGraphicsInterface
int64_t result = (*(*x0_29 + 0x38))(x0_29, arg1, zx.q(arg2), zx.q(arg4), zx.q(arg3))

if (x19 != 0)
    *(x19 + 0x24) -= 1

return result
