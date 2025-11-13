// 函数: sub_704cd0
// 地址: 0x704cd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t temp1 = arg2
arg2 -= 1
int32_t eax

if (temp1 == 1)
    if (SwapBuffers(*(arg1 + 8)) != 0)
        return sub_6fec00("EndScene opengl error check")
    
    enum WIN32_ERROR var_8_2 = GetLastError()
    sub_63b870(sub_63b5f0("openGL present error: %d"), &data_801800, "Halt", 
        "C:\x\ax2017\Engine\OpenGLGraphics.cpp", 0x130f, "OpenGLInterface::APIPresent")
else
    sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\OpenGLGraphics.cpp", 0x1308, 
        "OpenGLInterface::APIPresent")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
