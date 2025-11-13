// 函数: sub_4c7d90
// 地址: 0x4c7d90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebx = data_cc8d5c
int32_t* esi = arg2
int32_t* var_1c = esi
int32_t* edi = arg5
*esi = 0
*edi = 0

if (ebx != 0)
    int32_t* var_10
    arg1 = sub_4bad70(&ebx[0x141f], &var_10)
    void* var_c
    void* ecx_1 = var_c
    
    if (ecx_1 == 0xffffffff)
    label_4c7e9b:
        int32_t eax_6 = *edi << 2 s>> 2
        sub_4d4e30(eax_6, &arg4[*edi], arg4, eax_6, sub_4c7cc0)
        return sub_4d4e30(arg3, &arg3[*esi], arg3, *esi << 2 s>> 2, sub_4c7cc0)
    
    while (true)
        if (*(ecx_1 + 0x1300) == 0)
            int32_t eax_2 = *(ecx_1 + 0x1328)
            void* esi_1 = ecx_1 + 0x60
            int32_t edi_1 = 0
            
            while (true)
                if (*(esi_1 - 4) == 1)
                    void* eax_3 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                    
                    if (*esi_1 == *(eax_3 + 0x4250))
                        esi = var_1c
                        edi = arg5
                        int32_t eax_11 = *esi
                        
                        if (eax_11 s< 0x40)
                            arg3[eax_11] = eax_2
                            *esi += 1
                        
                        break
                
                edi_1 += 1
                esi_1 += 0x22c
                
                if (edi_1 s>= 8)
                    edi = arg5
                    esi = var_1c
                    int32_t eax_4 = *edi
                    
                    if (eax_4 s< 0x20)
                        arg4[eax_4] = eax_2
                        *edi += 1
                    
                    break
        else
            if (ebx == 0)
                break
            
            int32_t edx = *(ecx_1 + 0x1308)
            int32_t eax_1 = adc.d(*(ecx_1 + 0x130c), 0, edx u>= 0xfffff448)
            int32_t temp1_1 = ebx[1]
            
            if (eax_1 s<= temp1_1 && (eax_1 s< temp1_1 || edx + 0xbb8 u< *ebx))
                sub_4d61a0(ecx_1)
                ebx = data_cc8d5c
        
        arg1 = sub_4baf10(var_10, &var_c)
        ecx_1 = var_c
        
        if (ecx_1 == 0xffffffff)
            goto label_4c7e9b

sub_63b870(arg1, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, 
    "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
