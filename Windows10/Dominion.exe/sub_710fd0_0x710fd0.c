// 函数: sub_710fd0
// 地址: 0x710fd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1[4] != 0)
    return 

int32_t i = 0
arg1[4] = 1

if (arg1[2] s> 0)
    do
        int32_t ecx = arg1[1]
        void* eax = *(ecx + (i << 2))
        void* esi_1 = *(ecx + (i << 2) + 4)
        
        switch (eax)
            case nullptr, 1, 3
                int32_t ecx_1 = *(esi_1 + 0x10)
                
                if (ecx_1 != 0)
                    ecx_1(*arg1, eax, esi_1, 0)
                
                void* ecx_2 = *arg1
                int32_t edx_1 = *(ecx_2 + 0xc)
                
                if (edx_1 != 0)
                    edx_1(ecx_2, eax, esi_1, 0)
            case 2
                int32_t eax_1 = *(esi_1 + 0x10)
                
                if (eax_1 != 0)
                    eax_1(*arg1, 2, esi_1, 0)
                
                void* eax_2 = *arg1
                int32_t ecx_3 = *(eax_2 + 0xc)
                
                if (ecx_3 != 0)
                    ecx_3(eax_2, 2, esi_1, 0)
                
                goto label_711078
            case 4
            label_711078:
                int32_t eax_3 = *(esi_1 + 0x10)
                
                if (eax_3 != 0)
                    eax_3(*arg1, 4, esi_1, 0)
                
                void* eax_4 = *arg1
                int32_t ecx_4 = *(eax_4 + 0xc)
                
                if (ecx_4 != 0)
                    ecx_4(eax_4, 4, esi_1, 0)
                
                void* esi_2 = *(esi_1 + 0x6c)
                free(*(esi_2 + 8))
                free(esi_2)
                void* esi_4 = *(esi_1 + 0x70)
                free(*(esi_4 + 8))
                free(esi_4)
                free(*(esi_1 + 0x74))
                free(esi_1)
            case 5
                int32_t eax_5 = *(esi_1 + 0x10)
                int32_t edx_2 = *(ecx + (i << 2) + 8)
                
                if (eax_5 != 0)
                    eax_5(*arg1, 5, esi_1, edx_2)
                
                eax = *arg1
                int32_t ecx_5 = *(eax + 0xc)
                
                if (ecx_5 != 0)
                    ecx_5(eax, 5, esi_1, edx_2)
                
                i += 1
        
        i += 2
    while (i s< arg1[2])

arg1[2] = 0
arg1[4] = 0
