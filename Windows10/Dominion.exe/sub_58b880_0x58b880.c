// 函数: sub_58b880
// 地址: 0x58b880
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = sub_571b30(arg2, *(arg3 + 0xd48))
int32_t ecx_1 = *(arg3 + 0xd38)
int32_t edi = 0
void* result_1 = result

if (ecx_1 s> 0)
    do
        *(arg4 + (edi << 2)) = 0
        int32_t eax_1 = sub_57da30(arg3, *(result + 0x8c))
        
        if (sub_576b30(eax_1, edi, arg3, 0x22, eax_1, 0, 0) s> 0)
            *(arg4 + (edi << 2)) += 1
        
        ecx_1 = *(arg3 + 0xd38)
        edi += 1
        result = result_1
    while (edi s< ecx_1)

if (*(result + 0xa4) != 0)
    int32_t i = 0
    
    if (ecx_1 s> 0)
        TEB* fsbase
        void** ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
        int64_t var_1c = 0
        void* eax_3 = *ThreadLocalStoragePointer
        
        do
            sub_573050(&var_1c, i, arg3, &var_1c)
            int32_t eax_7 = (*(result_1 + 0xa4))()
            *(arg4 + (i << 2)) += eax_7
            int32_t eax_8 = *(eax_3 + 0xf010)
            
            if (eax_8 s<= 0)
                sub_63b870(eax_8, &data_801800, "cs.numContexts > 0", 
                    "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x792, "DomPopContext")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            result = eax_8 - 1
            i += 1
            *(eax_3 + 0xf010) = result
        while (i s< *(arg3 + 0xd38))

void* result_2 = nullptr
void* edi_1 = arg3 + 0x1070

while (*(arg3 + 0x127c) != 0)
    int32_t ebx_1 = *(edi_1 - 4)
    
    if (ebx_1 == 0)
        break
    
    int32_t eax_10
    
    if (ebx_1 != arg2)
        eax_10 = sub_57da30(arg3, arg2)
    
    if (ebx_1 == arg2 || eax_10 == ebx_1)
        int32_t i_1 = 0
        
        if (*(arg3 + 0xd38) s> 0)
            do
                *(arg4 + (i_1 << 2)) += *edi_1
                i_1 += 1
            while (i_1 s< *(arg3 + 0xd38))
    
    edi_1 += 8
    result = result_2 + 1
    result_2 = result
    
    if (result s>= 0x21)
        break

return result
