// 函数: sub_4febe0
// 地址: 0x4febe0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_78 = arg1
void* eax = sub_573400()
int32_t* edi_1

if (arg1 == 0)
label_4fec22:
    edi_1 = nullptr
else
    edi_1 = 7
    int32_t* eax_2 = *(eax + 4) + 0x1594
    
    while (*eax_2 != arg1)
        if (eax_2[1] == arg1)
            break
        
        edi_1 += 1
        eax_2 = &eax_2[4]
        
        if (edi_1 s>= 0x48)
            goto label_4fec22

void* result = sub_4fe8d0(edi_1)

if (result.b != 0)
    result = *(eax + 4)
    
    if (arg1 != 0)
        int32_t ecx_1 = 7
        result += 0x1594
        
        while (true)
            if (*result != arg1 && *(result + 4) != arg1)
                ecx_1 += 1
                result += 0x10
                
                if (ecx_1 s>= 0x48)
                    break
                
                continue
            
            if (ecx_1 == 0)
                break
            
            uint32_t eax_4 = arg1 - 0x1019
            
            if (eax_4 u> 0x19)
            label_4feddf:
                sub_63b870(eax_4, &data_801800, "Halt", 
                    "C:\x\ax2017\Jams\Dominion\code\DomCards_Allies.cpp", 0x89, "MayRotatePile")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            eax_4 = zx.d(lookup_table_4fee10[eax_4])
            int32_t eax_5
            
            switch (eax_4)
                case 0
                    eax_5 = 0xee
                case 1
                    eax_5 = 0xf0
                case 2
                    eax_5 = 0xf1
                case 3
                    eax_5 = 0xf2
                case 4
                    eax_5 = 0xf3
                case 5
                    goto label_4feddf
            
            int32_t var_80 = eax_5
            int128_t var_40
            int32_t var_70
            
            if (arg1 != 0x1032)
                uint32_t eax_6 = sub_56b800()
                void* eax_7
                int32_t ecx_2
                eax_7, ecx_2 = sub_573400()
                int32_t var_94_1 = 0
                int32_t var_98_1 = *(eax_7 + 0x2c)
                int32_t* eax_8 = sub_591880(&var_70, var_80, ecx_2, eax_6, *(eax_7 + 0x28))
                var_40 = *eax_8
                int128_t var_30_2 = *(eax_8 + 0x10)
                int128_t var_20_2 = *(eax_8 + 0x20)
            else
                int64_t var_6c
                __builtin_memset(&var_6c, 0, 0x2c)
                var_70 = eax_5
                var_40 = var_70.o
                int32_t var_60
                int128_t var_30_1 = var_60.o
                int64_t var_50
                int128_t var_20_1 = var_50.o
            int32_t* eax_9 = sub_573400()
            var_80 = *eax_9
            int32_t var_7c_1 = eax_9[4]
            int32_t ecx_5 = eax_9[3]
            int32_t* eax_10 = eax_9[1]
            int32_t edx_1
            
            if (ecx_5 != eax_10[0x673])
                edx_1 = ecx_5
            else
                edx_1 = eax_10[0x674]
            
            int32_t var_94_2 = ecx_5
            int32_t var_98_2 = 0x29
            result = sub_623b70(eax_10, &var_80, eax_10, 8, ecx_5, edx_1, &var_78, 1, ecx_5, 
                nullptr, &var_40)
            
            if (result == 0 || var_78 == 0)
                break
            
            sub_5937c0(eax, *(eax + 0xc), *(eax + 4), edi_1)
            return sub_56e9c0(3)

return result
