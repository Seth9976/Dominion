// 函数: sub_666850
// 地址: 0x666850
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = data_c27c24
data_c27c18 = 0
data_c27c1c = 0

if (ecx != 0)
    uint32_t edi_1 = sub_64e7a0(ecx)
    int32_t esi_1 = 0
    int32_t ebx_1 = *(edi_1 + 0x189c)
    
    if (ebx_1 != 0)
        do
            uint32_t eax = sub_64e7a0(*(edi_1 + (esi_1 << 2) + 0x179c))
            sub_665d10(eax, &data_c23c18, eax, &data_c27c18, 0)
            esi_1 += 1
        while (esi_1 != ebx_1)

uint32_t result
result.b = 0
int32_t var_c = 0
int32_t ebx_2 = 0xffffffff
uint32_t result_1 = 0

if (data_c27c18 s> 0)
    void* edi_2 = &data_c23c24
    
    while (true)
        int32_t esi_2 = *(edi_2 - 8)
        char ecx_3 = 0
        void* edx_1 = *(edi_2 - 0xc)
        
        if (esi_2 != ebx_2)
            ecx_3 = result.b
        
        uint32_t eax_1
        eax_1.b = ecx_3
        *edi_2 = 0
        *(edi_2 - 4) = 0xffffffff
        char var_5_1 = eax_1.b
        
        if (eax_1.b == 0 || esi_2 s<= ebx_2)
            var_5_1 = eax_1.b
            
            if (ecx_3 == 1)
                ebx_2 = 0xffffffff
                var_5_1 = 0
            label_666934:
                
                if (*(edx_1 + 0x13) != 0)
                    var_5_1 = 1
                    ebx_2 = esi_2
                    *edi_2 = 1
            else if (eax_1.b == 0)
                goto label_666934
            
            *(edi_2 - 4) = var_c
            data_c27c1c += 1
            var_c += 1
            goto label_666956
        
        int32_t var_2c
        char const* const var_28
        char* ecx_4
        
        if (ebx_2 == 0xffffffff)
            var_28 = "UI2EditorSyncDisplayTree"
            var_2c = 0x3806
            ecx_4 = "miminizedIndent != -1"
        else
            *edi_2 = 2
        label_666956:
            eax_1 = *edi_2
            
            if (eax_1 == 1)
                if (*(edx_1 + 0x13) != 0)
                    goto label_666982
                
                var_28 = "UI2EditorSyncDisplayTree"
                var_2c = 0x3824
                ecx_4 = "ui.minimized"
            else if (eax_1 != 0 || *(edx_1 + 0x13) == eax_1.b)
            label_666982:
                int32_t* eax_4 = sub_64cc90(edx_1)
                int32_t ecx_6 = 0
                int32_t edx_2 = *eax_4
                
                if (edx_2 s<= 0)
                    goto label_6669c8
                
                void* esi_3 = eax_4[2]
                
                while (*esi_3 != 0x6f)
                    ecx_6 += 1
                    esi_3 += 0x10
                    
                    if (ecx_6 s>= edx_2)
                        goto label_6669c8
                
                if (esi_3 == 0)
                    goto label_6669c8
                
                eax_1 = sub_6dd320(&data_8cae70, 0x6f)
                
                if (*(eax_1 + 0x10) != 8)
                    var_28 = "AttribAsString"
                    var_2c = 0xc6b
                    ecx_4 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_STRING"
                else
                    sub_666610(edx_1, *(esi_3 + 8))
                label_6669c8:
                    edi_2 += 0x10
                    result = result_1 + 1
                    result_1 = result
                    
                    if (result s>= data_c27c18)
                        break
                    
                    result.b = var_5_1
                    continue
            else
                var_28 = "UI2EditorSyncDisplayTree"
                var_2c = 0x3829
                ecx_4 = "!ui.minimized"
        
        sub_63b870(eax_1, &data_801800, ecx_4, "C:\x\ax2017\Engine\UI2.cpp", var_2c, var_28)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

return result
