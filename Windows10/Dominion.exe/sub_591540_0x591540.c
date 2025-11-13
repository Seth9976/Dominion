// 函数: sub_591540
// 地址: 0x591540
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx_1 = *(arg1 + 0x64)
int32_t var_8
int32_t eax
char const* const ecx

if (ecx_1 != 0)
    int32_t eax_1 = *ecx_1
    
    if (eax_1 == 0)
        return ecx_1[0xc]
    
    if (eax_1 == 1)
        return ecx_1[2]
    
    eax = eax_1 - 2
    
    if (eax_1 == 2)
        return ecx_1[4]
    
    char const* const var_4_1 = "SnapshotOwner"
    var_8 = 0x4ce5
    ecx = "Halt"
else
    char const* const var_4 = "SnapshotOwner"
    var_8 = 0x4cdb
    ecx = "c.triggerInfo"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_8, 
    "SnapshotOwner")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
