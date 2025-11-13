// 函数: sub_5cbb20
// 地址: 0x5cbb20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t var_c = arg1
uint32_t eax = arg1

for (int32_t i = *(eax + 0x2c); i != 0; i = *(eax + 0x2c))
    if (i != 3)
        if (i == 1)
            return *(eax + 0x170)
        
        if (i == 5)
            return *(eax + 0x204)
        
        sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            0x8db, "CardWhat")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t result = *(eax + 0x30)
    
    if (result == 0x70d)
        return 0x70d
    
    if (result == 0x718)
        return 0x718
    
    int32_t ecx = *(eax + 0x70)
    
    if (ecx == 0)
        return result
    
    eax = sub_5cba00(ecx)

uint32_t esi_1 = zx.d((*(eax + 0x98)).w)

if (esi_1 u>= 0x320)
    sub_591930()

return *(esi_1 * 0x64 + &data_b82524)
