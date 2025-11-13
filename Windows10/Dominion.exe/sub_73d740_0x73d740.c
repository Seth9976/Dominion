// 函数: sub_73d740
// 地址: 0x73d740
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edi = data_147abe8
int32_t eax

if (edi != 0)
    int32_t* edi_1 = *(edi + 0xc)
    void* esi_1 = nullptr
    
    while (true)
        if (esi_1 != 0)
            esi_1 += 0x94
        else
            esi_1 = *edi_1
        
        eax = edi_1[1] * 0x94 + *edi_1
        
        if (esi_1 u>= eax)
            break
        
        while ((*(esi_1 + 0x90) & 0xffff0000) == 0)
            esi_1 += 0x94
            
            if (esi_1 u>= eax)
                goto label_73d787
        
        sub_6e5c50(esi_1)
    
label_73d787:
    void* edi_2 = data_147abe8
    
    if (edi_2 != 0)
        int32_t* edi_3 = *(edi_2 + 0x10)
        void* esi_2 = nullptr
        
        while (true)
            if (esi_2 != 0)
                esi_2 += 0x7c
            else
                esi_2 = *edi_3
            
            eax = edi_3[1] * 0x7c + *edi_3
            
            if (esi_2 u>= eax)
                break
            
            while ((*(esi_2 + 0x78) & 0xffff0000) == 0)
                esi_2 += 0x7c
                
                if (esi_2 u>= eax)
                    goto label_73d7d0
            
            sub_6b8440(esi_2)
        
    label_73d7d0:
        int32_t* edi_4 = data_147abe8
        
        if (edi_4 != 0)
            int32_t* edi_5 = *edi_4
            void* esi_3 = nullptr
            int32_t result
            
            while (true)
                if (esi_3 != 0)
                    esi_3 += 0x6c
                else
                    esi_3 = *edi_5
                
                result = edi_5[1] * 0x6c + *edi_5
                
                if (esi_3 u>= result)
                    break
                
                while ((*(esi_3 + 0x68) & 0xffff0000) == 0)
                    esi_3 += 0x6c
                    
                    if (esi_3 u>= result)
                        return result
                
                sub_6da670(esi_3)
            
            return result

sub_63b870(eax, &data_801800, "gpGameData", "C:\x\ax2017\Engine\Game.h", 0x45, "GetGameData")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
