// 函数: sub_5eaeb0
// 地址: 0x5eaeb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?unlink_sources@?$propagator_block@V?$multi_link_registry@V?$ITarget@W4agent_status@Concurrency@@@Concurrency@@@Concurrency@@V?$multi_link_registry@V?$ISource@W4agent_status@Concurrency@@@Concurrency@@@2@V?$ordered_message_processor@W4agent_status@Concurrency@@@2@@Concurrency@@MAEXXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_30 = ebx
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_14
sub_63d720(&var_14, "btnBack")
char* const ecx_1 = &data_801800
char* eax_3 = var_14

if (eax_3 != 0)
    ecx_1 = eax_3

char* edx = *(arg1 + 4)
int32_t ecx_3

while (true)
    ebx.b = *edx
    char temp0_1 = *ecx_1
    bool c_1 = ebx.b u< temp0_1
    
    if (ebx.b == temp0_1)
        if (ebx.b == 0)
            ecx_3 = 0
            break
        
        ebx.b = edx[1]
        char temp1_1 = ecx_1[1]
        c_1 = ebx.b u< temp1_1
        
        if (ebx.b == temp1_1)
            edx = &edx[2]
            ecx_1 = &ecx_1[2]
            
            if (ebx.b != 0)
                continue
            
            ecx_3 = 0
            break
    
    ecx_3 = sbb.d(ecx_1, ecx_1, c_1) | 1
    break

if (ecx_3 == 0 || *(arg1 + 0x18) == 2)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && eax_3 != 0 && *eax_3 != 0)
    int32_t* eax_4 = sub_63d4e0(&var_14)
    int32_t temp2_1 = eax_4[1]
    eax_4[1] -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_4, eax_4[3] + 0x10)
        var_14 = &data_801800

int32_t var_8_2 = 0xffffffff

if (ebx.b != 0)
    edx.b = 0
    sub_4d46e0(5, edx.b)

char* var_18
sub_63d720(&var_18, "BtnOK")
char* eax_5 = var_18
char* const ecx_7 = &data_801800
char* edx_3 = *(arg1 + 4)

if (eax_5 != 0)
    ecx_7 = eax_5

void* esi_1

while (true)
    ebx.b = *edx_3
    char temp3_1 = *ecx_7
    bool c_2 = ebx.b u< temp3_1
    
    if (ebx.b == temp3_1)
        if (ebx.b == 0)
            esi_1 = nullptr
            break
        
        ebx.b = edx_3[1]
        char temp4_1 = ecx_7[1]
        c_2 = ebx.b u< temp4_1
        
        if (ebx.b == temp4_1)
            edx_3 = &edx_3[2]
            ecx_7 = &ecx_7[2]
            
            if (ebx.b != 0)
                continue
            
            esi_1 = nullptr
            break
    
    esi_1 = sbb.d(arg1, arg1, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && eax_5 != 0 && *eax_5 != 0)
    char* eax_6 = sub_63d4e0(&var_18)
    int32_t temp5_1 = *(eax_6 + 4)
    *(eax_6 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
        var_18 = &data_801800

int32_t var_8_4 = 0xffffffff

if (esi_1 != 0)
    goto label_5eb0bc

int32_t* eax_7 = sub_4b9480()
int32_t eax_8 = eax_7[0x4c4]
void* eax_10

if (eax_8 == 4 || eax_8 == 5)
    eax_7[0x4c4] = 0
    sub_4d46e0(5, 0)
    data_b809a1 = 0
label_5eb0bc:
    char* const result_1
    sub_63d720(&result_1, "BtnDecline")
    char* const result_2 = &data_801800
    char* edx_8 = *(arg1 + 4)
    char* result = result_1
    
    if (result != 0)
        result_2 = result
    
    int32_t esi_4
    
    while (true)
        ebx.b = *edx_8
        char temp6_1 = *result_2
        bool c_3 = ebx.b u< temp6_1
        
        if (ebx.b == temp6_1)
            if (ebx.b == 0)
                esi_4 = 0
                break
            
            ebx.b = edx_8[1]
            char temp7_1 = result_2[1]
            c_3 = ebx.b u< temp7_1
            
            if (ebx.b == temp7_1)
                edx_8 = &edx_8[2]
                result_2 = &result_2[2]
                
                if (ebx.b != 0)
                    continue
                
                esi_4 = 0
                break
        
        esi_4 = sbb.d(esi_1, esi_1, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_cf65bc != 0 && result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp8_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp8_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_8_6 = 0xffffffff
    
    if (esi_4 != 0)
    label_5eb1f4:
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    int32_t* eax_14 = sub_4b9480()
    int32_t var_24 = eax_14[0x4c5]
    void* eax_15 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    int32_t edx_11 = eax_14[0x4c7]
    int32_t esi_6 = *(eax_15 + 0x4250)
    eax_14[0x4c4] = 0
    int32_t var_20_1 = 2
    
    if (esi_6 != edx_11)
        int32_t var_20_2 = 1
    
    edx_11.b = 0
    sub_4d46e0(5, edx_11.b)
    eax_10 = data_cc8d5c
    data_b809a1 = 0
    
    if (eax_10 != 0)
        result = *(eax_10 + 0x14)
        void* ecx_19 = data_147abf4
        
        if (result != 0)
            uint32_t edx_12 = zx.d(result.w)
            
            if (edx_12 u< *(ecx_19 + 4))
                void* esi_8 = edx_12 * 0x64 + *ecx_19
                
                if (*(esi_8 + 0x60) == result && esi_8 != 0)
                    int32_t var_40_3 = 0xf42b7
                    sub_689e00(result, 8, esi_8 + 0x50)
                    sub_689be0(&var_24, 8, esi_8 + 0x50, &var_24)
        
        goto label_5eb1f4
else
    int32_t var_2c = eax_7[0x4c5]
    eax_10 = data_cc8d5c
    void* var_28_1 = esi_1
    
    if (eax_10 != 0)
        int32_t eax_11 = *(eax_10 + 0x14)
        void* ecx_10 = data_147abf4
        
        if (eax_11 != 0)
            uint32_t edx_7 = zx.d(eax_11.w)
            
            if (edx_7 u< *(ecx_10 + 4))
                esi_1 = edx_7 * 0x64 + *ecx_10
                
                if (*(esi_1 + 0x60) == eax_11 && esi_1 != 0)
                    int32_t var_40_1 = 0xf42b7
                    sub_689e00(eax_11, 8, esi_1 + 0x50)
                    sub_689be0(&var_2c, 8, esi_1 + 0x50, &var_2c)
        
        eax_7[0x4c4] = 2
        goto label_5eb0bc

sub_63b870(eax_10, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
    0x7b, "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
