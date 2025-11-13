// 函数: sub_687db0
// 地址: 0x687db0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char const* const var_18
int32_t var_14
char const* const var_10_1
struct _EXCEPTION_REGISTRATION_RECORD** eax

if (data_147abe8 != 0)
    (*(*data_cf65b8 + 0x10))()
    void* esi_1 = data_caf76c
    
    if (esi_1 != 0)
        void* edx_1 = nullptr
        
        while (true)
            if (edx_1 != 0)
                edx_1 += 0x18
            else
                edx_1 = esi_1
            
            void* ecx_2 = esi_1 + data_caf770 * 0x18
            
            if (edx_1 u>= ecx_2)
                break
            
            while (true)
                int32_t eax_4 = *(edx_1 + 0x14)
                
                if ((eax_4 & 0xffff0000) != 0)
                    int32_t ecx_3 = data_caf778
                    data_caf778 = zx.d(eax_4.w)
                    *(edx_1 + 0x14) = ecx_3
                    data_caf77c -= 1
                    esi_1 = data_caf76c
                    break
                
                edx_1 += 0x18
                
                if (edx_1 u>= ecx_2)
                    goto label_687e25
        
    label_687e25:
        data_caf770 = 0
        data_caf778 = 0
        
        if (esi_1 != 0)
            _aligned_free(esi_1)
        
        __builtin_memset(&data_caf76c, 0, 0x14)
        data_caf784 = 0
    
    sub_6e5880()
    sub_6fe070()
    sub_6b7f40()
    eax = sub_6d93f0()
    void* edi_1 = data_147abe8
    
    if (edi_1 != 0)
        int32_t* edi_2 = *(edi_1 + 4)
        int32_t* i_2 = edi_2[1]
        
        if (i_2 != 0)
            int32_t* i
            
            do
                i = *i_2
                _aligned_free(i_2)
                i_2 = i
            while (i != 0)
        
        *edi_2 = 0
        edi_2[1] = 0
        edi_2[3] = 0
        int32_t* i_3 = edi_2[5]
        
        if (i_3 != 0)
            int32_t* i_1
            
            do
                i_1 = *i_3
                _aligned_free(i_3)
                i_3 = i_1
            while (i_1 != 0)
        
        edi_2[4] = 0
        edi_2[5] = 0
        edi_2[7] = 0
        int32_t* result = sub_64c080(edi_2, 0x20)
        int32_t* edx_2 = data_147abec
        
        if (edx_2 != 0)
            void* esi_2 = nullptr
            int32_t* ecx_5
            
            while (true)
                ecx_5 = data_147abf0
                
                if (esi_2 != 0)
                    esi_2 += 0x64
                else
                    esi_2 = *ecx_5
                
                int32_t eax_7 = ecx_5[1] * 0x64 + *ecx_5
                
                if (esi_2 u>= eax_7)
                    break
                
                while ((*(esi_2 + 0x60) & 0xffff0000) == 0)
                    esi_2 += 0x64
                    
                    if (esi_2 u>= eax_7)
                        goto label_687f70
                
                (*(*edx_2 + 0x28))(esi_2)
                edx_2 = data_147abec
                *(esi_2 + 0x5a) = 0
            
        label_687f70:
            void* esi_3 = nullptr
            
            while (true)
                if (esi_3 != 0)
                    esi_3 += 0x64
                else
                    esi_3 = *ecx_5
                
                result = ecx_5[1] * 0x64 + *ecx_5
                
                if (esi_3 u>= result)
                    break
                
                while ((*(esi_3 + 0x60) & 0xffff0000) == 0)
                    esi_3 += 0x64
                    
                    if (esi_3 u>= result)
                        goto label_687fb0
                
                sub_688260(esi_3)
                ecx_5 = data_147abf0
        
    label_687fb0:
        int32_t* ecx_7 = data_147abe8
        
        if (ecx_7 != 0)
            result = sub_64c080(ecx_7, 0x38)
            data_147abe8 = 0
        
        return result
    
    var_10_1 = "GetGameData"
    var_14 = 0x45
    var_18 = "C:\x\ax2017\Engine\Game.h"
else
    var_10_1 = "GameDispose"
    var_14 = 0x49
    var_18 = "C:\x\ax2017\Engine\Game.cpp"

sub_63b870(eax, &data_801800, "gpGameData", var_18, var_14, var_10_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
