// 函数: _ZN15OpenGLInterface18CreateShaderBufferEP6XAsset10ShaderType
// 地址: 0xf90288
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x2

if (entry_x2 != 0)
    return 0

XAsset* x21_1 = arg2
int64_t* x19_1 = arg2
int64_t* x8_1

if (arg2 == 0)
    x19_1 = AssetPtrGetNull(4)
    x8_1 = *x19_1
    
    if (x8_1 == 0)
        AssetCatalogLoadAsset(x19_1, false, true)
        x8_1 = *x19_1
else
    x8_1 = *x19_1
    
    if (x8_1 == 0)
        AssetCatalogLoadAsset(x19_1, false, true)
        x8_1 = *x19_1

*(x19_1 + 0x24) += 1
void* x23_1 = *x8_1
void* x24_1 = *(x23_1 + 8)
uint64_t result

if (x24_1 == 0)
    result = 0
else
    int32_t x0 = GLLoadShader(0x8b31, *(x24_1 + 0x38), x21_1)
    
    if (x0 == 0)
        GLLoadShader(0x8b31, *(x24_1 + 0x48), x21_1)
        result = 0
    else
        void* x24_2 = *(x23_1 + 0x30)
        int32_t x0_1 = GLLoadShader(0x8b30, *(x24_2 + 0x38), x21_1)
        
        if (x0_1 == 0)
            GLLoadShader(0x8b30, *(x24_2 + 0x48), x21_1)
            result = 0
        else
            result = GLGenerateProgram(x0, x0_1)
            
            if (result.d != 0)
                uint64_t x9_3 = zx.q(*(arg1 + 0x4258))
                int64_t x10_2
                int32_t x11_1
                
                if (x9_3.d != *(arg1 + 0x4250))
                    x10_2 = *(arg1 + 0x4248)
                    x11_1 = *(x10_2 + x9_3 * 0x158 + 0x150)
                else
                    x11_1 = x9_3.d + 1
                    *(arg1 + 0x4250) = x11_1
                    x10_2 = *(arg1 + 0x4248)
                
                *(arg1 + 0x4258) = x11_1
                OpenGLBufferData* x20_2 = x10_2 + x9_3 * 0x158
                __builtin_memset(x20_2, 0, 0x150)
                *(x20_2 + 0x150) = x9_3.d | *(arg1 + 0x4260) << 0x10
                int32_t x9_5 = *(arg1 + 0x4260)
                int32_t x9_6
                
                if (x9_5 == 0xffff)
                    x9_6 = 1
                else
                    x9_6 = x9_5 + 1
                
                *(arg1 + 0x425c) += 1
                *(arg1 + 0x4260) = x9_6
                *x20_2 = result.d
                *(x20_2 + 4) = 3
                GLMapProgramContants(result.d, x23_1 + 0x28, x20_2)
                GLGetProgramAttributes(x20_2)
                result = zx.q(*(x20_2 + 0x150))

*(x19_1 + 0x24) -= 1
return result
