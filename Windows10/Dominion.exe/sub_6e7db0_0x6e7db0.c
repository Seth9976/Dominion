// 函数: sub_6e7db0
// 地址: 0x6e7db0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_2 = *arg2 + arg4 * 0x38

if (arg5 == 4)
    return *(eax_2 + 0x20)

if (arg5 == 5)
    return *(eax_2 + 0x24)

int32_t var_18
char const* const var_14
char* ecx_1

if (arg5 != 6)
    if (arg5 == 7)
        return *(eax_2 + 0x30)
    
    var_14 = "FlanimCompressGetInt"
    var_18 = 0x583
    ecx_1 = "Halt"
else
    int32_t esi_2 = *(eax_2 + 0x28)
    void* edx_1 = *(arg3 + 0x48)
    eax_2 = nullptr
    void* edi_1
    
    if (edx_1 s<= 0)
        edi_1 = arg3 + 0x48
    label_6e7e2d:
        *(*(arg3 + 0x40) + (edx_1 << 3)) = esi_2
        *edi_1 += 1
        return edx_1
    
    int32_t* ecx = *(arg3 + 0x40)
    
    do
        if (*ecx == esi_2)
            return eax_2
        
        eax_2 += 1
        ecx = &ecx[2]
    while (eax_2 s< edx_1)
    
    edi_1 = arg3 + 0x48
    
    if (edx_1 s< 0xc8)
        goto label_6e7e2d
    
    var_14 = "FlanimGetOrAddImage"
    var_18 = 0x564
    ecx_1 = "pFlanimDef->mImageCount < MAX_IMAGES_IN_FLANIM"

sub_63b870(eax_2, &data_801800, ecx_1, "C:\x\ax2017\Engine\Flanim.cpp", var_18, var_14)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
