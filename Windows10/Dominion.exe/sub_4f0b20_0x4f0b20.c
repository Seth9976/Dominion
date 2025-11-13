// 函数: sub_4f0b20
// 地址: 0x4f0b20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
void* edx
ecx, edx = __chkstk(0x19c0)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
int32_t eax_2 = *(arg2 + 0x50)
int32_t ecx_1 = *(arg2 + 0x40)
void* eax_3 = *(edx + 0xb4) * 0x84

if (*(eax_3 + 0x177764c) == 0)
    int32_t var_18_1
    char const* const var_14_2
    char* ecx_8
    
    if (ecx_1 == 0)
        var_14_2 = "FillNodePriors"
        var_18_1 = 0xe0a
        ecx_8 = "yld.aiHint != DOMAI_HINT_NONE"
    label_4f0f19:
        sub_63b870(eax_3, &data_801800, ecx_8, "C:\x\ax2017\Jams\Dominion\code\DomAIMCTS.cpp", 
            var_18_1, var_14_2)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    eax_3 = *(arg2 + 0x54)
    void* esi_1 = nullptr
    void* var_19b4_1 = nullptr
    
    if (eax_3 == 2)
        esi_1 = *(arg2 + 0x58)
        var_19b4_1 = esi_1
    else if (eax_3 == 3)
        eax_3 = sub_5916b0(*(arg2 + 0x58))
        var_19b4_1 = eax_3
        esi_1 = eax_3
    
    void* var_19bc_1 = nullptr
    
    if (*(edx + 0xd4) s> 0)
        int32_t var_19b8_1 = 0
        
        while (true)
            void var_19a8
            sub_5939a0(&var_19a8, arg2)
            int32_t edx_6 = sub_4f02f0(edx, *(edx + 0xd0) + var_19b8_1)
            eax_3 = *(arg2 + 4) - 1
            
            if (eax_3 u> 8)
                var_14_2 = "FillNodePriors"
                var_18_1 = 0xe61
                ecx_8 = "Halt"
                break
            
            uint32_t var_193c
            uint32_t var_1938
            void* var_34_1
            uint32_t var_30_1
            uint32_t* var_2c_1
            uint32_t var_28_1
            uint32_t var_24_1
            void* var_20_1
            void* const var_1c_1
            void* var_18_4
            int32_t var_14_10
            
            switch (eax_3)
                case nullptr
                    var_14_10 = 0
                    var_18_4 = esi_1
                label_4f0e7f:
                    __builtin_memset(&var_2c_1, 0, 0x14)
                    var_30_1 = var_193c
                    eax_3 = &var_1938
                    var_34_1 = eax_3
                case 1
                    var_14_10 = 1
                    var_18_4 = esi_1
                    var_1c_1 = nullptr
                    goto label_4f0e7f
                case 2
                    var_14_10 = 0
                    var_18_4 = esi_1
                    int32_t var_ca8
                    var_1c_1 = sub_4ee120(var_ca8)
                    goto label_4f0e7f
                case 3
                    var_14_10 = 0
                    var_18_4 = esi_1
                    var_1c_1 = nullptr
                    var_20_1 = nullptr
                    var_24_1 = 0
                    var_28_1 = var_193c
                    eax_3 = &var_1938
                    var_2c_1 = &var_1938
                    var_30_1 = 0
                    var_34_1 = nullptr
                case 4, 8
                    var_14_10 = 0
                    var_18_4 = esi_1
                    var_1c_1 = nullptr
                    eax_3 = var_193c + 1
                    var_20_1 = eax_3
                    __builtin_memset(&var_34_1, 0, 0x14)
                case 5
                    eax_3 = var_193c
                    uint32_t ecx_12 = 0
                    void var_c90
                    uint32_t eax_9
                    
                    if (eax_3 s<= 0)
                        eax_9 = 0
                    else
                        if (eax_3 != 1)
                            var_14_2 = "FillNodePriors"
                            var_18_1 = 0xe1d
                            ecx_8 = "act.numChoices == 1"
                            break
                        
                        uint32_t eax_7 = sub_5915b0(eax_3, edx_6, ecx, var_1938)
                        uint32_t esi_2 = var_1938
                        int32_t var_195c
                        int32_t edx_8
                        eax_9, edx_8 = sub_57ee90(&var_c90, var_195c, ecx, esi_2, &var_c90)
                        uint32_t eax_10
                        
                        if (eax_9 s<= 0)
                            eax_10 = sub_5915b0(eax_9, edx_8, ecx, esi_2)
                        
                        if (eax_9 s> 0 || eax_10 != 0x1121)
                            esi_1 = var_19b4_1
                            ecx_12 = eax_7
                        else
                            uint32_t eax_11 = sub_5916b0(esi_2)
                            eax_9 = sub_590930(eax_11, eax_11, ecx, &var_c90)
                            esi_1 = var_19b4_1
                            ecx_12 = eax_7
                    
                    var_14_10 = 0
                    var_18_4 = esi_1
                    var_1c_1 = nullptr
                    var_20_1 = nullptr
                    var_24_1 = ecx_12
                    var_28_1 = nullptr
                    var_2c_1 = nullptr
                    var_30_1 = eax_9
                    eax_3 = &var_c90
                    var_34_1 = eax_3
                case 6, 7
                    eax_3 = var_193c
                    uint32_t ecx_18 = 0
                    
                    if (eax_3 s> 0)
                        if (eax_3 != 1)
                            var_14_2 = "FillNodePriors"
                            var_18_1 = 0xe47
                            ecx_8 = "act.numChoices == 1"
                            break
                        
                        ecx_18 = var_1938
                    
                    var_14_10 = 0
                    var_18_4 = esi_1
                    var_1c_1 = nullptr
                    var_20_1 = nullptr
                    var_24_1 = ecx_18
                    var_28_1 = nullptr
                    var_2c_1 = nullptr
                    var_30_1 = 0
                    var_34_1 = nullptr
            
            int16_t top = top + 1
            *(var_19b8_1 + *(edx + 0xd0) + 0x3c) = sub_5baeb0(eax_3, eax_2, *(edx + 0xb4), 
                *(arg2 + 0x40), var_34_1, var_30_1, var_2c_1, var_28_1, var_24_1, var_20_1, 
                var_1c_1, var_18_4, var_14_10)
            eax_3 = var_19bc_1 + 1
            var_19b8_1 += 0x54
            var_19bc_1 = eax_3
            
            if (eax_3 s>= *(edx + 0xd4))
                goto label_4f0c55
        
        goto label_4f0f19
