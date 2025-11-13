// 函数: sub_4bb570
// 地址: 0x4bb570
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
float xmm0_1 = data_177747c f+ data_8c4634
int32_t* ebx
int32_t* var_368 = ebx
data_1724b18 = 0
data_177747c = xmm0_1
data_1777478 = 1
HWND eax_2 = GetFocus()

if (data_147b084 == eax_2)
    void* ecx_1 = data_147ac28
    void* eax_3 = data_cf65b4
    
    if (data_147cc88 s<= 0 && ((*(ecx_1 + 0x1c) & 1) == 0 || *(eax_3 + 0x18) == 0))
        data_1777480.b = 0
    
    if ((*(ecx_1 + 0x1c) & 2) == 0 || *(eax_3 + 0x18) == 0)
        data_1777480:1.b = 0
else
    data_1777480 = 0
    data_1777484 = 0
    data_177748e = 0
    data_17774ab = 0

float xmm1_1 = data_177747c * 1000f
float xmm1_2

if (0 f<= xmm1_1)
    xmm1_2 = xmm1_1 + 0.5f
else
    xmm1_2 = xmm1_1 - 0.5f

int32_t esi = 0
uint32_t result = data_1777478
uint32_t result_1 = result

if (result != 0)
    int32_t* edi_1 = &data_1724b18
    int32_t* var_354_1 = &data_1724b18
    
    do
        struct InputHitResult::HitResult::VTable* var_340
        sub_4af390(&var_340, edi_1)
        void var_310
        int32_t eax_5 = sub_6936c0(edi_1, &var_310)
        void* var_358 = nullptr
        char const* const var_37c_4
        int32_t var_378_5
        char const* const var_374_6
        void* eax_6
        char* ecx_11
        
        if (eax_5 s> 0)
            void var_308
            eax_6 = &var_308
            void* var_35c_1 = &var_308
            void* edx_4
            
            do
                void* ecx_3 = *(eax_6 - 8)
                int16_t var_360_1 = 0
                
                if (ecx_3 s< 0x24)
                    if (ecx_3 s< 0)
                        var_374_6 = "ButtonSourceIsDown"
                        var_378_5 = 0x17a
                        var_37c_4 = "C:\x\ax2017\Engine\Controller.cpp"
                        ecx_11 = "source >= 0"
                    label_4bb891:
                        sub_63b870(eax_6, &data_801800, ecx_11, var_37c_4, var_378_5, var_374_6)
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    ebx.b = *(ecx_3 + &data_1777480)
                    var_360_1.b = ebx.b
                    
                    if (ecx_3 == 0 || ecx_3 == 1 || ecx_3 == 6)
                        ecx_3.b = *(ecx_3 + &data_17774a4)
                        char edx_2 = var_360_1:1.b
                        
                        if (ecx_3.b != 0)
                            edx_2 = ecx_3.b
                        
                        var_360_1:1.b = edx_2
                else
                    if (ecx_3 - 0x24 s>= 8)
                        var_374_6 = "ButtonSourceIsDown"
                        var_378_5 = 0x16c
                        var_37c_4 = "C:\x\ax2017\Engine\Controller.cpp"
                        ecx_11 = "idx < NUM_BUTTONSOURCES_HANDED"
                        goto label_4bb891
                    
                    if (*(eax_6 - 4) != 0)
                        ebx.b = *(ecx_3 + 0x17774ac)
                        var_360_1.b = ebx.b
                    else
                        ebx.b = *(ecx_3 + 0x17774a4)
                        var_360_1.b = ebx.b
                
                sub_69e6f0(&var_340, ebx.b, *var_35c_1, (var_360_1.d u>> 8).b, int.d(xmm1_2), 
                    &var_340, &edi_1[0x2946], &edi_1[0x2948])
                edx_4 = var_358 + 1
                eax_6 = var_35c_1 + 0xc
                var_358 = edx_4
                var_35c_1 = eax_6
            while (edx_4 s< eax_5)
        
        char var_361 = 0
        result = sub_4b0180(edi_1, &var_340, &var_361)
        
        if (var_361 == 0)
            for (void* const i = &data_802890; i != &data_8028b8; i += 4)
                int32_t eax_14 = *i
                var_358 = nullptr
                
                if (sub_6940a0(eax_14, eax_14, var_354_1, &var_358) != 0)
                    eax_6 = var_358
                    
                    if (eax_6 != 0)
                        edi_1 = var_354_1
                        sub_4aff40(esi, edi_1, edi_1, eax_6, eax_14)
                        goto label_4bb7f6
                    
                    var_374_6 = "ControllersUpdate"
                    var_378_5 = 0x6a
                    var_37c_4 = "C:\x\ax2017\Engine\Controller.h"
                    ecx_11 = "lastOver"
                    goto label_4bb891
            
            edi_1 = var_354_1
        
    label_4bb7f6:
        bool cond:1_1 = *edi_1 != 0
        edi_1[1] = result
        
        if (not(cond:1_1))
            int32_t ecx_7
            ecx_7.b = result == 2
            result = sub_63c150(ecx_7 + 1)
        
        esi += 1
        edi_1 = &edi_1[0x294b]
        var_354_1 = edi_1
    while (esi != result_1)

data_1777482 = 0
data_17774a4 = 0
data_17774aa = 0
CookieCheckFunction(result)
return result
