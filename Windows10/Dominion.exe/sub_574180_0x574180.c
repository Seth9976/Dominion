// 函数: sub_574180
// 地址: 0x574180
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg3 + 0x1654
int32_t edi = 0x13
uint32_t eax_1

while (true)
    int32_t eax = *esi
    
    if (eax != 0)
        eax_1 = sub_58d5a0(arg2, eax)
        
        if (eax_1.b == 0)
            edi += 1
            esi = &esi[4]
            
            if (edi s> 0x21)
                break
            
            continue
    
    void* ecx = arg3
    int32_t* esi_1 = 0x21
    
    if (edi s<= 0x21)
        void* ebx_1 = ecx + 0x1734
        
        do
            if (*ebx_1 != 0)
                sub_574000(esi_1 + 1, esi_1, ecx, esi_1 + 1)
                ecx = arg3
            
            esi_1 -= 1
            ebx_1 -= 0x10
        while (esi_1 s>= edi)
    
    return sub_5735a0(sub_573c80(arg2, arg4, 0, nullptr), arg2, arg3, arg4, 0)

sub_63b870(eax_1, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x951, 
    "CalcKingdomInsertIdx")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
