// 函数: _Z14HDRMakeBRDFLUTRK9IBLConfigPKc
// 地址: 0xf72e6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = data_241e0a8

if (result == 0)
    Draw3DRenderItemSubmissionBegin()
    int64_t v0_1
    v0_1.d = *(arg1 + 0x1c)
    v0_1.d = float.s(v0_1.d)
    uint64_t v1_1 = *V21
    v0_1.d = v1_1.d f* v0_1.d
    v0_1:4.d = v1_1:4.d f* v0_1.d
    int64_t var_28 = v0_1
    HDRMakeBRDFLUT_Render(&var_28)
    Draw3DRenderItemSubmissionEnd()
    char var_40
    XString::XString(&var_40)
    char var_48
    XString::XString(&var_48)
    XString::operator+(&var_40)
    AssetTypeGetName(3)
    char var_50
    XString::XString(&var_50)
    void var_38
    XString::operator+(&var_38)
    XString::~XString()
    XString::~XString()
    XString::~XString()
    XString::~XString()
    uint32_t __saved_x1_1 = *(arg1 + 0x1c)
    data_241e0a8 = TextureCreateForRendering(__saved_x1_1, __saved_x1_1, zx.q(*(arg1 + 0x20)), 3, 
        XString::operator char const*())
    
    if ((zx.d(data_241e0b8) & 1) == 0 && __cxa_guard_acquire(&data_241e0b8) != 0)
        uint32_t x0_14 = *(arg1 + 0x1c)
        data_241e0b0 = TextureCreateForRendering(x0_14, x0_14, 0x50, 4, nullptr)
        __cxa_guard_release(&data_241e0b8)
    
    RendererPushRT(data_241e0a8, data_241e0b0)
    int64_t* x0_11 = *gGraphicsInterface
    (*(*x0_11 + 0x120))(x0_11, zx.q(*(gDraw3DData + 0x38)), 0)
    RenderUseSubmittedCamera()
    RenderItemListSort()
    RenderItemListDraw(2)
    RenderClearRenderItems()
    OpenGL_RenderTexture_Resolve()
    RendererPopRT()
    result = data_241e0a8
    XString::~XString()

return result
