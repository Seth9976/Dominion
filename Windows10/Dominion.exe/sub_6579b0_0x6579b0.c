// 函数: sub_6579b0
// 地址: 0x6579b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*(arg2 + 0x1600) = *(arg3 + 0x1600)
*(arg2 + 0x1604) = *(arg3 + 0x1604)
*(arg2 + 0x1364) = 0
*(arg2 + 0x1368) = 0
uint32_t eax_2 = *(arg3 + 0x15f8)
char const* const var_2c_4
int32_t var_28_1
char const* const var_24
char* ecx_1

if (eax_2 != 0)
    int32_t edx = *(arg2 + 0x15f8)
    
    if (edx == 0 || edx == eax_2)
        *(arg2 + 0x15f8) = eax_2
        sub_63d850(arg2 + 0x15e0, arg3 + 0x15e0)
        void* eax_4 = arg3
        int32_t ecx_3 = *(eax_4 + 0x18a0)
        
        if (ecx_3 != 0)
            uint32_t eax_5 = sub_64e7a0(ecx_3)
            int32_t ecx_4 = *(arg2 + 0x18a0)
            
            if (ecx_4 == 0)
                void* eax_6 = sub_64e660(arg2)
                ecx_4 = *(eax_6 + 0x18c8)
                *(eax_6 + 5) = 1
                *(arg2 + 0x18a0) = ecx_4
            
            uint32_t eax_7 = sub_64e7a0(ecx_4)
            *(eax_7 + 0x16b0) = *(arg2 + 0x16b0)
            int32_t ecx_6
            ecx_6.b = *(arg2 + 0x171c)
            *(eax_7 + 0x171c) = ecx_6.b
            sub_6579b0(eax_5, arg4, 1)
            eax_4 = arg3
        
        int32_t ebx_1 = 0
        void* edi_2 = arg2 + 0x18a4
        int32_t* eax_8 = eax_4 - arg2
        int32_t* var_10_1 = eax_8
        
        while (true)
            int32_t ecx_8 = *(eax_8 + edi_2)
            
            if (ecx_8 != 0)
                uint32_t eax_9 = sub_64e7a0(ecx_8)
                int32_t ecx_9 = *edi_2
                
                if (ecx_9 == 0)
                    void* eax_10 = sub_64e660(arg2)
                    ecx_9 = *(eax_10 + 0x18c8)
                    *(eax_10 + 0x18b8) = 1
                    *edi_2 = ecx_9
                
                uint32_t eax_11 = sub_64e7a0(ecx_9)
                *(eax_11 + 0x16b0) = *(arg2 + 0x16b0)
                int32_t ecx_11
                ecx_11.b = *(arg2 + 0x171c)
                *(eax_11 + 0x171c) = ecx_11.b
                sub_6579b0(eax_9, arg4, 1)
                eax_2 = eax_9
                
                if (*(eax_2 + 0x15f8) != 6)
                    var_24 = "UI2MergeRec"
                    var_28_1 = 0x1dfa
                    ecx_1 = "childTempl.type == UI_GROUP"
                    goto label_657c59_1
                
                eax_2 = eax_11
                
                if (*(eax_2 + 0x15f8) != 6)
                    var_24 = "UI2MergeRec"
                    var_28_1 = 0x1dfb
                    ecx_1 = "child.type == UI_GROUP"
                    goto label_657c59_1
                
                eax_8 = var_10_1
                ebx_1 += 1
                edi_2 += 4
                
                if (ebx_1 s< 5)
                    continue
            
            void* result = arg3
            void* edi_3 = nullptr
            int32_t ecx_13 = *(result + 0x189c)
            
            if (ecx_13 == 0)
                return result
            
            while (true)
                int32_t edx_3 = *(result + (edi_3 << 2) + 0x179c)
                eax_2 = *(result + 0x15f8)
                
                if (eax_2 == 0)
                    var_24 = "UI2MergeRec"
                    var_28_1 = 0x1e02
                    goto label_657c54
                
                if (eax_2 == 2)
                    var_24 = "UI2MergeRec"
                    var_28_1 = 0x1e03
                    ecx_1 = "templ.type != UI_TABLE"
                    goto label_657c59_1
                
                if (edx_3 == 0)
                    var_24 = "DataArray<struct UI2>::DataArrayGet"
                    var_28_1 = 0x6c
                    var_2c_4 = "C:\x\ax2017\Engine\DataArray.h"
                    ecx_1 = "id != DATAID_NULL"
                    break
                
                eax_2 = zx.d(edx_3.w)
                
                if (eax_2 u< data_c23bac)
                    void* ebx_3 = eax_2 * 0x18d0 + data_c23ba8
                    
                    if (*(ebx_3 + 0x18c8) == edx_3)
                        struct _EXCEPTION_REGISTRATION_RECORD** eax_12 = sub_64ece0(arg2, edi_3)
                        eax_12[0x5ac] = *(arg2 + 0x16b0)
                        int32_t ecx_15
                        ecx_15.b = *(arg2 + 0x171c)
                        eax_12[0x5c7].b = ecx_15.b
                        result = sub_6579b0(ebx_3, arg4, 1)
                        edi_3 += 1
                        
                        if (edi_3 == ecx_13)
                            return result
                        
                        result = arg3
                        continue
                
                var_24 = "DataArray<struct UI2>::DataArrayGet"
                var_28_1 = 0x6d
                var_2c_4 = "C:\x\ax2017\Engine\DataArray.h"
                ecx_1 = "DataArrayTryToGet(id) != NULL"
                break
            
            break
    else
        var_24 = "UI2MergeRec"
        var_28_1 = 0x1dca
        ecx_1 = "item.type == UI_NONE || item.type == templ.type"
    label_657c59:
        var_2c_4 = "C:\x\ax2017\Engine\UI2.cpp"
else
    var_24 = "UI2MergeRec"
    var_28_1 = 0x1dc9
label_657c54:
    ecx_1 = "templ.type != UI_NONE"
label_657c59_1:
    var_2c_4 = "C:\x\ax2017\Engine\UI2.cpp"

sub_63b870(eax_2, &data_801800, ecx_1, var_2c_4, var_28_1, var_24)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
