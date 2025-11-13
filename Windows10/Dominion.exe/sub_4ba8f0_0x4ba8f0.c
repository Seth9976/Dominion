// 函数: sub_4ba8f0
// 地址: 0x4ba8f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* result = data_cc8d68

if (result != 0)
    int32_t i = 0
    int32_t* edx_1 = *(result + 0xc)
    int32_t var_20
    
    do
        int32_t* j = *edx_1
        
        if (j != 0)
            do
                int32_t* j_1 = j[6]
                int32_t* j_2 = j
                
                if (j_1 == 0)
                    int32_t edi_2 = *(result + 0x10)
                    int32_t ecx_5 = ((*j s>> 4 | *j) & edi_2) + 1
                    
                    if (ecx_5 u> edi_2)
                    label_4ba962:
                        j = nullptr
                    else
                        int32_t** edx_3 = *(result + 0xc) + (ecx_5 << 2)
                        
                        while (true)
                            j = *edx_3
                            
                            if (j != 0)
                                break
                            
                            ecx_5 += 1
                            edx_3 = &edx_3[1]
                            
                            if (ecx_5 u> edi_2)
                                goto label_4ba962
                else
                    j = j_1
                
                if ((j_2[2] | j_2[3]) == 0)
                    int32_t ecx_8 = j_2[5]
                    var_20 = *j_2
                    int32_t var_14_1 = ecx_8
                    int32_t var_18_1 = j_2[4]
                    sub_4bb950(&var_20)
                    result = data_cc8d68
            while (j != 0)
            
            break
        
        i += 1
        edx_1 = &edx_1[1]
    while (i u<= *(result + 0x10))
    
    int32_t ecx_10 = *(result + 0x18)
    int32_t var_1c_1 = *(result + 0x1c)
    result = data_cc8d5c
    var_20 = ecx_10
    
    if (result == 0)
        sub_63b870(result, &data_801800, "gClient", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (*(result + 0x18) == 3)
        result = *(result + 0x14)
        void* ecx_11 = data_147abf4
        
        if (result != 0)
            uint32_t edx_4 = zx.d(result.w)
            
            if (edx_4 u< *(ecx_11 + 4))
                void* esi_2 = edx_4 * 0x64 + *ecx_11
                
                if (*(esi_2 + 0x60) == result && esi_2 != 0)
                    int32_t var_34_1 = 0xf42d0
                    sub_689e00(result, 8, esi_2 + 0x50)
                    result = sub_689be0(&var_20, 8, esi_2 + 0x50, &var_20)

CookieCheckFunction(result)
return result
