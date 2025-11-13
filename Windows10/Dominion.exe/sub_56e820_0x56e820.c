// 函数: sub_56e820
// 地址: 0x56e820
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edx = *(sub_573400() + 0x64)
int32_t eax_1 = *edx
int32_t eax_5
int32_t ecx_1

if (eax_1 == 0)
    ecx_1 = arg1 & edx[0xe]
    eax_5 = edx[0xf]
else
    if (eax_1 != 1)
        sub_63b870(eax_1 - 1, &data_801800, "Halt", 
            "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x1989, "SnapshotIsType")
        
        if (sub_63bc30() == 0)
            noreturn sub_63bb00() __tailcall
        
        breakpoint
    
    ecx_1 = arg1 & edx[6]
    eax_5 = edx[7]

int32_t result

if ((ecx_1 | (eax_5 & arg2)) == 0)
    result.b = 0
    return result

result.b = 1
return result
