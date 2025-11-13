// 函数: sub_6160a0
// 地址: 0x6160a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_1

while (true)
    eax_1 = *(arg2 + 0x2c)
    
    if (eax_1 == 0)
        uint32_t esi_2 = zx.d((*(arg2 + 0x98)).w)
        
        if (esi_2 u>= 0x320)
            sub_591930()
        
        return *(esi_2 * 0x64 + arg1 + 0x1a4c)
    
    if (eax_1 == 1)
        return *(arg2 + 0x170)
    
    if (eax_1 != 3)
        break
    
    int32_t result = *(arg2 + 0x30)
    int32_t ecx
    
    if (result != 0x70d && result != 0x718)
        ecx = *(arg2 + 0x70)
    
    if (result == 0x70d || result == 0x718 || ecx == 0)
        return result
    
    arg2 = sub_5cba00(ecx)

sub_63b870(eax_1 - 3, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xc6e2, 
    "GfxGetCardEnum")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
