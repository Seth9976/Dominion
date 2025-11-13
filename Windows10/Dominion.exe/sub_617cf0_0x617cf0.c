// 函数: sub_617cf0
// 地址: 0x617cf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = *(arg1 + 0x11a8)
int32_t esi = 0
int32_t ebx = 0
int32_t edx = 0
int32_t eax

if (edi s> 0)
    void* ecx = arg1 + 0x60
    
    do
        eax = *(ecx - 4)
        
        if (eax s> 0x3e8)
            if (eax != 0x3e9)
            label_617d6e:
                sub_63b870(eax, &data_801800, "Halt", 
                    "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xcb7a, "IsIntroGame")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            esi += 1
        else if (eax == 0x3e8)
            esi += 1
        else
            if (eax u> 3)
                goto label_617d6e
            
            switch (eax)
                case 3
                    eax = ebx + 1
                    
                    if (*ecx != 3)
                        eax = ebx
                    
                    ebx = eax
        
        edx += 1
        ecx += 0x22c
    while (edx s< edi)
    
    if (esi == 1)
        int32_t eax_1
        eax_1.b = ebx + 1 == edi
        return eax_1

eax.b = 0
return eax
