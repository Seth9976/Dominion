// 函数: _Z15TextureReimportPKcP14DefAssetHeader7XString
// 地址: 0xfd9ef8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
void* x0 = XMalloc(0x50)
DefinitionFillBlockWithDefaults(x0, *macro_ptr_DefTextureImportData)
int32_t* x0_2 = DefParseTreeMakeDefinition(*(arg2 + 8), *macro_ptr_DefTextureXMLImportSpec)
char var_98
XString::XString(&var_98)
FileNameFromPath(&var_98)
XString::~XString()
int32_t x0_6 = strncmp(XString::operator char const*(), "skybox_", 7)
int32_t x0_8

if (x0_6 != 0)
    x0_8 = strncmp(XString::operator char const*(), "cubemap_", 8)

if (x0_6 == 0 || x0_8 == 0)
    x0_2[4] = 1

void var_a0
XString::XString(&var_a0)
char* x0_10 = XString::operator char const*()
void* x0_11 = strrchr(x0_10, 0x2e)
int32_t* x0_12

if (x0_11 != 0)
    x0_12 = SymbolMapLookupValue(0x1180490, x0_11 + 1)

int32_t x0_14
float v0
float v1

if (x0_11 != 0 && x0_12 != 0)
    int32_t x8_1 = *x0_12
    v1 = fconvert.s(1f)
    v0 = v1 f/ x0_2[7]
    *(x0 + 0xc) = v0
    
    if (x8_1 == 0xa)
        int32_t x8_16 = *x0_2
        
        if (x8_16 != 0xa && x8_16 != 0)
            goto label_fda058
        
        x0_14 = sub_fda580(x0_2, x0, x0_10)
        goto label_fda074
    
    if (x8_1 != 5)
        if (x8_1 != 4 || (*x0_2 | 8) != 8)
            goto label_fda058
        
        x0_14 = sub_fda580(x0_2, x0, x0_10)
        goto label_fda074
    
    if (x0_2[6] != 0)
        goto label_fda058
    
    int32_t x8_18 = *x0_2
    
    if (x8_18 != 5 && x8_18 != 0)
        goto label_fda058
    
    x0_14 = sub_fda580(x0_2, x0, x0_10)
    goto label_fda074

v1 = fconvert.s(1f)
v0 = v1 f/ x0_2[7]
*(x0 + 0xc) = v0
label_fda058:
int32_t x19_2

if (*x0_2 != 9)
    void* x0_18 = strrchr(x0_10, 0x2e, v0, v1)
    int32_t* x0_19
    
    if (x0_18 != 0)
        x0_19 = SymbolMapLookupValue(0x1180490, x0_18 + 1)
    
    int32_t var_ac_1
    
    if (x0_18 == 0 || x0_19 == 0)
        var_ac_1 = 0
    else
        var_ac_1 = *x0_19
    
    void* var_88
    __builtin_memset(&var_88, 0, 0x14)
    int32_t var_74_1 = x0_2[1]
    TextureLoadFileWithSTB(&var_88, x0_10)
    float v0_1 = x0_2[7]
    int32_t x8_10
    
    x8_10 = var_ac_1 == 6 ? 0xb : 8
    
    *x0_2 = x8_10
    int64_t var_80
    
    if (not(v0_1 == fconvert.s(1f)))
        int32_t x26_1 = var_80.d
        int32_t x27_1 = var_80:4.d
        float v1_1 = fconvert.s(0.5f)
        float v2_1 = fconvert.s(-0.5f)
        void* x24_2 = var_88
        v8.d = vrndp_f32(v0_1 * float.s(x27_1))
        float temp0_2 = vrndp_f32(v0_1 * float.s(x26_1))
        
        if (v8.d f< 0f)
            v9.d = v2_1
        else
            v9.d = v1_1
        
        if (temp0_2 < 0f)
            v1_1 = v2_1
        
        uint32_t temp0_3 = vcvts_s32_f32(temp0_2 + v1_1)
        int32_t x0_23 = TextureFormatPitch(temp0_3, zx.q(var_74_1))
        uint32_t temp0_4 = vcvts_s32_f32(v8.d f+ v9.d)
        void* x0_26 = XMalloc(TextureFormatLinearImageSize(temp0_3, temp0_4, zx.q(var_74_1)))
        stbir_resize_uint8(x24_2, zx.q(x26_1), zx.q(x27_1), 0, x0_26, zx.q(temp0_3), zx.q(temp0_4), 
            0, TextureFormatBytesPerPixel(zx.q(var_74_1)))
        var_88 = x0_26
        var_80.d = temp0_3
        var_80:4.d = temp0_4
        int32_t var_78_1 = x0_23
        XFree(x24_2)
        x8_10 = *x0_2
    
    if (x8_10 == 0xb)
        *x0 = var_80.d
        *(x0 + 0x10) = 1
        *(x0 + 0x3c) = 1
        *(x0 + 4) = var_80:4.d
        *(x0 + 0x48) = XCalloc(0x10)
        *(x0 + 0x14) = 0xb
        *(x0 + 0x18) = var_74_1
        *(x0 + 0x1c) = x0_2[4]
        sub_fd93b0(&var_88)
        DefTextureImage* x1_15 = *(x0 + 0x48)
        *x1_15 = 0
        QoiWriteImageSpecToBits(&var_88, x1_15)
        XFree(var_88)
    else if (x8_10 != 8)
        if (var_ac_1 == 2 && x8_10 == 0)
            sub_fda750(x0_2, x0, &var_88, x0_10, 2)
        else if (x8_10 == 6 || x8_10 == 0)
            sTextureImportToPng(x0_2, x0, &var_88, x0_10)
        else
            XFree(var_88)
            XTrace("texture encoding not supported %s")
    else if (x0_2[4] != 1)
        sub_fda750(x0_2, x0, &var_88, x0_10, var_ac_1)
    else
        sTextureImportToPng(x0_2, x0, &var_88, x0_10)
    
    x19_2 = 1
else
    x0_14 = TextureImportASTC(arg1, x0_2, x0, x0_10)
label_fda074:
    
    if ((x0_14 & 1) != 0)
        x19_2 = 1
    else
        if (*(x0 + 0x3c) s>= 1)
            int64_t x19_1 = 0
            int64_t i = 0
            
            do
                int32_t* x23_1 = *(x0 + 0x48)
                void* x24_1 = x23_1 + x19_1
                void* x0_16 = *(x24_1 + 8)
                
                if (x0_16 != 0)
                    XFree(x0_16)
                    *(x24_1 + 8) = 0
                
                *(x23_1 + x19_1) = 0
                i += 1
                x19_1 += 0x10
            while (i s< sx.q(*(x0 + 0x3c)))
        
        XString::operator char const*()
        XTrace("texture reimport failed to read '%s'")
        x19_2 = 0

XString::~XString()
DefinitionDeleteBlock(x0_2, *macro_ptr_DefTextureXMLImportSpec)

if ((x19_2 & 1) == 0)
    XFree(x0)
else
    **arg2 = x0

XString::~XString()
return zx.q(x19_2)
