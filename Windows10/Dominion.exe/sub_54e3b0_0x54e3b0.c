// 函数: sub_54e3b0
// 地址: 0x54e3b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebp
void* var_4 = ebp
__chkstk(0x19a8)
__security_cookie
void* eax_2
int32_t edx
eax_2, edx = sub_573400()
void* var_10 = eax_2
void arg_80
int32_t eax_4 = sub_568780(&arg_80, edx, 0x3eb, &arg_80)
int32_t arg_d08[0x320]
__builtin_memcpy(&arg_d08, eax_4, 0xc84)
sub_566140(eax_4, 0x3eb, &arg_d08, 0x3ea, nullptr, 1, 0xb, nullptr, nullptr)
int32_t edx_1 = 0x114e
void* ecx_3 = sub_577bb0(*(sub_573400() + 4) + 0xd4c, 0x114e)
void* eax_7 = nullptr
void* arg_14 = ecx_3
void* var_8 = nullptr

while (true)
    bool cond:1_1 = *(ecx_3 + (eax_7 << 2)) == 0
    eax_7 = ecx_3 + (eax_7 << 2)
    
    if (cond:1_1)
    label_54e6e9:
        uint32_t result =
            sub_566140(eax_7, 0x3ea, &arg_d08, 0x3eb, nullptr, 1, 0xb, nullptr, nullptr)
        CookieCheckFunction(result)
        return result
    
    int32_t eax_9 = sub_568780(&arg_80, edx_1, 0x3ea, &arg_80)
    int64_t arg_1c
    __builtin_memset(&arg_1c, 0, 0x2c)
    int128_t arg_48 = 0x121.o
    __builtin_memcpy(&arg_d08, eax_9, 0xc84)
    int128_t arg_58 = arg1.o
    int128_t arg_68 = arg2.o
    int32_t* eax_10 = sub_563c40(&arg_48, 7, 0)
    int32_t esi_2 = arg3
    int32_t ecx_4 = 0
    
    if (esi_2 s> 0)
        do
            if (arg_d08[ecx_4] == eax_10)
                arg3 = esi_2 - 1
                arg_d08[ecx_4] = arg_d08[esi_2 - 1]
                esi_2 = arg3
                break
            
            ecx_4 += 1
        while (ecx_4 s< esi_2)
    
    int32_t i = sub_57dc30(*(var_10 + 4), eax_10.w)
    int32_t eax_13
    
    if (i != 0 && i != 0x101)
        eax_13 = 7
        int32_t* ecx_8 = *(var_10 + 4) + 0x1594
        
        while (*ecx_8 != i)
            if (ecx_8[1] == i)
                break
            
            eax_13 += 1
            ecx_8 = &ecx_8[4]
            
            if (eax_13 s>= 0x48)
                goto label_54e5a4
    
    int32_t* var_44_1
    
    if (i == 0 || i == 0x101 || eax_13 - 7 u> 0x1a)
    label_54e5a4:
        int32_t var_40
        __builtin_memset(&var_40, 0, 0x28)
        var_44_1 = 1
    else
        int32_t* ecx_13 = 7
        void* eax_26 = *(var_10 + 4) + 0x1594
        
        while (true)
            if (*eax_26 == i || *(eax_26 + 4) == i)
                eax_26 = ecx_13 - 7
                
                if (eax_26 u<= 0x1a)
                    int32_t var_40_1
                    __builtin_memset(&var_40_1, 0, 0x28)
                    var_44_1 = ecx_13
                    break
            else
                ecx_13 += 1
                eax_26 += 0x10
                
                if (ecx_13 s< 0x48)
                    continue
            
            sub_63b870(eax_26, &data_801800, "IsSupplyPile(where)", 
                "C:\x\ax2017\Jams\Dominion\code\DomCards_Plunder.cpp", 0x817, 
                "Inherited_Setup::<lambda_a6b1e8b2913acf1ac35acad96763d32f>::operator ()")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
    
    void* eax_14 = var_10
    sub_5822e0(eax_14, 0xffffffff, *(eax_14 + 4), eax_10, 0x15, var_44_1, nullptr, 0, 0, 0, 0, 0, 
        nullptr, 0, nullptr, nullptr)
    int32_t eax_15 = sub_563590(*eax_7)
    var_4 = nullptr
    uint32_t eax_17 = *(var_10 + 0xc)
    int32_t eax_19 = *(sub_573400() + 4)
    uint32_t eax_20 = zx.d(eax_15.w)
    
    if (eax_20 u>= 0x320)
        sub_591930()
    
    edx_1 = sub_565ff0(eax_19, *(eax_20 * 0x64 + eax_19 + 0x1a50), eax_15, eax_17, 0x3ea, nullptr, 
        nullptr, 0xc, nullptr, var_4)
    
    if (esi_2 s>= 0x320)
        edx_1 = sub_591930()
    
    eax_7 = var_8 + 1
    arg_d08[esi_2] = eax_15
    arg3 += 1
    var_8 = eax_7
    
    if (eax_7 s>= 0xe)
        goto label_54e6e9
    
    ecx_3 = arg_14
