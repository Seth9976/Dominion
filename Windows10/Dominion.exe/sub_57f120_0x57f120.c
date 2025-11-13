// 函数: sub_57f120
// 地址: 0x57f120
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* esi = arg3
int32_t edx = arg4[0x100]
int32_t* var_cac = esi
int32_t* var_c9c = nullptr

if (edx s> 0)
    int32_t* eax_3 = arg4
    int32_t* var_c98_1 = arg4
    
    do
        uint32_t eax_4 = *eax_3
        int32_t edx_1
        bool cond:0_1
        
        if ((eax_4.b & 0x30) != 0)
            void* eax_6
            eax_6, edx_1 = sub_5769e0(eax_4, edx, esi, eax_4)
            cond:0_1 = (*(eax_6 + 0xac) & 1) != 0
        label_57f19c:
            
            if (not(cond:0_1))
                goto label_57f19e
        else
            void* eax_5
            eax_5, edx_1 = sub_576940(eax_4, edx, esi, eax_4)
            
            if (*(eax_5 + 0x4c) == 2)
                cond:0_1 = (*(eax_5 + 0x60) & 1) != 0
                goto label_57f19c
            
        label_57f19e:
            int32_t i = 0
            char ecx_1 = 1
            char var_c91_1 = 1
            
            if (arg4[0x100] s<= 0)
            label_57f36e:
                *arg5 = arg4[var_c9c]
                CookieCheckFunction(1)
                return 1
            
            int32_t* eax_7 = var_c9c
            int32_t* edi_1 = arg4
            
            do
                if (eax_7 != i)
                    uint32_t eax_9
                    eax_9, edx_1 = sub_57c2f0(var_c98_1, edx_1, var_cac, *var_c98_1, *edi_1)
                    
                    if (eax_9 == 0 || eax_9 == 3)
                        ecx_1 = 0
                        var_c91_1 = 0
                    else
                        ecx_1 = var_c91_1
                    
                    eax_7 = var_c9c
                
                i += 1
                edi_1 = &edi_1[1]
            while (i s< arg4[0x100])
            
            if (ecx_1 != 0)
                goto label_57f36e
            
            esi = var_cac
        arg3 = var_c9c + 1
        edx = arg4[0x100]
        eax_3 = &var_c98_1[1]
        var_c9c = arg3
        var_c98_1 = eax_3
    while (arg3 s< edx)

int32_t i_3 = 0

if (edx s> 0)
    int32_t* edi_2 = arg4
    int32_t i_1
    
    do
        void* eax_11 = *edi_2
        int32_t* var_ca0 = 3
        void* var_c9c_1 = eax_11
        void var_c90
        uint32_t eax_12 = sub_57ee90(eax_11, arg2, esi, eax_11, &var_c90)
        arg3 = sub_57c5b0(&var_ca0, arg2, esi, *edi_2, &var_ca0, &var_c90, eax_12)
        edi_2 = &edi_2[1]
        i_1 = i_3 + 1
        i_3 = i_1
    while (i_1 s< arg4[0x100])

int32_t* var_cbc_4 = arg3
uint32_t result = sub_57ec40(sub_5ee870(), arg2, esi, arg4, arg4[0x100], arg5)
int32_t i_2 = 0

if (arg4[0x100] s> 0)
    do
        int32_t esi_1 = arg4[i_2]
        
        if (esi_1 == 0xffffffff)
            sub_591930()
        
        int32_t eax_17 = var_cac[0x541]
        
        if (eax_17 != 3 && eax_17 != 5 && eax_17 != 4 && eax_17 != 6)
            sub_61b1b0(eax_17, 0x19, eax_17 == 2, arg2, esi_1, nullptr, nullptr, nullptr, nullptr, 
                0, 0, 0, 0, 0)
        
        i_2 += 1
    while (i_2 s< arg4[0x100])

CookieCheckFunction(result)
return result
