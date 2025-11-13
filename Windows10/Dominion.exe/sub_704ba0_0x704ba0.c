// 函数: sub_704ba0
// 地址: 0x704ba0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi

if (arg2 u> 7)
    int32_t eax
    sub_63b870(eax, &data_801800, "index >= 0 && index < MAX_QUERIES", 
        "C:\x\ax2017\Engine\OpenGLGraphics.cpp", 0x123a, "OpenGLInterface::MarkFrameBegin")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t ecx = *(arg1 + ((arg2 + 0x109c) << 2))

if (ecx != 0)
    int64_t var_10 = 0
    (*__glewGetQueryObjectui64v)(ecx, 0x8866, &var_10)
    *(arg1 + (arg2 << 2) + 0x4290) = var_10.d - *(arg1 + (arg2 << 3) + 0x42b0)
else
    (*__glewGenQueries)(1, arg1 + ((arg2 + 0x109c) << 2))

return (*__glewGetInteger64v)(0x8e28, arg1 + ((0x856 + arg2) << 3))
