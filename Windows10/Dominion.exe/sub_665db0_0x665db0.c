// 函数: sub_665db0
// 地址: 0x665db0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_10 = arg2
void* ecx = *(arg3 + 0x16e8)

if (ecx != 0 && *(arg3 + 0xc) != *(ecx + 0xc))
    *(arg3 + 0x16f4) = 0
    *(arg3 + 0x15f0) = *(arg3 + 0x15e8)
    *(arg3 + 0xc) = *(ecx + 0xc)

int32_t edi = *(arg3 + 0x16f4)
int32_t ecx_1 = 0
void* result = *(arg3 + 0x16f0)
int32_t ebx = arg5

if (edi s> 0)
    arg2 = ebx
    
    if (ebx == 0xfffffc18)
        arg2 = 0xffffffff
    
    while (true)
        if (*(result + 4) == arg2)
            ebx = arg5
            
            if (*result == var_10)
                break
        
        ecx_1 += 1
        result += 0x1c
        
        if (ecx_1 s>= edi)
            goto label_665e41

if (edi s> 0 && result != 0)
    arg2.b = 0
else
label_665e41:
    
    if (*(arg3 + 0x16f8) == 0)
        int32_t* eax_3
        
        if ((arg6 & 1) == 0)
            eax_3, arg2 = sub_64c020(0x1c00)
            *(arg3 + 0x16f8) = 0x100
        else
            eax_3, arg2 = sub_64c020(0x1c)
            *(arg3 + 0x16f8) = 1
        
        *(arg3 + 0x16f4) = 0
        *(arg3 + 0x16f0) = eax_3
    
    int32_t eax_4 = *(arg3 + 0x16f4)
    
    if (eax_4 s>= *(arg3 + 0x16f8))
        sub_63b870(eax_4, &data_801800, "mSize < mSizeReserved", "C:\x\ax2017\Engine\xArray.h", 
            0xa1, "XArray<struct UI2State>::Alloc")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    arg2.b = 1
    *(*(arg3 + 0x16f0) + eax_4 * 0x1c + 4) = 0
    *(arg3 + 0x16f4) += 1
    result = *(arg3 + 0x16f0) + *(arg3 + 0x16f4) * 0x1c - 0x1c

*result = var_10

if (ebx == 0xfffffc18)
    ebx = 0xffffffff

*(result + 0x14) = arg4
*(result + 4) = ebx
*(result + 8) = 0

if (arg2.b == 0)
    return result

return sub_65bf00(arg3)
