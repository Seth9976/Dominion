// 函数: sub_66d820
// 地址: 0x66d820
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76d4c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ecx
int32_t* edx
ecx, edx = __chkstk(0x101c)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = edx
int32_t* var_1024 = ebx
char* eax_3 = *ebx
char* const ecx_1 = &data_801800

if (eax_3 != 0)
    ecx_1 = eax_3

char* const eax_4 = &data_801800
int32_t* result

while (true)
    edx.b = *ecx_1
    char temp0_1 = *eax_4
    bool c_1 = edx.b u< temp0_1
    
    if (edx.b == temp0_1)
        if (edx.b == 0)
            result = nullptr
            break
        
        edx.b = ecx_1[1]
        char temp1_1 = eax_4[1]
        c_1 = edx.b u< temp1_1
        
        if (edx.b == temp1_1)
            ecx_1 = &ecx_1[2]
            eax_4 = &eax_4[2]
            
            if (edx.b != 0)
                continue
            
            result = nullptr
            break
    
    result = sbb.d(eax_4, eax_4, c_1) | 1
    break

if (result != 0)
    result = sub_667870(ecx)
    
    if (result != 0)
        char* edx_1 = *result
        
        if (edx_1 == 0)
            sub_63b870(result, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
                "XString::XString")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int32_t* result_1
        int32_t var_24_1 = sub_63d720(&result_1, edx_1)
        int32_t var_8_1 = 0
        int32_t var_1014[0x3fa]
        int32_t eax_6 = sub_66d420(ecx, &var_1014)
        int32_t edi_1 = 0
        
        if (eax_6 s> 0)
            do
                void* esi_1 = var_1014[edi_1]
                
                if (sub_667680(esi_1, ebx) == 0)
                    int32_t* eax_8 = sub_667680(esi_1, &result_1)
                    int32_t* var_1020_1 = eax_8
                    
                    if (eax_8 != 0)
                        char* ecx_8 = *ebx
                        char* const ebx_1 = &data_801800
                        
                        if (ecx_8 != 0)
                            ebx_1 = ecx_8
                        
                        char* ecx_9 = ebx_1
                        void* edx_5 = &ecx_9[1]
                        
                        do
                            eax_8.b = *ecx_9
                            ecx_9 = &ecx_9[1]
                        while (eax_8.b != 0)
                        
                        int32_t eax_9 = sub_687730(ecx_9 - edx_5 + 1)
                        uint32_t count = ecx_9 - edx_5 + 1
                        *var_1020_1 = eax_9
                        memcpy(eax_9, ebx_1, count)
                        ebx = var_1024
                
                edi_1 += 1
            while (edi_1 s< eax_6)
        
        sub_66d750(ecx, ebx)
        int32_t ecx_14
        ecx_14.b = 1
        result = sub_665770(ecx_14)
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_1)
                int32_t temp2_1 = result[1]
                result[1] -= 1
                
                if (temp2_1 == 1)
                    result = sub_64c080(result, result[3] + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
