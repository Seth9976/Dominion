// 函数: sub_569330
// 地址: 0x569330
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t result = arg2
uint32_t result_1 = result
int32_t ecx = arg3[0x320]

if (ecx != 0)
    if (ecx == 1)
        int32_t i = 0
        
        do
            sub_5695c0(result, result, arg3[i], 0xb)
            result = result_1
            i += 1
        while (i s< arg3[0x320])
    
    uint32_t edi_2 = zx.d((*arg3).w)
    int32_t eax_1 = *(sub_573400() + 4)
    
    if (edi_2 u>= 0x320)
        sub_591930()
    
    int32_t eax_3 = *(edi_2 * 0x64 + eax_1 + 0x1a4c)
    int32_t ecx_3 = arg3[0x320]
    result = 1
    uint32_t result_2 = 1
    
    if (ecx_3 s<= 1)
    label_5693fd:
        int32_t i_1 = 0
        
        if (ecx_3 s> 0)
            do
                result = sub_5695c0(result, result_1, arg3[i_1], 0xb)
                i_1 += 1
            while (i_1 s< arg3[0x320])
    else
        while (true)
            uint32_t edi_4 = zx.d((arg3[result]).w)
            int32_t eax_5 = *(sub_573400() + 4)
            
            if (edi_4 u>= 0x320)
                sub_591930()
            
            if (*(edi_4 * 0x64 + eax_5 + 0x1a4c) != eax_3)
                if (result_1 != 0x3ee)
                    sub_566140(result_1, result_1, arg3, 0x3ee, nullptr, 0, 0xb, nullptr, nullptr)
                
                int64_t var_6c
                __builtin_memset(&var_6c, 0, 0x2c)
                int128_t var_40 = arg4.o
                int32_t var_60
                int128_t var_30_1 = var_60.o
                int64_t var_50
                int128_t var_20_1 = var_50.o
                result = sub_563d00(arg4, &var_40, arg3, 0x38)
                int32_t i_2 = 0
                
                if (arg3[0x320] s<= 0)
                    break
                
                do
                    result = sub_5695c0(result, 0x3ee, arg3[i_2], 0xb)
                    i_2 += 1
                while (i_2 s< arg3[0x320])
                
                return result
            
            ecx_3 = arg3[0x320]
            result = result_2 + 1
            result_2 = result
            
            if (result s>= ecx_3)
                goto label_5693fd

return result
