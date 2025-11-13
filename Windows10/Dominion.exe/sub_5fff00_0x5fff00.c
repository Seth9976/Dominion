// 函数: sub_5fff00
// 地址: 0x5fff00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
int32_t* edx
ecx, edx = __chkstk(0x3340)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
void var_3340
int32_t var_19a0[0x5be]
memcpy(&var_19a0, sub_4e49d0(edx, &var_3340), 0x1990)
*(sub_64e7a0(edx) + 0x18bc) = sub_5ffe80
*(sub_64e7a0(edx) + 0x18c0) = sub_4beb70
uint32_t eax_5 = sub_64e7a0(edx)
sub_665db0(eax_5, &data_be4b94, eax_5, 0x3f800000, 0xffffffff, 0)
uint32_t eax_6 = sub_64e7a0(edx)
sub_665db0(eax_6, &data_8dc320, eax_6, 0x3f800000, 0xffffffff, 0)
void** ebx_1

if (arg3 == 0)
    ebx_1 = &data_be45fc

if (arg3 != 0 || *(ecx + 0x70) != 0)
    ebx_1 = &data_be45f0

uint32_t eax_8 = sub_64e7a0(edx)
sub_665db0(eax_8, ebx_1, eax_8, 0x3f800000, 0xffffffff, 0)
int32_t eax_10 = *(ecx + 4)
int32_t var_18_18
char const* const var_14_17

if (eax_10 u> 3)
    var_14_17 = "GameSpecific_GameCreateUpdate"
    var_18_18 = 0x9042
