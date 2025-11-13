// 函数: _Z29OpenGL_DetectShaderInstancingP9DefShaderP6XAsset
// 地址: 0xf926ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
int64_t result = GLLoadShader(0x8b31, *(*(arg1 + 8) + 0x38), arg2)

if (result.d != 0)
    int32_t x20_1 = result.d
    result = GLLoadShader(0x8b30, *(*(arg1 + 0x30) + 0x38), arg2)
    
    if (result.d != 0)
        int32_t x21_1 = result.d
        result = GLGenerateProgram(x20_1, x21_1)
        
        if (result.d != 0)
            int32_t x22_1 = result.d
            int32_t var_124 = 0
            glGetProgramiv(result, 0x8b86, &var_124)
            
            if (var_124 s>= 1)
                int32_t x23_1 = 0
                
                do
                    int32_t var_12c = 0
                    int32_t var_128 = 0
                    void var_bc
                    glGetActiveUniform(zx.q(x22_1), zx.q(x23_1), 0x64, 0, &var_128, &var_12c, 
                        &var_bc)
                    char var_120[0x64]
                    strcpy(&var_120, &var_bc)
                    char* x0_4 = strchr(&var_120, 0x5b)
                    
                    if (x0_4 != 0)
                        *x0_4 = 0
                    
                    if (AttribTagFindByTagName(*gMaterialAttribTable, &var_120) - 0x60 u<= 2)
                        int32_t x8_7 = var_128
                        *(arg1 + 0x50) = 1
                        *(arg1 + 0x54) = x8_7
                        break
                    
                    x23_1 += 1
                while (x23_1 s< var_124)
            
            glDeleteShader(zx.q(x20_1))
            glDeleteShader(zx.q(x21_1))
            result = glDeleteProgram(zx.q(x22_1))

if (*(x24 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
