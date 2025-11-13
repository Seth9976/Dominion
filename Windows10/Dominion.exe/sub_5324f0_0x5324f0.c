// 函数: sub_5324f0
// 地址: 0x5324f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = sub_573400()
int32_t* ecx = *(result + 0x64)
int32_t var_8
char* ecx_1

if (ecx != 0)
    int32_t eax = *ecx
    
    if (eax != 0)
        result = eax - 2
    
    if (eax == 0 || eax == 2)
        result.b = ecx[2] == 1
        return result
    
    char const* const var_4_1 = "SnapshotPhase"
    var_8 = 0x1bb1
    ecx_1 = "Halt"
else
    char const* const var_4 = "SnapshotPhase"
    var_8 = 0x1ba9
    ecx_1 = "c.triggerInfo"

sub_63b870(result, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", var_8, 
    "SnapshotPhase")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
