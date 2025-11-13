// 函数: sub_665f50
// 地址: 0x665f50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
uint32_t eax = sub_64e7a0(ecx)
int32_t esi = 0
int32_t eax_1 = *(eax + 0x16f4)
int32_t* ecx_1 = *(eax + 0x16f0)

if (eax_1 s> 0)
    while (ecx_1[1] != arg4 || *ecx_1 != arg2)
        esi += 1
        ecx_1 = &ecx_1[7]
        
        if (esi s>= eax_1)
            goto label_665f8c

if (eax_1 s<= 0 || ecx_1 == 0)
label_665f8c:
    
    if (*(eax + 0x16f8) == 0)
        *(eax + 0x16f0) = sub_64c020(0x1c00)
        *(eax + 0x16f4) = 0
        *(eax + 0x16f8) = 0x100
    
    int32_t eax_3 = *(eax + 0x16f4)
    
    if (eax_3 s>= *(eax + 0x16f8))
        sub_63b870(eax_3, &data_801800, "mSize < mSizeReserved", "C:\x\ax2017\Engine\xArray.h", 
            0xa1, "XArray<struct UI2State>::Alloc")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    *(*(eax + 0x16f0) + eax_3 * 0x1c + 4) = 0
    *(eax + 0x16f4) += 1
    ecx_1 = *(eax + 0x16f0) + ((*(eax + 0x16f4) * 7 - 7) << 2)

ecx_1[1] = arg4
*ecx_1 = arg2
ecx_1[2] = 8
ecx_1[6] = *arg3
ecx_1[5] = 0
return sub_65bf00(eax)
