// 函数: _Z19sTextureImportToPngP23DefTextureXMLImportSpecP20DefTextureImportDataP9ImageSpecPKc
// 地址: 0xfd9a28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = *(arg1 + 4)

if (x23 == 0)
    x23 = *(arg3 + 0x14)

int32_t x8 = *(arg1 + 0x10)
*arg2 = *(arg3 + 8)
int32_t x8_1 = *(arg3 + 0xc)
int32_t x9_1

x9_1 = x8 == 1 ? 6 : 1

*(arg2 + 0x10) = 1
*(arg2 + 0x3c) = x9_1
*(arg2 + 4) = x8_1
*(arg2 + 0x48) = XCalloc(x9_1 << 4)
*(arg2 + 0x14) = 6
*(arg2 + 0x18) = x23
*(arg2 + 0x1c) = *(arg1 + 0x10)
DefTextureXMLImportSpec* x0_3
int128_t v0
x0_3, v0 = sub_fd93b0(arg3)
ImageSpec* x0_4
DefTextureImage* x1_2

if (*(arg1 + 0x10) != 1)
    x1_2 = *(arg2 + 0x48)
    x0_4 = arg3
    *x1_2 = 0
else
    int64_t var_70_1 = *(arg3 + 0x10)
    int128_t var_80 = *arg3
    uint64_t x8_5 = zx.q(*(arg1 + 0x14))
    
    if (x8_5.d u> 3)
    label_fd9edc:
        pthread_kill(pthread_self(), 6)
        DefTextureXMLImportSpec* x0_45
        DefTextureImportData* x1_26
        char* x2_8
        x0_45, x1_26, x2_8 = XNoReturn()
        return sTextureImportWithDirectX(x0_45, x1_26, x2_8) __tailcall
    
    int32_t var_9c_1
    int64_t x8_8
    int32_t x9_2
    int32_t x9_3
    int32_t x10_2
    uint32_t x10_7
    uint32_t x21_1
    int32_t x22_1
    int32_t x23_1
    int32_t x25_1
    int32_t x26_1
    int32_t x27_1
    int32_t x28_1
    uint32_t fp_1
    
    switch (x8_5)
        case 0
            x9_2 = *(arg3 + 8)
            x10_2 = *(arg3 + 0xc)
            
            if (x10_2 * 3 == x9_2 << 1)
                goto label_fd9b8c
            
            int32_t x8_7 = x10_2 << 2
            
            if (x9_2 * 3 == x8_7)
                goto label_fd9bf8
            
            if (x9_2 != x8_7)
                goto label_fd9edc
            
            goto label_fd9b1c
        case 1
            x9_2 = *(arg3 + 8)
            x10_2 = *(arg3 + 0xc)
        label_fd9b8c:
            int64_t x12_2 = sx.q(var_70_1.d)
            int32_t x10_8
            
            if (x10_2 s< 0)
                x10_8 = x10_2 + 1
            else
                x10_8 = x10_2
            
            x10_7 = x10_8 s>> 1
            int64_t x11_4 = x12_2 * 0x55555556
            x26_1 = x12_2.d * x10_7
            fp_1 = (x11_4 u>> 0x20).d + (x11_4 u>> 0x3f).d
            x9_3 = x9_2 s/ 3
            x21_1 = fp_1 << 1
            x8_8 = 0
            x23_1 = 0
            x22_1 = 0
            var_9c_1 = 0
            var_80:8.d = x9_3
            var_80:0xc.d = x10_7
            x27_1 = x26_1 + fp_1
            x28_1 = x21_1 + x26_1
            x25_1 = 1
        case 2
            x9_2 = *(arg3 + 8)
            x10_2 = *(arg3 + 0xc)
        label_fd9bf8:
            int32_t x12_4 = var_70_1.d
            int32_t x8_10
            
            if (x9_2 s< 0)
                x8_10 = x9_2 + 3
            else
                x8_10 = x9_2
            
            x9_3 = x8_10 s>> 2
            x10_7 = x10_2 s/ 3
            int32_t x11_6 = x12_4 * x10_7
            int32_t x12_5
            
            if (x12_4 s< 0)
                x12_5 = x12_4 + 3
            else
                x12_5 = x12_4
            
            x27_1 = x12_5 s>> 2
            int32_t x12_6 = x27_1 << 1
            x21_1 = x12_6 + x11_6
            x25_1 = 0
            x22_1 = 3
            x8_8 = sx.q(x11_6)
            fp_1 = x11_6 + x27_1
            x26_1 = x27_1 + (x11_6 << 1)
            x28_1 = x12_6 + x27_1 + x11_6
            var_9c_1 = 2
            var_80:8.d = x9_3
            var_80:0xc.d = x10_7
            x23_1 = 1
        case 3
        label_fd9b1c:
            ProcessCylinderCubeMap(x0_3, arg3)
            int32_t x11_3 = *(arg3 + 0x10)
            int64_t x10_5 = sx.q(*(arg3 + 0xc)) * 0x2aaaaaab
            x9_3 = *(arg3 + 8)
            x10_7 = (x10_5 u>> 0x20).d + (x10_5 u>> 0x3f).d
            x21_1 = x10_7 * x11_3
            fp_1 = x21_1 << 1
            x27_1 = x21_1 << 2
            x8_8 = 0
            x25_1 = 0
            var_80:8.d = x9_3
            var_9c_1 = 2
            x22_1 = 3
            var_80:0xc.d = x10_7
            var_70_1.d = x11_3
            x28_1 = fp_1 + x21_1
            x26_1 = x27_1 + x21_1
            x23_1 = 1
    
    int32_t* x24_1 = *(arg2 + 0x48)
    *arg2 = x9_3
    *(arg2 + 4) = x10_7
    *x24_1 = 0
    var_80.q = *arg3 + x8_8
    void* var_98
    
    if ((x25_1 & 1) == 0)
        v0.q = var_80:8.q
        uint64_t x1_4 = zx.q(var_70_1:4.d)
        int64_t var_90_1 = v0.q
        int32_t var_84_1 = x1_4.d
        int32_t var_88_1 = TextureFormatPitch(v0.d, x1_4)
        var_98 = XMalloc(TextureFormatLinearImageSize(var_90_1.d, var_90_1:4.d, zx.q(var_84_1)))
        ImageBufferRotateCopy(&var_80, &var_98, zx.q(x23_1))
        PngWriteImageSpecToBits(&var_98, x24_1)
        XFree(var_98)
    else
        PngWriteImageSpecToBits(&var_80, x24_1)
    
    int32_t* x23_3 = *(arg2 + 0x48) + 0x10
    *x23_3 = 0
    var_80.q = *arg3 + sx.q(x21_1)
    
    if ((x25_1 & 1) == 0)
        int64_t v0_1 = var_80:8.q
        uint64_t x1_9 = zx.q(var_70_1:4.d)
        int32_t var_84_2 = x1_9.d
        int32_t var_88_2 = TextureFormatPitch(v0_1.d, x1_9)
        var_98 = XMalloc(TextureFormatLinearImageSize(v0_1.d, v0_1:4.d, zx.q(var_84_2)))
        ImageBufferRotateCopy(&var_80, &var_98, zx.q(x22_1))
        PngWriteImageSpecToBits(&var_98, x23_3)
        XFree(var_98)
    else
        PngWriteImageSpecToBits(&var_80, x23_3)
    
    int32_t* x22_3 = *(arg2 + 0x48) + 0x20
    *x22_3 = 0
    var_80.q = *arg3 + sx.q(fp_1)
    
    if ((x25_1 & 1) == 0)
        int64_t v0_2 = var_80:8.q
        uint64_t x1_14 = zx.q(var_70_1:4.d)
        int32_t var_84_3 = x1_14.d
        int32_t var_88_3 = TextureFormatPitch(v0_2.d, x1_14)
        var_98 = XMalloc(TextureFormatLinearImageSize(v0_2.d, v0_2:4.d, zx.q(var_84_3)))
        ImageBufferRotateCopy(&var_80, &var_98, zx.q(var_9c_1))
        PngWriteImageSpecToBits(&var_98, x22_3)
        XFree(var_98)
    else
        PngWriteImageSpecToBits(&var_80, x22_3)
    
    DefTextureImage* x1_19 = *(arg2 + 0x48) + 0x30
    *x1_19 = 0
    var_80.q = *arg3 + sx.q(x28_1)
    PngWriteImageSpecToBits(&var_80, x1_19)
    int32_t* x22_5 = *(arg2 + 0x48) + 0x40
    *x22_5 = 0
    var_80.q = *arg3 + sx.q(x27_1)
    
    if ((x25_1 & 1) == 0)
        int64_t v0_3 = var_80:8.q
        uint64_t x1_21 = zx.q(var_70_1:4.d)
        int32_t var_84_4 = x1_21.d
        int32_t var_88_4 = TextureFormatPitch(v0_3.d, x1_21)
        var_98 = XMalloc(TextureFormatLinearImageSize(v0_3.d, v0_3:4.d, zx.q(var_84_4)))
        ImageBufferRotateCopy(&var_80, &var_98, zx.q(var_9c_1))
        PngWriteImageSpecToBits(&var_98, x22_5)
        XFree(var_98)
    else
        PngWriteImageSpecToBits(&var_80, x22_5)
    
    x0_4 = &var_80
    x1_2 = *(arg2 + 0x48) + 0x50
    *x1_2 = 0
    var_80.q = *arg3 + sx.q(x26_1)

PngWriteImageSpecToBits(x0_4, x1_2)
XFree(*arg3)
*arg3 = 0
return 1
