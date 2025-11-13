// 函数: sub_65bdd0
// 地址: 0x65bdd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = 0
int32_t result = 0x3e8

if (arg2 s> 0)
    int32_t* edi_1 = arg1 + 0x10
    
    do
        result = sub_69c4d0(*(edi_1[-4] + 8), result)
        void* ecx_2 = &edi_1[-2]
        int32_t i_4 = 4
        int32_t i
        
        do
            char eax_2 = *ecx_2
            ecx_2 += 1
            result = result u>> 8 ^ *(((zx.d(eax_2) ^ zx.d(result.b)) << 2) + &data_7ffd70)
            i = i_4
            i_4 -= 1
        while (i != 1)
        void* ecx_3 = &edi_1[1]
        int32_t i_5 = 4
        int32_t i_1
        
        do
            char eax_5 = *ecx_3
            ecx_3 += 1
            result = result u>> 8 ^ *(((zx.d(eax_5) ^ zx.d(result.b)) << 2) + &data_7ffd70)
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
        void* ecx_4 = &edi_1[-3]
        int32_t i_6 = 4
        int32_t i_2
        
        do
            char eax_8 = *ecx_4
            ecx_4 += 1
            result = result u>> 8 ^ *(((zx.d(eax_8) ^ zx.d(result.b)) << 2) + &data_7ffd70)
            i_2 = i_6
            i_6 -= 1
        while (i_2 != 1)
        int32_t eax_11 = edi_1[-2]
        
        if (eax_11 != 0)
            if (eax_11 == 3)
                int32_t eax_15 = edi_1[-1]
                
                if (eax_15 == 0)
                    sub_63b870(eax_15, &data_801800, "base", "C:\x\ax2017\Engine\UI2.cpp", 0x684, 
                        "StringLinear::GetString")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                result = sub_69c4d0(*edi_1 + *eax_15, result)
            else
                void* ecx_5 = &edi_1[2]
                int32_t i_7 = 4
                int32_t i_3
                
                do
                    char eax_12 = *ecx_5
                    ecx_5 += 1
                    result = result u>> 8 ^ *(((zx.d(eax_12) ^ zx.d(result.b)) << 2) + &data_7ffd70)
                    i_3 = i_7
                    i_7 -= 1
                while (i_3 != 1)
        
        ebx += 1
        edi_1 = &edi_1[7]
    while (ebx s< arg2)

return result
