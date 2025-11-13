// 函数: sub_5a04d0
// 地址: 0x5a04d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1 u> 3)
    int32_t eax
    sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomLog.cpp", 0x1373, 
        "DomLogTotalLines")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t ebx = data_1597e30

switch (arg1)
    case 0
        return ebx
    case 1
        void* eax_3 = data_1597e2c
        int32_t edx_3 = ebx << 6
        void* ecx_3 = eax_3
        int32_t edi_1 = 0
        void* esi_1 = edx_3 + eax_3
        void* edx_4 = edx_3 + eax_3
        
        if (ecx_3 != edx_4)
            do
                if (*(ecx_3 + 8) == 6 && *(ecx_3 + 0x24) == 0)
                    edi_1 = *(ecx_3 + 0x1c)
                
                ecx_3 += 0x40
            while (ecx_3 != edx_4)
            
            if (edi_1 s> 1)
                int32_t edx_5 = 0
                
                do
                    int32_t ebx_1 = edx_5
                    edx_5 += 1
                    
                    if (*(eax_3 + 8) == 6 && *(eax_3 + 0x24) == 0 && *(eax_3 + 0x1c) == edi_1 - 1)
                        return data_1597e30 - ebx_1
                    
                    eax_3 += 0x40
                while (eax_3 != esi_1)
                
                return data_1597e30 - edx_5
        
        return ebx
    case 2, 3
        int32_t edx_1 = 0
        void* eax_1 = data_1597e2c
        void* ecx_2 = (data_1597e30 << 6) + eax_1
        
        if (eax_1 != ecx_2)
            while (*(eax_1 + 8) != 4)
                eax_1 += 0x40
                edx_1 += 1
                
                if (eax_1 == ecx_2)
                    break
        
        return edx_1
