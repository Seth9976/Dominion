// 函数: sub_6fee60
// 地址: 0x6fee60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg3 s>= 0x400)
    sub_63b870(arg1, &data_801800, "registerIndex < MAX_UNIFORMS", 
        "C:\x\ax2017\Engine\OpenGLGraphics.cpp", 0x38b, "GLDupCheck_glUniform3fv")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* edx = arg4
int32_t result = data_147ded4 + 0x28
int32_t ecx = arg3 << 4
int32_t count = arg2 * 0xc
int32_t* ecx_1 = ecx + result
int32_t i_1 = count - 4

if (count u>= 4)
    int32_t i
    
    do
        result = *ecx_1
        
        if (result != *edx)
            goto label_6feeb6
        
        ecx_1 = &ecx_1[1]
        edx = &edx[1]
        i = i_1
        i_1 -= 4
    while (i u>= 4)

if (i_1 != 0xfffffffc)
label_6feeb6:
    result.b = *ecx_1
    
    if (result.b != *edx)
        (*__glewUniform3fv)(arg3, arg2, arg4)
        return memcpy(data_147ded4 + ecx + 0x28, arg4, count)
    
    if (i_1 != 0xfffffffd)
        result.b = *(ecx_1 + 1)
        
        if (result.b != *(edx + 1))
            (*__glewUniform3fv)(arg3, arg2, arg4)
            return memcpy(data_147ded4 + ecx + 0x28, arg4, count)
        
        if (i_1 != 0xfffffffe)
            result.b = *(ecx_1 + 2)
            
            if (result.b != *(edx + 2))
                (*__glewUniform3fv)(arg3, arg2, arg4)
                return memcpy(data_147ded4 + ecx + 0x28, arg4, count)
            
            if (i_1 != 0xffffffff)
                result.b = *(ecx_1 + 3)
                
                if (result.b != *(edx + 3))
                    (*__glewUniform3fv)(arg3, arg2, arg4)
                    return memcpy(data_147ded4 + ecx + 0x28, arg4, count)

return result
