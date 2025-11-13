// 函数: sub_6ce150
// 地址: 0x6ce150
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
int32_t* result = __security_cookie ^ &__saved_ebp
int32_t* result_2 = result
int32_t* edi = arg1
int32_t* var_2c = edi
edi[0x17] += 1
int32_t* ecx = *edi
edi[0x11f] = 0

if (ecx != 0)
    if (ecx[1] != 0x20)
        sub_63b870(result, &data_801800, "ptr->assetType == ASSET_TYPE_FAB", 
            "C:\x\ax2017\Engine\FabDef.cpp", 0xeb, "FabDefGet")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = sub_5af880(ecx)
    int32_t* result_3 = result
    int32_t i = 0
    int32_t* result_4 = result_3
    int32_t i_1 = 0
    
    if (result_3[2] s> 0)
        result = nullptr
        int32_t* result_1 = nullptr
        
        do
            void* ebx_2 = *result_3 + result
            void* eax_1 = sub_6cde00(edi, i)
            int32_t ecx_2 = *ebx_2
            void* edx_2 = eax_1
            void* var_20_1 = edx_2
            
            if (ecx_2 == 2)
                int32_t eax_6 = sub_6d11b0(edi[0x133], i)
                void* edx_4
                edx_4.b = *(var_20_1 + 0x4c8)
                sub_69aaa0(eax_6, edx_4.b)
            else if (ecx_2 == 5)
                int32_t eax_2
                int64_t xmm0_1
                
                if (*(edx_2 + 0x6c) s<= *(edx_2 + 0x5c))
                    xmm0_1 = *(ebx_2 + 0x94)
                    eax_2 = *(ebx_2 + 0x9c)
                else
                    xmm0_1 = *(edx_2 + 0x70)
                    eax_2 = *(edx_2 + 0x78)
                
                int32_t j = 0
                int32_t var_18_1 = eax_2
                int32_t j_1 = 0
                
                if (xmm0_1.d s> 0)
                    int32_t esi_1 = xmm0_1:4.d
                    
                    do
                        int32_t edi_1 = 0
                        
                        if (esi_1 s> 0)
                            do
                                int32_t esi_2 = 0
                                
                                if (eax_2 s> 0)
                                    do
                                        int32_t* eax_3 = *(ebx_2 + 0xa8)
                                        int32_t j_2 = j
                                        int32_t var_10_1 = edi_1
                                        int32_t var_c_1 = esi_2
                                        
                                        if (*eax_3 != 0)
                                            sub_6cded0(&j_2, edx_2, ebx_2, &j_2)
                                            sub_6ce150()
                                            j = j_1
                                            edx_2 = var_20_1
                                        
                                        eax_2 = var_18_1
                                        esi_2 += 1
                                    while (esi_2 s< eax_2)
                                
                                esi_1 = xmm0_1:4.d
                                edi_1 += 1
                            while (edi_1 s< esi_1)
                        
                        j += 1
                        j_1 = j
                    while (j s< xmm0_1.d)
                    
                    i = i_1
                    edi = var_2c
            
            result_3 = result_4
            i += 1
            result = &result_1[0x38]
            i_1 = i
            result_1 = result
        while (i s< result_3[2])

CookieCheckFunction(result)
return result
