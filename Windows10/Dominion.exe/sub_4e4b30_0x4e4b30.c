// 函数: sub_4e4b30
// 地址: 0x4e4b30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0
int32_t edx = 0
int32_t eax = 0
void* const eax_1

while (true)
    if (*(eax + &data_780878) == arg3)
        eax_1 = edx * 0x10c + &data_780878
        break
    
    eax += 0x10c
    edx += 1
    
    if (eax u>= 0x28d4)
        eax_1 = &data_780878
        break

int32_t ecx = *(eax_1 + 8)

if (ecx u> 5)
    sub_63b870(eax_1, &data_801800, "Halt", "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", 
        0x14d5, "CalcThingsToTurnOn")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

switch (ecx)
    case 0
        return result
    case 1, 5
        int32_t var_8_1 = 0
        void* ebx_1 = eax_1 + 0xc
        
        while (*ebx_1 != 0)
            int32_t edx_3 = var_8_1 + 1
            result += sub_4e4b30(arg4 - result)
            ebx_1 += 4
            var_8_1 = edx_3
            
            if (edx_3 s>= 0x40)
                return result
        
        return result
    case 2
        *arg2 = 1
        arg2[1] = *(eax_1 + 0xc)
        return 1
    case 3
        *arg2 = 3
        arg2[1] = *(eax_1 + 0xc)
        return 1
    case 4
        *arg2 = 2
        
        switch (*eax_1 - 0x2101)
            case 0
                arg2[1] = 1
            case 1
                arg2[1] = 2
            case 2
                arg2[1] = 4
            case 8
                arg2[1] = 8
        
        return 1
