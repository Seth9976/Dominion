// 函数: sub_666120
// 地址: 0x666120
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
uint32_t eax = sub_64e7a0(ecx)
void* edi = *(eax + 0x16e8)

if (edi != 0 && *(eax + 0xc) != *(edi + 0xc))
    *(eax + 0x16f4) = 0
    *(eax + 0x15f0) = *(eax + 0x15e8)
    *(eax + 0xc) = *(edi + 0xc)

int32_t edx = *(eax + 0x16f4)
int32_t eax_3 = 0
int32_t* ecx_2 = *(eax + 0x16f0)

if (edx s> 0)
    while (ecx_2[1] != arg4 || *ecx_2 != arg2)
        eax_3 += 1
        ecx_2 = &ecx_2[7]
        
        if (eax_3 s>= edx)
            goto label_66618a

if (edx s<= 0 || ecx_2 == 0)
label_66618a:
    
    if (*(eax + 0x16f8) == 0)
        *(eax + 0x16f0) = sub_64c020(0x1c00)
        *(eax + 0x16f4) = 0
        *(eax + 0x16f8) = 0x100
    
    int32_t eax_5 = *(eax + 0x16f4)
    
    if (eax_5 s>= *(eax + 0x16f8))
        sub_63b870(eax_5, &data_801800, "mSize < mSizeReserved", "C:\x\ax2017\Engine\xArray.h", 
            0xa1, "XArray<struct UI2State>::Alloc")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    *(*(eax + 0x16f0) + eax_5 * 0x1c + 4) = 0
    *(eax + 0x16f4) += 1
    ecx_2 = *(eax + 0x16f0) + ((*(eax + 0x16f4) * 7 - 7) << 2)

*ecx_2 = arg2
ecx_2[1] = arg4
ecx_2[2] = 1
ecx_2[6] = arg3
return sub_65bf00(eax)
