// 函数: sub_6fdf80
// 地址: 0x6fdf80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_4 = arg1
int32_t eax = *arg1
uint32_t eax_1 = eax

if (eax == 0)
    goto label_6fe016

int32_t eax_2 = eax_1 - 1
char const* const var_18
int32_t var_14
char const* const var_10
char* ecx
void* edx_1

if (eax_1 == 1)
    edx_1 = data_147abe8
    eax_1 = arg1[1]
    
    if (edx_1 != 0)
        void* edi_2 = *(edx_1 + 0x10)
        
        if (eax_1 == 0)
            goto label_6fe01c
        
        uint32_t ecx_4 = zx.d(eax_1.w)
        
        if (ecx_4 u>= *(edi_2 + 4))
            goto label_6fe01c
        
        void* ecx_6 = ecx_4 * 0x7c + *edi_2
        
        if (*(ecx_6 + 0x78) != eax_1 || ecx_6 == 0)
            goto label_6fe01c
        
        eax_1 = sub_6b8440(ecx_6)
    label_6fe016:
        edx_1 = data_147abe8
    label_6fe01c:
        
        if (edx_1 == 0)
            goto label_6fe037
        
        void* edx_2 = *(edx_1 + 0x14)
        uint32_t result = zx.d(arg1[0xc].w)
        int32_t ecx_7 = *(edx_2 + 0xc)
        *(edx_2 + 0xc) = result
        arg1[0xc] = ecx_7
        *(edx_2 + 0x10) -= 1
        return result
    
label_6fe037:
    var_10 = "GetGameData"
    var_14 = 0x45
    var_18 = "C:\x\ax2017\Engine\Game.h"
    ecx = "gpGameData"
else
    eax_1 = eax_2 - 1
    
    if (eax_2 == 1)
        edx_1 = data_147abe8
        eax_1 = arg1[2]
        
        if (edx_1 == 0)
            goto label_6fe037
        
        void* edi_1 = *(edx_1 + 0xc)
        
        if (eax_1 == 0)
            goto label_6fe01c
        
        uint32_t ecx_1 = zx.d(eax_1.w)
        
        if (ecx_1 u>= *(edi_1 + 4))
            goto label_6fe01c
        
        void* ecx_3 = ecx_1 * 0x94 + *edi_1
        
        if (*(ecx_3 + 0x90) != eax_1 || ecx_3 == 0)
            goto label_6fe01c
        
        eax_1 = sub_6e5c50(ecx_3)
        goto label_6fe016
    
    var_10 = "AttachmentDestroy"
    var_14 = 0x3f
    var_18 = "C:\x\ax2017\Engine\Attachment.cpp"
    ecx = "Halt"
sub_63b870(eax_1, &data_801800, ecx, var_18, var_14, var_10)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
