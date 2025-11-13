// 函数: sub_714780
// 地址: 0x714780
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
int32_t ecx = arg2
void* esi = arg1[0xd]

if (esi == ecx)
    return 

if (ecx != 0)
    if (esi == 0)
        int32_t i = 0
        
        if (arg1[4] s> 0)
            do
                int32_t* edi_2 = *(arg1[5] + (i << 2))
                char* eax_10 = *(*edi_2 + 0xc)
                
                if (eax_10 != 0)
                    int32_t eax_11 = sub_752840(eax_10, i, ecx, eax_10)
                    ecx = arg2
                    
                    if (eax_11 != 0 && eax_11 != edi_2[7])
                        edi_2[7] = eax_11
                        edi_2[0xb] = *(*(edi_2[1] + 4) + 0x48)
                        edi_2[9] = 0
                
                i += 1
            while (i s< arg1[4])
    else
        int32_t* i_1 = *(esi + 0x14)
        
        if (i_1 != 0)
            do
                int32_t edx = *i_1
                void* edi_1 = *(arg1[5] + (edx << 2))
                int32_t eax_2 = *(edi_1 + 0x1c)
                
                if (eax_2 == i_1[2])
                    int32_t eax_3 = sub_752840(eax_2, edx, ecx, i_1[1])
                    ecx = arg2
                    
                    if (eax_3 != 0 && eax_3 != *(edi_1 + 0x1c))
                        *(edi_1 + 0x1c) = eax_3
                        *(edi_1 + 0x2c) = *(*(*(edi_1 + 4) + 4) + 0x48)
                        *(edi_1 + 0x24) = 0
                
                i_1 = i_1[3]
            while (i_1 != 0)
            
            arg1[0xd] = ecx
            sub_714370(arg1)
            return 

arg1[0xd] = ecx
sub_714370(arg1)
