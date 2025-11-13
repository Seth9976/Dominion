// 函数: sub_627110
// 地址: 0x627110
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = data_cc8d5c
*arg2 = 0
*arg4 = 0

if (ecx == 0)
    sub_63b870(arg1, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* var_10
sub_4bad70(ecx + 0x507c, &var_10)
int32_t* i_1
int32_t* i = i_1

if (i != 0xffffffff)
    int32_t esi_1 = *(arg3 + 0x12f8)
    
    do
        if (*i == esi_1)
            int32_t j = 0
            *arg4 = i[0x46a]
            
            if (i[0x46a] s> 0)
                void* edx = &i[0x1a]
                
                do
                    if (*(edx - 0xc) == 1)
                        int32_t eax_3 = *edx - 1
                        
                        if (eax_3 u> 3)
                            return 3
                        
                        switch (eax_3)
                            case 1, 2, 3
                                *arg2 += 1
                    else
                        *arg4 -= 1
                    
                    j += 1
                    edx += 0x22c
                while (j s< i[0x46a])
            
            uint32_t eax_5 = zx.d((i[8]).b) & 0x10
            int32_t eax_6 = neg.d(eax_5)
            return sbb.d(eax_6, eax_6, eax_5 != 0) + 2
        
        sub_4baf10(var_10, &i_1)
        i = i_1
    while (i != 0xffffffff)

return 0
