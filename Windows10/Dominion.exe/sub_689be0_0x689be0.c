// 函数: sub_689be0
// 地址: 0x689be0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result_1 = arg2
void* result = result_1
char const* const var_2c_1
int32_t var_28_1
char const* const var_24_1
char* ecx

if (result_1 s> 0)
    result_1 = &arg3[1]
    int32_t* result_2 = result_1
    int32_t* result_4
    
    if (arg3[2] != 0)
        int32_t* ecx_2 = *result_1
        void* result_3 = result_1
        
        if (ecx_2 != 0)
            void* ecx_3 = *ecx_2
            result_4 = result_3
            result_2 = result_4
            result_1 = 0xfde8 - *(ecx_3 + 0xfdec) - *(ecx_3 + 0xfde8)
            
            if (result_1 s< 1)
                void* var_14 = sub_688f10()
                result_1 = sub_68b830(arg3, &var_14)
                result_4 = result_3
                result_2 = result_4
            
            goto label_689c72
    else
        void* var_10 = sub_688f10()
        result_1 = sub_68b830(arg3, &var_10)
        result_4 = &arg3[1]
    label_689c72:
        int32_t* ecx_5 = *result_4
        
        if (ecx_5 != 0)
            uint32_t count
            void* ecx_8
            void* edi_1
            
            while (true)
                edi_1 = *ecx_5
                int32_t eax_3 = *(edi_1 + 0xfde8)
                void* ecx_6 = *(edi_1 + 0xfdec)
                void* count_1 = 0xfde8 - eax_3 - ecx_6
                count = result
                ecx_8 = ecx_6 + eax_3 + edi_1
                
                if (count_1 s>= count)
                    break
                
                if (count_1 s> 0)
                    memcpy(ecx_8, arg4, count_1)
                    *(edi_1 + 0xfdec) += count_1
                    arg4 += count_1
                    result -= count_1
                
                void* eax_4 = sub_688f10()
                int32_t* eax_5 = sub_64bfd0(0xc)
                eax_5[3] += 1
                
                if (*eax_5 == 0)
                    sub_64be70(eax_5)
                
                ecx_5 = *eax_5
                *eax_5 = *ecx_5
                ecx_5[2] = 0
                *ecx_5 = eax_4
                ecx_5[1] = 0
                ecx_5[2] = *result_2
                void* eax_8 = *result_2
                
                if (eax_8 == 0)
                    arg3[2] += 1
                    *arg3 = ecx_5
                    *result_2 = ecx_5
                else
                    *(eax_8 + 4) = ecx_5
                    arg3[2] += 1
                    *result_2 = ecx_5
            
            memcpy(ecx_8, arg4, count)
            *(edi_1 + 0xfdec) += result
            return result
    var_24_1 = "XList<struct NetBuffer *>::GetTail"
    var_28_1 = 0x5a
    ecx = "mpTail != NULL"
    var_2c_1 = "C:\x\ax2017\Engine\xList.h"
else
    var_24_1 = "NetBufferListAppendData"
    var_28_1 = 0x24c
    var_2c_1 = "C:\x\ax2017\Engine\Network.cpp"
    ecx = "length > 0"

sub_63b870(result_1, &data_801800, ecx, var_2c_1, var_28_1, var_24_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
