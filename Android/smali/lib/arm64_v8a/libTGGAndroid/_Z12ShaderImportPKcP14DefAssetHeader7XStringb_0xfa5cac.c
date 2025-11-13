// 函数: _Z12ShaderImportPKcP14DefAssetHeader7XStringb
// 地址: 0xfa5cac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DefShader* x19 = *arg2
void* i_2
__builtin_memset(&i_2, 0, 0x14)
sShaderAddIntConstant(&i_2, "HAVE_VERTEX_SHADER", 1)
sShaderAddIntConstant(&i_2, "HAVE_PIXEL_SHADER", 1)
void* x22_2

if ((arg4.d & 1) == 0)
    void* x0_18 = XMalloc(0x50)
    DefinitionFillBlockWithDefaults(x0_18, *macro_ptr_DefShaderImportData)
    int32_t x0_21 = OpenGLCompileShaderFromSource(XString::operator char const*(), x0_18)
    int32_t x0_25
    
    if ((x0_21 & 1) != 0)
        *(x19 + 8) = x0_18
        void* x0_22 = XMalloc(0x50)
        x22_2 = x0_22
        DefinitionFillBlockWithDefaults(x0_22, *macro_ptr_DefShaderImportData)
        x0_25 = OpenGLCompileShaderFromSource(XString::operator char const*(), x22_2)
    
    if ((x0_21 & 1) == 0 || (x0_25 & 1) == 0)
        pthread_kill(pthread_self(), 6)
        int64_t* x0_34 = XNoReturn()
        void* i = i_2
        
        while (i != 0)
            void* i_4 = i
            i = *(i + 0x10)
            XString::~XString()
            XString::~XString()
            XPooledFree(i_4, 0x20)
        
        sub_1101e04(x0_34)
        noreturn
else
    void* x0_2 = XMalloc(0x50)
    DefinitionFillBlockWithDefaults(x0_2, *macro_ptr_DefShaderImportData)
    
    if ((OpenGLCompileShaderFromFile(XString::operator char const*(), x0_2) & 1) == 0)
        SymbolMapLookupName(gpShaderTypeSymbolMap, 0)
        XString::operator char const*()
        XTrace("shader %s opengl reimport failed to read '%s'")
    
    *(x19 + 8) = x0_2
    void* x0_10 = XMalloc(0x50)
    x22_2 = x0_10
    DefinitionFillBlockWithDefaults(x0_10, *macro_ptr_DefShaderImportData)
    
    if ((OpenGLCompileShaderFromFile(XString::operator char const*(), x22_2) & 1) == 0)
        SymbolMapLookupName(gpShaderTypeSymbolMap, 1)
        XString::operator char const*()
        XTrace("shader %s opengl reimport failed to read '%s'")

*(x19 + 0x30) = x22_2
*(x19 + 0x50) = 0
OpenGL_DetectShaderInstancing(x19, AssetPtrFromPath(arg1, 4))
void* i_1 = i_2

while (i_1 != 0)
    void* i_3 = i_1
    i_1 = *(i_1 + 0x10)
    XString::~XString()
    XString::~XString()
    XPooledFree(i_3, 0x20)

return 1
