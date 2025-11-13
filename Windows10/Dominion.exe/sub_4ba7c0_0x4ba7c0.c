// 函数: sub_4ba7c0
// 地址: 0x4ba7c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edx = data_cc8d5c
int32_t eax

if (edx != 0)
    void* ebx_1 = edx + 0x7754
    void* esi_1 = *ebx_1
    void* result = esi_1 + *(edx + 0x7758) * 0xc
    
    if (esi_1 u>= result)
        return result
    
    while ((*(esi_1 + 8) & 0xffff0000) == 0)
        esi_1 += 0xc
        
        if (esi_1 u>= result)
            return result
    
    if (esi_1 == 0xffffffff)
        return result
    
    while (true)
        int32_t var_10 = *esi_1
        eax = *(esi_1 + 4)
        int32_t var_c_1 = eax
        
        if (edx == 0)
            break
        
        if (*(edx + 0x18) == 3)
            int32_t eax_4 = *(edx + 0x14)
            void* ecx_1 = data_147abf4
            
            if (eax_4 != 0)
                uint32_t edi_1 = zx.d(eax_4.w)
                
                if (edi_1 u< *(ecx_1 + 4))
                    void* edi_3 = edi_1 * 0x64 + *ecx_1
                    
                    if (*(edi_3 + 0x60) == eax_4 && edi_3 != 0)
                        int32_t var_24_1 = 0xf42cf
                        sub_689e00(eax_4, 8, edi_3 + 0x50)
                        sub_689be0(&var_10, 8, edi_3 + 0x50, &var_10)
                        edx = data_cc8d5c
        
        esi_1 += 0xc
        result = *ebx_1 + *(ebx_1 + 4) * 0xc
        
        if (esi_1 u>= result)
            return result
        
        while ((*(esi_1 + 8) & 0xffff0000) == 0)
            esi_1 += 0xc
            
            if (esi_1 u>= result)
                return result
        
        if (esi_1 == 0xffffffff)
            return result

sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, 
    "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
