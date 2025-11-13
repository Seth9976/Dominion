// 函数: sub_6fecf0
// 地址: 0x6fecf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 u> 7)
    int32_t eax
    sub_63b870(eax, &data_801800, "textureIndex >= 0 && textureIndex < 8", 
        "C:\x\ax2017\Engine\OpenGLGraphics.cpp", 0x321, "GLDupCheck_glBindTextureCube")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* result = data_147ded4

if (*(result + (arg2 << 2) + 0x4168) == arg1)
    return result

*(result + (arg2 << 2) + 0x4168) = arg1

if (*(result + 0x40a4) != arg2)
    *(result + 0x40a4) = arg2
    (*__glewActiveTexture)(arg2 + 0x84c0)

return glBindTexture(0x8513, arg1)
