// 函数: sub_694da0
// 地址: 0x694da0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
void* esi_1 = arg2
char** edx = arg3
int32_t edi
int32_t var_28 = edi
int32_t* esp_1 = &var_28
void* var_18 = esi_1
char** var_1c = edx
uint32_t result = *(esi_1 + 0x10) - 1

if (result u> 0x10 && *(esi_1 + 8) != 0)
    int32_t edi_1 = 0
    
    while (true)
        int32_t edi_2 = edi_1 + 1
        int32_t* esi_2 = *(esi_1 + 4) + edi_1 * 0x3c
        void* ecx_3 = esi_2[3]
        
        if (edi_2 s>= *(esp_1[4] + 8))
            edi_2 = 0xffffffff
        
        esp_1[7] = edi_2
        int32_t edi_3 = *(ecx_3 + 0x10)
        
        if (edi_3 == 0xf)
            result = *esi_2
            void* ecx_4 = *(result + edx)
            
            if (ecx_4 == 0)
                goto label_694fa9
            
            int32_t edx_3 = *(arg5 + 4) + *arg5 + result
            char* eax_3 = *(ecx_4 + 0x20)
            char* const ecx_5 = &data_801800
            *(esp_1 - 4) = arg5
            
            if (eax_3 != 0)
                ecx_5 = eax_3
            
            result = sub_694890(eax_3, edx_3, ecx_5)
            goto label_694fa5
        
        result = sub_69c520(ecx_3)
        
        if (result.b == 0)
            goto label_694fa5
        
        if (edi_3 == 5)
            void* eax_4 = esi_2[4]
            char** edi_4 = esp_1[3]
            *(esp_1 - 4) = arg5
            *(esp_1 - 8) = *(eax_4 + edi_4)
            *(esp_1 - 0xc) = arg4
            result = sub_694aa0(eax_4, esi_2, edi_4)
            edx = edi_4
            goto label_694fa9
        
        if (edi_3 == 0x11)
            sub_694a70()
            noreturn
        
        if (edi_3 != 6)
            if (edi_3 == 8)
                char** eax_6 = *esi_2
                char* const ecx_9 = &data_801800
                int32_t edx_6 = esp_1[3]
                bool cond:2_1 = (esi_2[0xa].b & 0x10) == 0
                *(esp_1 - 4) = arg5
                
                if (cond:2_1)
                    ecx_9 = *(eax_6 + edx_6)
                
                result = sub_694890(eax_6, *(arg5 + 4) + *arg5 + eax_6, ecx_9)
                goto label_694fa5
            
            if (edi_3 == 0xb)
                int32_t eax_7 = *esi_2
                char** edi_6 = esp_1[3]
                *(esp_1 - 4) = arg5
                int32_t ecx_10
                ecx_10.b = *(edi_6 + eax_7) != 0
                *(esp_1 - 8) = ecx_10
                *(esp_1 - 0xc) = 0
                result = sub_694aa0(eax_7, esi_2, edi_6)
                edx = edi_6
                goto label_694fa9
            
            if (edi_3 == 9)
                int32_t ecx_12 = esp_1[3]
                *(esp_1 - 4) = arg5
                *(esp_1 - 8) = arg4
                result = sub_694be0(result, esi_2, ecx_12)
                esp_1 = esp_1
                goto label_694fa5
            
            char const* const ecx_17
            void* esp_21
            
            if (edi_3 == 0xc)
                int32_t* eax_8 = *esi_2
                char* const ecx_13 = &data_801800
                char** edi_7 = esp_1[3]
                bool cond:3_1 = (esi_2[0xa].b & 0x10) == 0
                void* edx_12 = *(arg5 + 4)
                *(esp_1 - 4) = arg5
                
                if (cond:3_1)
                    ecx_13 = *(eax_8 + edi_7)
                
                sub_694890(eax_8, edx_12 + eax_8 + *arg5, ecx_13)
                char* ecx_14 = *(edi_7 + *esi_2)
                result = esi_2[4]
                int32_t esi_3 = *(edi_7 + result)
                
                if (ecx_14 == 0)
                    *(esp_1 - 4) = "DefBinSerializeHashedName"
                    *(esp_1 - 8) = 0x250
                    esp_21 = esp_1 - 8
                    ecx_17 = "pString"
                    goto label_694ff3
                
                result = sub_69c4d0(ecx_14, 0)
                
                if (result != esi_3)
                    *(esp_1 - 4) = "DefBinSerializeHashedName"
                    *(esp_1 - 8) = 0x251
                    esp_21 = esp_1 - 8
                    ecx_17 = "strcrc32(pString) == hash"
                    goto label_694ff3
                
                edx = edi_7
                goto label_694fa9
            
            result = *(esi_2[3] + 0x10) - 1
            
            if (result u<= 0x10)
                *(esp_1 - 4) = "DefBinSerializeBlock"
                *(esp_1 - 8) = 0x28e
                esp_21 = esp_1 - 8
                ecx_17 = "!DefTypeIsBuiltIn(pField->pDefMap)"
            label_694ff3:
                *(esp_21 - 4) = "C:\x\ax2017\Engine\DefBin.cpp"
                sub_63b870(result, &data_801800, ecx_17)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            int32_t eax_11 = *esi_2
            esp_1[5] = esp_1[3] + eax_11
            int32_t edx_17 = *(arg5 + 4)
            esp_1[6] = edx_17
            *(arg5 + 4) = eax_11 + edx_17
            int32_t eax_13 = arg4
            
            if (arg4 == 0 && (edi_3 == 0x13 || edi_3 == 0x14))
                eax_13 = esi_2[7]
            
            *(esp_1 - 4) = arg5
            esp_1[5]
            *(esp_1 - 8) = eax_13
            sub_694da0()
            void* esp_14 = esp_1
            result = *(esp_14 + 0x20)
            *(arg5 + 4) = result
            esp_1 = esp_14 + 8
            goto label_694fa5
        
        int32_t edi_5 = *(arg5 + 4)
        int32_t ecx_7 = *esi_2
        int32_t edx_5 = esi_2[7]
        *(esp_1 - 4) = arg5
        *(esp_1 - 8) = 0
        int32_t eax_5 = ecx_7 + edi_5
        int32_t ecx_8 = ecx_7 + esp_1[3]
        *(esp_1 - 0xc) = esi_2
        *(arg5 + 4) = eax_5
        result = sub_694950(eax_5, edx_5, ecx_8)
        *(arg5 + 4) = edi_5
    label_694fa5:
        edx = esp_1[3]
    label_694fa9:
        edi_1 = esp_1[7]
        
        if (edi_1 == 0xffffffff)
            break
        
        esi_1 = esp_1[4]

*esp_1
esp_1[1]
esp_1[2]
return result
