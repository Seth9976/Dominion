// 函数: sub_6ff190
// 地址: 0x6ff190
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char const* const var_10
int32_t var_c
char const* const var_8
int32_t eax
char* ecx

if (*(arg1 + 0x424c) == 0)
    eax = _aligned_malloc(0x14c000, 0x10)
    
    if (eax != 0)
        *(arg1 + 0x424c) = eax
        *(arg1 + 0x4254) = 0x1000
        *(arg1 + 0x4264) = "glbuffers"
        *(arg1 + 0x4260) = 0xd68c
        *(arg1 + 0x503c) = 0
        return 0xd68c
    
    var_8 = "XMalloc"
    var_c = 0x57
    var_10 = "C:\x\ax2017\Engine\xMemory.cpp"
    ecx = "pBuffer"
else
    var_8 = "DataArray<struct OpenGLBufferData>::DataArrayInitialize"
    var_c = 0xce
    var_10 = "C:\x\ax2017\Engine\DataArray.h"
    ecx = "mpBlock == NULL"

sub_63b870(eax, &data_801800, ecx, var_10, var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