else
    void** ebx_2
    
    switch (eax_10)
        case 0
            ebx_2 = &data_be4608
        case 1
            ebx_2 = &data_be45e4
        case 2
            ebx_2 = &data_be45cc
        case 3
            ebx_2 = &data_be45d8
    
    uint32_t eax_11 = sub_64e7a0(edx)
    sub_665db0(eax_11, ebx_2, eax_11, 0x3f800000, 0xffffffff, 0)
    
    if ((arg2[6].b & 0x20) != 0)
        uint32_t eax_12 = sub_64e7a0(edx)
        sub_665db0(eax_12, &data_be4ba0, eax_12, 0x3f800000, 0xffffffff, 0)
        char* eax_13 = arg2[0xe]
        
        if (eax_13 != 0 && *eax_13 != 0)
            uint32_t eax_14 = sub_64e7a0(edx)
            int32_t var_1c_2 = 0xffffffff
            sub_666380(sub_665db0(eax_14, &data_be4bac, eax_14, 0x3f800000, 0xffffffff, 0), 
                &data_be4bb8, edx, &arg2[0xe])
    
    if (arg3 != 0)
        uint32_t eax_16 = sub_64e7a0(edx)
        sub_665db0(eax_16, &data_be45a8, eax_16, 0x3f800000, 0xffffffff, 0)
    
    uint32_t eax_17 = sub_64e7a0(edx)
    void** edx_3 = &data_be45c0
    
    if (arg4 != 0)
        edx_3 = &data_be45b4
    
    sub_665db0(eax_17, edx_3, eax_17, 0x3f800000, 0xffffffff, 0)
    eax_10 = arg2[8]
    
    if (eax_10 u> 5)
        var_14_17 = "DomCreateUpdateTime"
        var_18_18 = 0x858a
    else
        void** ebx_4
        
        switch (eax_10)
            case 0
                ebx_4 = &data_be456c
            case 1, 4
                ebx_4 = &data_be4584
            case 2
                ebx_4 = &data_be4590
            case 3
                ebx_4 = &data_be459c
            case 5
                ebx_4 = &data_be4578
        
        uint32_t eax_18 = sub_64e7a0(edx)
        sub_665db0(eax_18, ebx_4, eax_18, 0x3f800000, 0xffffffff, 0)
        int32_t var_2a8
        eax_10 = var_2a8
        
        if (eax_10 u> 4)
            var_14_17 = "DomCreateUpdateRules"
            var_18_18 = 0x84d3
        else
            void** ebx_5
            
            switch (eax_10)
                case 0
                    ebx_5 = &data_be4614
                case 1
                    ebx_5 = &data_be4620
                case 2
                    ebx_5 = &data_be462c
                case 3
                    ebx_5 = &data_be4638
                case 4
                    ebx_5 = &data_be4644
            
            uint32_t eax_19 = sub_64e7a0(edx)
            sub_665db0(eax_19, ebx_5, eax_19, 0x3f800000, 0xffffffff, 0)
            sub_5fa330(&var_19a0, edx, ecx, arg2, &var_19a0)
            
            if (sub_4e4720(&var_19a0) != 0 && arg3 == 0)
                uint32_t eax_22 = sub_64e7a0(edx)
                sub_665db0(eax_22, &data_be4554, eax_22, 0x3f800000, 0xffffffff, 0)
                uint32_t eax_23 = sub_64e7a0(edx)
                sub_665db0(eax_23, &data_be4560, eax_23, 0x3f800000, 0xffffffff, 0)
            
            if (arg4 == 0)
                uint32_t eax_24 = sub_64e7a0(edx)
                sub_665db0(eax_24, &data_be4b64, eax_24, 0x3f800000, 0xffffffff, 0)
            
            int32_t eax_25 = sub_4bb9f0(0x1a94b60, edx, "btn_tabPlayers")
            int32_t eax_26 = sub_4bb9f0(0x1a94b84, edx, "btn_tabTime")
            int32_t eax_27 = sub_4bb9f0(0x1a94ba8, edx, "btn_tabRules")
            
            if (eax_25 != 0)
                int32_t edx_7 = arg2[0x468]
                
                if (edx_7 == 0)
                    int32_t ecx_33
                    ecx_33.b = arg2[0x15] != 0
                    int32_t eax_28 = ecx_33 + 1
                    
                    if (arg2[0xa0] == edx_7)
                        eax_28 = ecx_33
                    
                    int32_t ecx_34 = eax_28 + 1
                    
                    if (arg2[0x12b] == edx_7)
                        ecx_34 = eax_28
                    
                    int32_t eax_29 = ecx_34 + 1
                    
                    if (arg2[0x1b6] == edx_7)
                        eax_29 = ecx_34
                    
                    int32_t ecx_35 = eax_29 + 1
                    
                    if (arg2[0x241] == edx_7)
                        ecx_35 = eax_29
                    
                    edx_7 = ecx_35 + 1
                    
                    if (arg2[0x2cc] == 0)
                        edx_7 = ecx_35
                
                void** ebx_7
                
                if (edx_7 - 2 u> 4)
                    ebx_7 = &data_be4a80
                else
                    switch (edx_7)
                        case 2
                            ebx_7 = &data_be4a80
                        case 3
                            ebx_7 = &data_be4a8c
                        case 4
                            ebx_7 = &data_be4a98
                        case 5
                            ebx_7 = &data_be4aa4
                        case 6
                            ebx_7 = &data_be4ab0
                
                uint32_t eax_30 = sub_64e7a0(eax_25)
                sub_665db0(eax_30, ebx_7, eax_30, 0x3f800000, 0xffffffff, 0)
            
            if (eax_26 == 0)
            label_600377:
                
                if (eax_27 == 0)
                label_6003eb:
                    int32_t var_14_19 = 6
                    uint32_t eax_34 = zx.d(*(ecx + 0x14))
                    void* eax_35 = __vcasan::OnAsanReport(eax_34, arg2, edx, arg4, arg3, eax_34.b, 
                        *(ecx + 0x18), *(ecx + 0x28))
                    
                    if (arg4 != 0)
                        eax_35 = sub_4c72f0(edx, arg2)
                    
                    void* result = sub_4bbeb0(eax_35, arg2, edx, arg4)
                    CookieCheckFunction(result)
                    return result
                
                eax_10 = var_2a8
                
                if (eax_10 u<= 4)
                    void** ebx_9
                    
                    switch (eax_10)
                        case 0
                            ebx_9 = &data_be4af8
                        case 1
                            ebx_9 = &data_be4b04
                        case 2
                            ebx_9 = &data_be4b10
                        case 3
                            ebx_9 = &data_be4b1c
                        case 4
                            ebx_9 = &data_be4b28
                    
                    uint32_t eax_32 = sub_64e7a0(eax_27)
                    sub_665db0(eax_32, ebx_9, eax_32, 0x3f800000, 0xffffffff, 0)
                    goto label_6003eb
                
                var_14_17 = "GameCreateRulesIcon"
                var_18_18 = 0x900f
            else
                eax_10 = arg2[8]
                
                if (eax_10 u<= 5)
                    void** ebx_8
                    
                    switch (eax_10)
                        case 0, 5
                            ebx_8 = &data_be4abc
                        case 1, 4
                            ebx_8 = &data_be4ad4
                        case 2
                            ebx_8 = &data_be4ae0
                        case 3
                            ebx_8 = &data_be4aec
                    
                    uint32_t eax_31 = sub_64e7a0(eax_26)
                    sub_665db0(eax_31, ebx_8, eax_31, 0x3f800000, 0xffffffff, 0)
                    goto label_600377
                
                var_14_17 = "GameCreateTimeIcon"
                var_18_18 = 0x8ffc

sub_63b870(eax_10, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_18_18, 
    var_14_17)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
