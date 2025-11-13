// 函数: sub_4c3620
// 地址: 0x4c3620
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebx = data_cc8d5c

if (ebx == 0)
    int32_t eax
    sub_63b870(eax, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*(ebx + 0x5068) == 2)
    return sub_4c5930(*(ebx + 0x506c))

char var_5 = 0
void* eax_2 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))

if (*(ebx + 0x506c) == *(eax_2 + 0x42c4))
    var_5 = 1
    *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x42c4) = 0

void* eax_4 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))

if (*(ebx + 0x506c) == *(eax_4 + 0x42c0))
    var_5 = 1
    *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x42c0) = 0

for (int32_t i = 0; i s< 0x78; i += 0xc)
    void* eax_6 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    
    if (*(ebx + 0x506c) == *(i + eax_6 + 0x3544))
        var_5 = 1
        *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + i + 0x3544) = 0

void* eax_8 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
int32_t i_1 = 0
int32_t* result = *(eax_8 + 0x720c)
int32_t* j

do
    j = *result
    
    if (j != 0)
        do
            int32_t* j_1 = j
            void* edi_1 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x720c
            int32_t* j_2 = j[2]
            
            if (j_2 == 0)
                int32_t edx_1 = *(edi_1 + 4)
                int32_t eax_14 = ((*j s>> 4 | *j) & edx_1) + 1
                
                if (eax_14 u<= edx_1)
                    int32_t** ecx_21 = *edi_1 + (eax_14 << 2)
                    
                    do
                        j = *ecx_21
                        
                        if (j != 0)
                            goto label_4c37a3
                        
                        eax_14 += 1
                        ecx_21 = &ecx_21[1]
                    while (eax_14 u<= edx_1)
                
                j = nullptr
            else
                j = j_2
            
        label_4c37a3:
            result = j_1[1]
            
            if (result == *(ebx + 0x506c))
                sub_4bb2f0(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x720c, j_1)
                data_cc8dc8
                return sub_4d8ad0(j)
        while (j != 0)
        
        break
    
    i_1 += 1
    result = &result[1]
while (i_1 u<= *(eax_8 + 0x7210))

if (var_5 == 0)
    return result

data_cc8dc8
return sub_4d8ad0(j)