else
    if (ecx_1 == 2)
        int32_t i = 0
        
        if (*(edx + 0xd4) s> 0)
            int32_t ecx_2 = 0
            
            do
                eax_3 = *(edx + 0xd0)
                ecx_2 += 0x54
                i += 1
                *(ecx_2 + eax_3 - 0x18) = _mm_cvtepi32_ps(zx.o(*(ecx_2 + eax_3 - 0x44)))
            while (i s< *(edx + 0xd4))
    
    if (*(arg2 + 0x40) == 1)
        int32_t i_1 = 0
        
        if (*(edx + 0xd4) s> 0)
            eax_3 = nullptr
            
            do
                int32_t edx_2 = *(edx + 0xd0)
                
                if (*(eax_3 + edx_2 + 0x10) == 0)
                    *(eax_3 + edx_2 + 0x3c) = 0xbf800000
                
                i_1 += 1
                eax_3 += 0x54
            while (i_1 s< *(edx + 0xd4))
    
    if (*(arg2 + 0x40) == 0x2d)
        int32_t i_2 = 0
        
        if (*(edx + 0xd4) s> 0)
            int32_t edx_3 = 0
            
            do
                int32_t ecx_3 = *(edx + 0xd0)
                edx_3 += 0x54
                i_2 += 1
                eax_3 = *(edx_3 + ecx_3 - 0x48)
                *(edx_3 + ecx_3 - 0x18) = _mm_cvtepi32_ps(zx.o(*eax_3))
            while (i_2 s< *(edx + 0xd4))
    
    if (*(arg2 + 0x40) == 0x18)
        int32_t i_3 = 0
        
        if (*(edx + 0xd4) s> 0)
            eax_3 = nullptr
            
            do
                int32_t ecx_4 = *(edx + 0xd0)
                
                if (*(eax_3 + ecx_4 + 0x10) == 0)
                    *(eax_3 + ecx_4 + 0x3c) = *(eax_3 + ecx_4 + 0x3c) + 0.100000001f
                
                i_3 += 1
                eax_3 += 0x54
            while (i_3 s< *(edx + 0xd4))

label_4f0c55:
uint32_t result = sub_4f0750(eax_3, edx, ecx, arg2)
CookieCheckFunction(result)
return result
