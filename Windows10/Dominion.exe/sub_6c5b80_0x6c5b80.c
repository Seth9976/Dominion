// 函数: sub_6c5b80
// 地址: 0x6c5b80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_770495
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1
char* eax_3 = ebx[8]
char* const esi = &data_801800

if (eax_3 != 0)
    esi = eax_3

char* const eax_4 = &data_801800
char* result

while (true)
    arg1.b = *esi
    char temp0_1 = *eax_4
    bool c_1 = arg1.b u< temp0_1
    
    if (arg1.b == temp0_1)
        if (arg1.b == 0)
            result = nullptr
            break
        
        arg1.b = esi[1]
        char temp1_1 = eax_4[1]
        c_1 = arg1.b u< temp1_1
        
        if (arg1.b == temp1_1)
            esi = &esi[2]
            eax_4 = &eax_4[2]
            
            if (arg1.b != 0)
                continue
            
            result = nullptr
            break
    
    result = sbb.d(eax_4, eax_4, c_1) | 1
    break

if (result != 0)
    result = sub_6c5840(ebx)
    char edx = 0
    uint32_t ecx_2 = zx.d(arg2) ^ 1
    
    if (result.b == 0)
        edx = ecx_2.b
    
    if (edx != 0)
        result, ecx_2 = sub_6c5df0(ebx)
    
    if ((edx == 0 || result.b == 0) && data_8c4157 != 0)
        uint32_t eax_6 = ebx[8]
        int32_t esi_1 = ebx[1]
        uint32_t var_38 = ecx_2
        var_38 = eax_6
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_63d4e0(&var_38)
            *(eax_7 + 4) += 1
        
        uint8_t* result_1
        sub_6c4b90(&result_1, esi_1)
        int32_t var_8_1 = 0
        uint32_t eax_8 = ebx[8]
        var_38 = eax_8
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_63d4e0(&var_38)
            *(eax_9 + 4) += 1
        
        char* result_3
        sub_6c5250(&result_3)
        var_8_1.b = 1
        char* result_5 = result_3
        char* result_2 = result_5
        
        if (result_5 != 0 && *result_5 != 0)
            char* eax_10 = sub_63d4e0(&result_2)
            *(eax_10 + 4) += 1
        
        var_8_1.b = 2
        int32_t* ecx_9 = data_147d094
        var_38 = &result_2
        sub_63d850(ecx_9, var_38)
        var_8_1.b = 3
        
        if (data_cf65bc != 0 && result_5 != 0 && *result_5 != 0)
            char* eax_11 = sub_63d4e0(&result_2)
            int32_t temp2_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
        
        var_8_1.b = 1
        char* const edx_4 = &data_801800
        void* eax_12 = data_147ac2c
        uint8_t* result_6 = &data_801800
        int32_t edi_1 = *(eax_12 + 0x20)
        char* eax_13 = ebx[8]
        var_38 = *(eax_12 + 0x24)
        
        if (eax_13 != 0)
            edx_4 = eax_13
        
        uint8_t* result_4 = result_1
        
        if (result_4 != 0)
            result_6 = result_4
        
        sub_6a2160(result_4, edx_4, result_6, ebx[1], edi_1, var_38)
        sub_63d720(&result_2, &data_801800)
        var_8_1.b = 4
        int32_t* ecx_13 = data_147d094
        var_38 = &result_2
        result = sub_63d850(ecx_13, var_38)
        var_8_1.b = 5
        
        if (data_cf65bc != 0)
            result = result_2
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_2)
                int32_t temp3_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp3_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
        
        var_8_1.b = 6
        
        if (data_cf65bc != 0)
            result = result_3
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_3)
                int32_t temp4_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp4_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
                    result_3 = &data_801800
        
        int32_t var_8_2 = 7
        
        if (data_cf65bc != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_1)
                int32_t temp5_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp5_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
