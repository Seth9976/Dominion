// 函数: sub_62b4e0
// 地址: 0x62b4e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76b9c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* ecx
void* edx
ecx, edx = __chkstk(0x3338)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t esi
int32_t var_18 = esi
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_3348
int32_t var_19a4[0x301]
memcpy(&var_19a4, sub_4e49d0(esi, &var_3348), 0x1990)
char eax_4
int32_t ecx_3

if (sub_4e4720(&var_19a4) == 0 || (*(edx + 0x18) & 0x20) != 0)
    eax_4 = 0
    ecx_3 = 0
else
    eax_4 = 1
    ecx_3 = 1

ecx[1] = ecx_3
ecx[0x1c].b = eax_4
char* result = *ecx

if (result == 1 || result == 0)
    sub_62b450(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x58ec)
    sub_62b450(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x63e0)
    int32_t eax_7 = *ecx
    void var_da0
    
    if (eax_7 == 1)
        void* eax_8 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        eax_7 =
            memcpy(&var_da0, sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x58ec, *(eax_8 + 0x63dc) << 2)
    else if (eax_7 == 0)
        void* eax_11 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        eax_7 =
            memcpy(&var_da0, sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x63e0, *(eax_11 + 0x6ed0) << 2)
    int32_t var_24_2 = 0
    int32_t var_8_1 = 0
    char* var_19a8
    sub_63d850(edx + 0x30, sub_4e0ff0(eax_7, &var_19a4, &var_19a8, *(edx + 0x28)))
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        char* eax_14 = var_19a8
        
        if (eax_14 != 0 && *eax_14 != 0)
            char* eax_15 = sub_63d4e0(&var_19a8)
            int32_t temp0_1 = *(eax_15 + 4)
            *(eax_15 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
    
    int32_t var_8_3 = 0xffffffff
    int32_t var_19b4
    void* var_19b0
    uint32_t eax_16 = sub_4daf40(&var_19b0, &var_19b4)
    void* _Destination_1 = nullptr
    void* ebx_2
    
    if (eax_16 s> 0)
        while (sub_4db700(*(var_19b0 + (_Destination_1 << 2)), 3) == 0)
            _Destination_1 += 1
            
            if (_Destination_1 s>= eax_16)
                goto label_62b6ef
        
        ebx_2 = 6
    
    if (eax_16 s<= 0 || *(var_19b4 + (_Destination_1 << 2)) == 0x63)
    label_62b6ef:
        ebx_2 = 4
    
    int32_t eax_21 = *ecx
    
    if (eax_21 == 1)
        *(edx + 0x18) &= 0xffffffdf
        
        if (ebx_2 == 4)
            *(edx + 0x4ac) = 0
            *(edx + 0xb30) = 0
        
        *(edx + 0x54) = 1
        void* ecx_28 = edx + 0x58
        int32_t edx_5 = 0
        _Destination_1 = ebx_2
        *ecx_28 = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x4250)
        void* i
        
        do
            int32_t eax_24 = *(ecx_28 - 4)
            
            if (eax_24 != 0 && (eax_24 != 2 || *ecx_28 != 1))
                edx_5 += 1
            
            ecx_28 += 0x22c
            i = _Destination_1
            _Destination_1 -= 1
        while (i != 1)
        
        if (edx_5 s< 2)
            uint32_t _Count = 0x10
            *(edx + 0x284) = _Destination_1
            _Destination_1 = edx + 0x26c
            char* _Source = "REQUIRED"
            char* _Destination = _Destination_1
            *(edx + 0x280) = 2
            ecx_28 = strncpy(_Destination, _Source, _Count)
            *(_Destination_1 + 0xf) = 0
        
        void* var_24_4 = ecx_28
        sub_4e3a00()
        
        if (*(edx + 0x20) == 0)
            *(edx + 0x20) = 5
        
        if ((ecx[2].b & 1) != 0)
            *(edx + 0x280) = 2
            *(edx + 0x284) = 0
            *(edx + 0x4ac) = 2
            *(edx + 0x4b0) = 1
            *(edx + 0x6d8) = 2
            *(edx + 0x6dc) = 1
            *(edx + 0x904) = 2
            *(edx + 0x908) = 1
            *(edx + 0xb30) = 2
            *(edx + 0xb34) = 1
            
            if (ebx_2 == 4)
                *(edx + 0x4ac) = 0
                *(edx + 0xb30) = 0
            
            *(edx + 0x18) |= 0x20
    else if (eax_21 == 0)
        if (ebx_2 == 4)
            *(edx + 0x4ac) = eax_21
            *(edx + 0xb30) = eax_21
        
        *(edx + 0x54) = 0x3e8
        void* ecx_32 = edx + 0x58
        int32_t edx_6 = 0
        *ecx_32 = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x42b0)
        void* i_1
        
        do
            int32_t eax_28 = *(ecx_32 - 4)
            
            if (eax_28 != 0 && (eax_28 != 2 || *ecx_32 != 1))
                edx_6 += 1
            
            ecx_32 += 0x22c
            i_1 = ebx_2
            ebx_2 -= 1
        while (i_1 != 1)
        
        if (edx_6 s< 2)
            uint32_t _Count_1 = 0x10
            _Destination_1 = edx + 0x26c
            *(edx + 0x280) = 3
            char* _Source_1 = "Very Easy AI"
            *(edx + 0x284) = 3
            ecx_32 = strncpy(_Destination_1, _Source_1, _Count_1)
            *(_Destination_1 + 0xf) = ebx_2.b
            *(edx + 0x27c) = 0x169
        
        void* var_24_5 = ecx_32
        sub_4e3a00()
    
    data_cc8dc8
    result = sub_4d8ad0(_Destination_1)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
