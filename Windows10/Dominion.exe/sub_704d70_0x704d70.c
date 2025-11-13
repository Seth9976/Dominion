// 函数: sub_704d70
// 地址: 0x704d70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
void var_38
int32_t eax_1 = __security_cookie ^ &var_38
int32_t var_14 = eax_1
int32_t temp1 = arg2
arg2 -= 1
int32_t esi
int32_t var_3c = esi
int32_t edi
int32_t var_40 = edi
arg1[0x109b].b = 0

if (temp1 != 1)
    char const* const var_44_1 = "OpenGLInterface::RenderTargetSetMonitorTarget"
    int32_t var_48_1 = 0x1342
    char const* const var_4c = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
    sub_63b870(eax_1, &data_801800, "Halt")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

RECT rect
GetClientRect(data_147b084, &rect)
int32_t edx = *arg1
rect.bottom -= rect.top
rect.right -= rect.left
rect.left = 0
rect.top = 0
int128_t xmm0
xmm0.d = rect.left
xmm0:4.d = rect.top
xmm0:8.d = rect.right
xmm0:0xc.d = rect.bottom
int128_t var_50 = xmm0
(*(edx + 0x5c))(var_50)
BOOL eax_4 = wglMakeCurrent(arg1[2], arg1[1])
int32_t var_54_1 = 0
int32_t var_58_1 = 0x8d40
uint32_t result = (*__glewBindFramebuffer)(0x8d40, 0)
int32_t edx_1 = arg1[5]
arg1[8] = arg1[4]
arg1[9] = edx_1

if (eax_4 == 0)
    char const* const var_5c_1 = "OpenGL failed to set monitor render target"
    result = sub_63b5f0("OpenGL failed to set monitor render target")

CookieCheckFunction(result)
return result
