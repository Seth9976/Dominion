// 函数: sub_58b9f0
// 地址: 0x58b9f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = arg2
int32_t var_14 = ebx
void* eax = sub_571b30(ebx, *(arg3 + 0xd48))
void* ecx_1 = eax
int32_t edi = 0

for (int32_t i = *(ecx_1 + 0xa8); i != 0; i = *(eax + ecx_1 + 0xa8))
    if (i == 8)
        eax = *(edi * 0xb4 + ecx_1 + 0xbc)
        
        if (eax != 0)
            int32_t esi = 0
            
            if (*(arg3 + 0xd38) s> 0)
                TEB* fsbase
                void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
                int64_t var_1c = 0
                void* eax_2 = *ThreadLocalStoragePointer
                void* var_c_1 = eax_2
                int32_t eax_7
                
                while (true)
                    int32_t ebx_1
                    ebx_1.b = sub_576b30(eax_2, esi, arg3, 0x2d, ebx, 0, 0) s> 0
                    sub_573050(&var_1c, esi, arg3, &var_1c)
                    int32_t eax_6 = eax() * (ebx_1 + 1)
                    *(arg4 + (esi << 2)) += eax_6
                    eax_7 = *(var_c_1 + 0xf010)
                    
                    if (eax_7 s<= 0)
                        break
                    
                    ebx = var_14
                    eax_2 = eax_7 - 1
                    esi += 1
                    *(var_c_1 + 0xf010) = eax_2
                    
                    if (esi s>= *(arg3 + 0xd38))
                        return eax_2
                
                sub_63b870(eax_7, &data_801800, "cs.numContexts > 0", 
                    "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x792, "DomPopContext")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
        
        break
    
    edi += 1
    eax = edi * 0xb4

return eax
