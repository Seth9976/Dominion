// 函数: sub_572a00
// 地址: 0x572a00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
int32_t edi = 0
int32_t* esi = sub_5722c0(arg1, arg2, arg3, arg4)

if (arg5 != 0)
    int32_t eax_1 = *esi
    
    do
        if (eax_1 == 0)
            sub_591930()
        
        uint32_t esi_2 = zx.d((*esi).w)
        
        if (esi_2 u>= 0x320)
            sub_591930()
        
        esi = esi_2 * 0x64 + 0x1aa4 + arg3
        eax_1 = *esi
        
        if (eax_1 == 0)
            sub_63b870(eax_1, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 
                0x528, "RemoveCardAtIndex")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        edi += 1
    while (edi != arg5)

if (*esi == 0)
    sub_591930()

uint32_t edi_2 = zx.d((*esi).w)

if (edi_2 u>= 0x320)
    sub_591930()

int32_t result = *esi
*esi = *(edi_2 * 0x64 + arg3 + 0x1aa4)
return result
