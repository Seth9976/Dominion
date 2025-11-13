// 函数: sub_4ce750
// 地址: 0x4ce750
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?add@?$source_link_manager@V?$multi_link_registry@V?$ISource@I@Concurrency@@@Concurrency@@@Concurrency@@QAEXPAV?$ISource@I@2@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char var_11 = 0
*(sub_64e7a0(arg1) + 0x18bc) = sub_4ce670
void* edx = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
void* eax_5 = data_cc8d5c
void* var_28 = edx

if (eax_5 == 0)
    sub_63b870(eax_5, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_6 = *(eax_5 + 0x7750)
int32_t var_2c = eax_6

if (eax_6 s>= 0xd)
    eax_6 = 0xd
    var_2c = 0xd
else if (eax_6 == 0)
    uint32_t eax_7 = sub_64e7a0(arg1)
    void* eax_8 = sub_665db0(eax_7, &data_8dc7d0, eax_7, 0x3f800000, 0xffffffff, 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_8

int32_t ebx = 0
void* eax_14

while (true)
    void* var_1c
    
    if (ebx s< eax_6)
        if ((ebx.b & 1) != 0)
            uint32_t eax_15 = sub_64e7a0(arg1)
            sub_665db0(eax_15, &data_8dc7b8, eax_15, 0x3f800000, ebx, 0)
            edx = var_28
        
        int32_t esi_1 = ebx * 3
        
        if (*(edx + 0x4250) == *(eax_5 + (esi_1 << 2) + 0x769c))
            var_11 = 1
            uint32_t eax_17 = sub_64e7a0(arg1)
            sub_665db0(eax_17, &data_8dc7c4, eax_17, 0x3f800000, ebx, 0)
        else if (ebx == 0xc && var_11 == 0 && *(edx + 0x7854) != 0)
            float xmm1_1 = *(edx + 0x785c)
            float xmm0_6 = sub_4d5cb0(((*(edx + 0x7858) - (xmm1_1 + xmm1_1)) * 7.5f + 50f) * 100f)
            float xmm0_7
            
            if (0 f<= xmm0_6)
                xmm0_7 = xmm0_6 + 0.5f
            else
                xmm0_7 = xmm0_6 - 0.5f
            
            int32_t var_44_3 = int.d(xmm0_7)
            int32_t var_50_2 = 0xc
            int32_t var_8_9 = 4
            sub_666380(sub_63df30(&var_1c, "%d"), &data_8dc7a0, arg1, var_28)
            int32_t var_58_2 = 0xc
            sub_666380(&var_1c, &data_8dc7ac, arg1, &var_1c)
            uint32_t eax_26 = sub_64e7a0(arg1)
            eax_14 = sub_665db0(eax_26, &data_8dc7c4, eax_26, 0x3f800000, 0xc, 0)
            int32_t var_8_10 = 5
            
            if (data_cf65bc != 0)
                eax_14 = var_1c
                
                if (eax_14 != 0 && *eax_14 != 0)
                    eax_14 = sub_63d4e0(&var_1c)
                    int32_t temp3_1 = *(eax_14 + 4)
                    *(eax_14 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        eax_14 = sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
                        var_1c = &data_801800
            
            int32_t var_8_11 = 0xffffffff
            break
        
        int32_t var_44_2 = ebx
        sub_666380(eax_5 + (esi_1 << 2) + 0x76a0, &data_8dc7a0, arg1, eax_5 + (esi_1 << 2) + 0x76a0)
        int32_t var_4c_2 = *(eax_5 + (esi_1 << 2) + 0x76a4)
        void* var_20
        sub_63df30(&var_20, "%d")
        int32_t var_8_6 = 6
        int32_t var_58_1 = ebx
        eax_14 = sub_666380(&var_20, &data_8dc7ac, arg1, &var_20)
        int32_t var_8_7 = 7
        
        if (data_cf65bc != 0)
            eax_14 = var_20
            
            if (eax_14 != 0 && *eax_14 != 0)
                eax_14 = sub_63d4e0(&var_20)
                int32_t temp2_1 = *(eax_14 + 4)
                *(eax_14 + 4) -= 1
                
                if (temp2_1 == 1)
                    eax_14 = sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
                    var_20 = &data_801800
    else
        uint32_t eax_9 = sub_64e7a0(arg1)
        sub_665db0(eax_9, &data_8dc7b8, eax_9, 0x3f800000, ebx, 0)
        char* const var_18
        sub_63d720(&var_18, &data_801800)
        int32_t var_8_1 = 0
        int32_t var_4c_1 = ebx
        sub_666380(&var_18, &data_8dc7a0, arg1, &var_18)
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            char* eax_11 = var_18
            
            if (eax_11 != 0 && *eax_11 != 0)
                char* eax_12 = sub_63d4e0(&var_18)
                int32_t temp0_1 = *(eax_12 + 4)
                *(eax_12 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
                    var_18 = &data_801800
        
        int32_t var_8_3 = 0xffffffff
        sub_63d720(&var_1c, &data_801800)
        int32_t var_8_4 = 2
        int32_t var_44_1 = ebx
        eax_14 = sub_666380(&var_1c, &data_8dc7ac, arg1, &var_1c)
        int32_t var_8_5 = 3
        
        if (data_cf65bc != 0)
            eax_14 = var_1c
            
            if (eax_14 != 0 && *eax_14 != 0)
                eax_14 = sub_63d4e0(&var_1c)
                int32_t temp1_1 = *(eax_14 + 4)
                *(eax_14 + 4) -= 1
                
                if (temp1_1 == 1)
                    eax_14 = sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
                    var_1c = &data_801800
    ebx += 1
    int32_t var_8_8 = 0xffffffff
    
    if (ebx s>= 0xd)
        break
    
    eax_6 = var_2c
    edx = var_28

fsbase->NtTib.ExceptionList = ExceptionList
return eax_14
