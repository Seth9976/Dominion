// 函数: sub_68abb0
// 地址: 0x68abb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_1 = arg1 + 0x48
int32_t* var_8 = eax_1
char const* const var_30_2
int32_t var_2c_2
char const* const var_28_4
char* ecx_8
int32_t* edx_1

if (*(arg1 + 0x4c) != 0)
    void** ecx_1 = *eax_1
    void* esi_1 = eax_1
    
    if (ecx_1 != 0)
        void* ecx_2 = *ecx_1
        edx_1 = esi_1
        var_8 = edx_1
        eax_1 = 0xfde8 - *(ecx_2 + 0xfdec) - *(ecx_2 + 0xfde8)
        
        if (eax_1 s< 1)
            void* var_14 = sub_688f10()
            eax_1 = sub_68b830(arg1 + 0x44, &var_14)
            edx_1 = esi_1
            var_8 = edx_1
        
        goto label_68ac26
else
    void* var_10 = sub_688f10()
    eax_1 = sub_68b830(arg1 + 0x44, &var_10)
    edx_1 = arg1 + 0x48
label_68ac26:
    void** ecx_4 = *edx_1
    
    if (ecx_4 != 0)
        while (true)
            void* ebx_1 = *ecx_4
            int128_t* ecx_5 = arg1
            int32_t esi_3 = 0xfde8 - *(ebx_1 + 0xfde8) - *(ebx_1 + 0xfdec)
            eax_1 = *(ecx_5 + 0x24)
            
            if (eax_1 != 3 && eax_1 != 4)
                eax_1 = (*(*data_147abf8 + 0x30))(arg1[2].d, 
                    *(ebx_1 + 0xfdec) + *(ebx_1 + 0xfde8) + ebx_1, esi_3)
                
                if (eax_1 == 0xffffffff)
                    return sub_689230(arg1)
                
                if (eax_1 != 0)
                    if (eax_1 s<= 0)
                        var_28_4 = "NetLocTCPReceive"
                        var_2c_2 = 0x4fc
                        var_30_2 = "C:\x\ax2017\Engine\Network.cpp"
                        ecx_8 = "len > 0"
                        goto label_68ad9d
                    
                    *(ebx_1 + 0xfdec) += eax_1
                    
                    if (eax_1 s>= esi_3)
                        void* eax_9 = sub_688f10()
                        int32_t* eax_10 = sub_64bfd0(0xc)
                        eax_10[3] += 1
                        
                        if (*eax_10 == 0)
                            sub_64be70(eax_10)
                        
                        ecx_4 = *eax_10
                        edx_1 = var_8
                        *eax_10 = *ecx_4
                        ecx_4[2] = 0
                        *ecx_4 = eax_9
                        ecx_4[1] = 0
                        ecx_4[2] = *edx_1
                        void* eax_13 = *edx_1
                        
                        if (eax_13 == 0)
                            *(arg1 + 0x4c) += 1
                            *(arg1 + 0x44) = ecx_4
                            *edx_1 = ecx_4
                            continue
                        else
                            *(eax_13 + 4) = ecx_4
                            *(arg1 + 0x4c) += 1
                            *edx_1 = ecx_4
                            continue
                
                ecx_5 = arg1
                edx_1 = var_8
            else if (ecx_5[4].d == 0)
                return sub_689230(ecx_5)
            
            int32_t* ecx_9 = *(ecx_5 + 0x48)
            
            if (ecx_9 == 0)
                break
            
            void* result = *ecx_9
            
            if (*(result + 0xfdec) != 0)
                return result
            
            void* eax_14 = ecx_9[2]
            *edx_1 = eax_14
            
            if (eax_14 == 0)
                *(arg1 + 0x44) = nullptr
            else
                *(eax_14 + 4) = 0
            
            int32_t esi_5 = *ecx_9
            *(arg1 + 0x4c) -= 1
            sub_64c080(ecx_9, 0xc)
            void* ecx_10 = data_147abf4
            int32_t var_18 = esi_5
            return sub_68b830(ecx_10 + 0x44, &var_18)
var_28_4 = "XList<struct NetBuffer *>::GetTail"
var_2c_2 = 0x5a
ecx_8 = "mpTail != NULL"
var_30_2 = "C:\x\ax2017\Engine\xList.h"
label_68ad9d:
sub_63b870(eax_1, &data_801800, ecx_8, var_30_2, var_2c_2, var_28_4)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
