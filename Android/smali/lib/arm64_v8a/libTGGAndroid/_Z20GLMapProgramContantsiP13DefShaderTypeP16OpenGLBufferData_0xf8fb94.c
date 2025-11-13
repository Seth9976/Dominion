// 函数: _Z20GLMapProgramContantsiP13DefShaderTypeP16OpenGLBufferData
// 地址: 0xf8fb94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x8_1 = *(x8 + 0x28)
int32_t var_134 = 0
glGetProgramiv(arg1, 0x8b86, &var_134)
*(arg3 + 0x104) = 0
*(arg2 + 0x18) = 0
int64_t result = XCallocAllowingZeroSize(var_134 * 0xc)
*(arg2 + 0x20) = result

if (var_134 s>= 1)
    int32_t x26_1 = 0
    int32_t x22_1 = 0
    
    while (true)
        int32_t var_13c = 0
        int32_t var_138 = 0
        void var_cc
        glGetActiveUniform(zx.q(arg1), zx.q(x22_1), 0x64, 0, &var_138, &var_13c, &var_cc)
        char var_130[0x64]
        strcpy(&var_130, &var_cc)
        char* x0_4 = strchr(&var_130, 0x5b)
        
        if (x0_4 != 0)
            *x0_4 = 0
        
        uint32_t x0_6 = AttribTagFindByTagName(*gMaterialAttribTable, &var_130)
        
        if (x0_6 == 0xffffffff)
            result = XTrace("Unknown shader constant '%s'")
            x22_1 += 1
            
            if (x22_1 s>= var_134)
                break
        else
            void* x0_8 = AttribTagGetDefMap(*gMaterialAttribTable, x0_6)
            int32_t* fp_1 = *(arg2 + 0x20)
            int64_t x23_1 = sx.q(*(arg2 + 0x18))
            void* x25_1 = fp_1 + x23_1 * 0xc
            *(x25_1 + 8) = x0_6
            *(x25_1 + 4) = var_138
            
            if (*(x0_8 + 0x18) == 0xf)
                *(x25_1 + 4) = x26_1
                x26_1 += 1
            
            result = glGetUniformLocation(zx.q(arg1), &var_cc)
            fp_1[x23_1 * 3] = result.d
            *(arg2 + 0x18) += 1
            int32_t x10_1 = *(arg3 + 0x104)
            int32_t x8_10 = *(x25_1 + 4) + fp_1[x23_1 * 3]
            int32_t x8_11
            
            x8_11 = x10_1 s> x8_10 ? x10_1 : x8_10
            
            *(arg3 + 0x104) = x8_11
            x22_1 += 1
            
            if (x22_1 s>= var_134)
                break

if (*(arg2 + 0x18) == 0)
    result = XFree(*(arg2 + 0x20))
    *(arg2 + 0x20) = 0

if (*(x8 + 0x28) == x8_1)
    return result

__stack_chk_fail()
noreturn
